package mvn_hsql_jdbc.db;

import java.sql.*;

public class HsqlQuerysSelect {
	
		public HsqlQuerysSelect(Statement stat) {
			userInfo(stat);
		}
	
		private void userInfo(Statement stat) {
			
			String selectUserRole = "SELECT login, roles_permissions from t_sys_users inner join t_sys_enums on roleID = t_sys_enums.id";
			String selectUserPermission = "SELECT login, roles_permissions from t_sys_users inner join t_sys_enums on PermissionID = t_sys_enums.id";

			
			try{
			
				ResultSet rsRole = stat.executeQuery(selectUserRole);
				ResultSet rsPermission = stat.executeQuery(selectUserPermission);
				
				System.out.println("----------------------------------------------------------");
				
				while(rsRole.next()) {
					String login = rsRole.getString("login");
					String roles_permissions = rsRole.getString("roles_permissions");
					System.out.println("Uzytkownik: " + login + ", nalezy do grupy: " + roles_permissions +".");
					System.out.println("----------------------------------------------------------");
				}

				while(rsPermission.next()) {
					String login = rsPermission.getString("login");
					String roles_permissions = rsPermission.getString("roles_permissions");
					System.out.println("Uzytkownik: " + login + ", ma uprawnienia: " + roles_permissions +".");
					System.out.println("----------------------------------------------------------");
				}
				
				rsRole.close();
				rsPermission.close();
				
			} catch(SQLException e) {
				System.out.println ("Blad podczas odczytu danych z tabeli t_sys_users i t_sys_enums");
				
				try {
					stat.close();
				} catch (SQLException e2) {
					System.out.println("Bląd podczas zamykania zmiennej do zapytań stat");
				}
			}
			
			
		}
}

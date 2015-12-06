package mvn_hsql_jdbc.db;

import java.sql.*;

public class HsqlQuerysInsert {
	
	public HsqlQuerysInsert(Statement stat) {
		InsertInTo_t_sys_enums(stat);
		InsertInTo_t_sys_roles(stat);
		InsertInTo_t_sys_permissions(stat);
		InsertInTo_t_sys_users(stat);
	}
	
	private void InsertInTo_t_sys_enums (Statement stat) {
		
		 String[] insertSQLTable = {"INSERT INTO t_sys_enums (roles_permissions) VALUES (\'zdalny_uzytkownik_koncowy\')",
								"INSERT INTO t_sys_enums (roles_permissions) VALUES (\'lokalny_uzytkownik_koncowy\')",
								"INSERT INTO t_sys_enums (roles_permissions) VALUES (\'konserwator_systemowy\')",
								"INSERT INTO t_sys_enums (roles_permissions) VALUES (\'moderator\')",
								"INSERT INTO t_sys_enums (roles_permissions) VALUES (\'junior_developer\')",
								"INSERT INTO t_sys_enums (roles_permissions) VALUES (\'senior_developer\')",
								"INSERT INTO t_sys_enums (roles_permissions) VALUES (\'administrator\')",
								"INSERT INTO t_sys_enums (roles_permissions) VALUES (\'wlasciciel\')",
								"INSERT INTO t_sys_enums (roles_permissions) VALUES (\'read_only\')", 
								"INSERT INTO t_sys_enums (roles_permissions) VALUES (\'write_read\')",
								"INSERT INTO t_sys_enums (roles_permissions) VALUES (\'write_read_access\')",
								"INSERT INTO t_sys_enums (roles_permissions) VALUES (\'full_access\')" };
		 
		 int licznik = 0;
		 int temp = 0;
		 
		 try{
		 
		 for (int i = 0; i<insertSQLTable.length; i++) {
			 temp = stat.executeUpdate(insertSQLTable[i]);
			 if(temp == 1) licznik++;
		 }
		 
		 }catch(SQLException e) {
			 System.out.println("Blad podczas operacji insert into t_sys_enums");
			 
			 try {
					stat.close();
				} catch (SQLException e2) {
					System.out.println("Bląd podczas zamykania zmiennej do zapytań stat");
				}
		 }
		 
		 System.out.println("dodano " + licznik + " rekordów do t_sys_enums");
	}
	
	private void InsertInTo_t_sys_roles (Statement stat) {
		
		 String[] insertSQLTable = {"INSERT INTO t_sys_roles (IDRolesPermissions) VALUES (1)",
				 					"INSERT INTO t_sys_roles (IDRolesPermissions) VALUES (2)",								
				 					"INSERT INTO t_sys_roles (IDRolesPermissions) VALUES (3)",								
				 					"INSERT INTO t_sys_roles (IDRolesPermissions) VALUES (4)",								
				 					"INSERT INTO t_sys_roles (IDRolesPermissions) VALUES (5)",								
				 					"INSERT INTO t_sys_roles (IDRolesPermissions) VALUES (6)",								
				 					"INSERT INTO t_sys_roles (IDRolesPermissions) VALUES (7)",
				 					"INSERT INTO t_sys_roles (IDRolesPermissions) VALUES (8)", };								
		 
		 int licznik = 0;
		 int temp = 0;
		 
		 try{
		 
		 for (int i = 0; i<insertSQLTable.length; i++) {
			 temp = stat.executeUpdate(insertSQLTable[i]);
			 if(temp == 1) licznik++;
		 }
		 
		 }catch(SQLException e) {
			 System.out.println("Blad podczas operacji insert into t_sys_roles");
			 
			 try {
					stat.close();
				} catch (SQLException e2) {
					System.out.println("Bląd podczas zamykania zmiennej do zapytań stat");
				}
		 }
		 
		 System.out.println("dodano " + licznik + " rekordów do t_sys_roles");
	}
	
	
	private void InsertInTo_t_sys_permissions (Statement stat) {
		
		 String[] insertSQLTable = {"INSERT INTO t_sys_permissions (IDRolesPermissions) VALUES (9)",
				 					"INSERT INTO t_sys_permissions (IDRolesPermissions) VALUES (10)",								
				 					"INSERT INTO t_sys_permissions (IDRolesPermissions) VALUES (11)",								
				 					"INSERT INTO t_sys_permissions (IDRolesPermissions) VALUES (12)", };								
		 
		 int licznik = 0;
		 int temp = 0;
		 
		 try{
		 
		 for (int i = 0; i<insertSQLTable.length; i++) {
			 temp = stat.executeUpdate(insertSQLTable[i]);
			 if(temp == 1) licznik++;
		 }
		 
		 }catch(SQLException e) {
			 System.out.println("Blad podczas operacji insert into t_sys_permissions");
			 
			 try {
					stat.close();
				} catch (SQLException e2) {
					System.out.println("Bląd podczas zamykania zmiennej do zapytań stat");
				}
		 }
		 
		 System.out.println("dodano " + licznik + " rekordów do t_sys_permissions");
	}
	
	private void InsertInTo_t_sys_users (Statement stat) {
		
		 String[] insertSQLTable = {"INSERT INTO t_sys_users (login, password, roleID, permissionID) VALUES (\'user1\', \'pass1\', 1, 9)",
				 					"INSERT INTO t_sys_users (login, password, roleID, permissionID) VALUES (\'user2\', \'pass2\', 2, 10)",								
				 					"INSERT INTO t_sys_users (login, password, roleID, permissionID) VALUES (\'user3\', \'pass3\', 3, 11)",	
				 					"INSERT INTO t_sys_users (login, password, roleID, permissionID) VALUES (\'user4\', \'pass4\', 6, 12)",
				 					"INSERT INTO t_sys_users (login, password, roleID, permissionID) VALUES (\'user5\', \'pass5\', 7, 12)", };
		 
		 int licznik = 0;
		 int temp = 0;
		 
		 try{
		 
		 for (int i = 0; i<insertSQLTable.length; i++) {
			 temp = stat.executeUpdate(insertSQLTable[i]);
			 if(temp == 1) licznik++;
		 }
		 
		 }catch(SQLException e) {
			 System.out.println("Blad podczas operacji insert into t_sys_users");
			 
			 try {
					stat.close();
				} catch (SQLException e2) {
					System.out.println("Bląd podczas zamykania zmiennej do zapytań stat");
				}
		 }
		 
		 System.out.println("dodano " + licznik + " rekordów do t_sys_users");
	}
	
}

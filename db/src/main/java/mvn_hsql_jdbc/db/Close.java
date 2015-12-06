package mvn_hsql_jdbc.db;

import java.sql.*;

public class Close {
	
		public Close(Connection conn, Statement stat) {
			
			try {
			stat.close();
			conn.close();
			System.out.println("Zwolniono zasoby i zamknięto połączenie z bazą danych");
			} catch(SQLException e) {
				System.out.println("Błąd podczas zamykania bazy danych i zwalniania zasobów"); 
			}
		}
}

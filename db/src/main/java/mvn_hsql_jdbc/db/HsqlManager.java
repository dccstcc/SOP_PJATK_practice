package mvn_hsql_jdbc.db;

import java.sql.*;

public class HsqlManager {
	
		public HsqlManager() {
			
		}
	
		private final String url = "jdbc:hsqldb:hsql"; //://localhost/workdb
		private final String driverConnector = "org.hsqldb.jdbc.JDBCDriver";
		
		private Connection connection;
		private Statement statement;
		
		public Connection setConnection() {
			
			try {
	            Class.forName(driverConnector);
	        } catch (ClassNotFoundException e) {
	            System.out.println("Błąd ładowania sterownika JDBC HSQL");
	        }
			
			try {
			connection = DriverManager.getConnection(url);
			} catch (SQLException e) {
				System.out.println ("Blad podczas uzyskiwania polaczenia");
			}
			
			return connection;
		}
		
		public void getMetaDate(Connection conn) {
			
			DatabaseMetaData md;  // metadane
			try {
			
			md = conn.getMetaData();
			
			// odpytywanie metadanych o różne
			 // informacje
			System.out.println(md.getDatabaseProductName());
			System.out.println( md.getDatabaseProductVersion());
			System.out.println( md.getDriverName());
			System.out.println( md.getURL());
			System.out.println( md.getUserName());
			System.out.println( md.supportsAlterTableWithAddColumn());
			System.out.println( md.supportsAlterTableWithDropColumn());
			System.out.println( md.supportsANSI92FullSQL());
			System.out.println( md.supportsBatchUpdates());
			System.out.println( md.supportsMixedCaseIdentifiers());
			System.out.println( md.supportsMultipleTransactions());
			System.out.println( md.supportsPositionedDelete());
			System.out.println( md.supportsPositionedUpdate());
			System.out.println( md.supportsSchemasInDataManipulation());
			System.out.println( md.supportsTransactions());
			System.out.println( md.supportsResultSetType(ResultSet.TYPE_SCROLL_INSENSITIVE));
			System.out.println( md.supportsResultSetType(ResultSet.TYPE_SCROLL_SENSITIVE));
			System.out.println( md.insertsAreDetected(ResultSet.TYPE_SCROLL_INSENSITIVE));
			System.out.println( md.updatesAreDetected(ResultSet.TYPE_SCROLL_INSENSITIVE));
			
			} catch (SQLException e) {
				System.out.println("Nie mozna uzyskac meta danych z bazy / blad");
			}
		}
		
		public Statement getStatement(Connection conn) {
			Statement varHelper = null;
			try {
			varHelper = conn.createStatement();
			return varHelper;
			}	catch (SQLException e) {
				System.out.println("Nieudane odwolanie do obiektu typu Statement");
				return varHelper;
			}	
		}
		
		
		
		
		
		
}

package mvn_hsql_jdbc.db;

import java.sql.*;

public class Main {
	
	public static void start() {
		
		HsqlManager hsqlManager = new HsqlManager(); //uzyskuje dostęp do obiektu-połączenia 
		Connection hsql = hsqlManager.setConnection(); //ustanawiam połączenie
		hsqlManager.getMetaDate(hsql); //wypisuję meta-dane 
		Statement statement = hsqlManager.getStatement(hsql); //uzyskuję obiekt do zapytań
		
		new HsqlQuerys(hsql, statement); //tworzę 4 tabele
		
		new HsqlQuerysInsert(statement); //wypelniam tabele danymi
	 
		new HsqlQuerysSelect(statement); //odczytuje tabele
		
		new Close(hsql, statement); // zwalniam zasoby
	}

	public static void main(String[] args) {
		start();
	}

}

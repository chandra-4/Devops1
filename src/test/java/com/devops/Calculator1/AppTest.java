package com.devops.Calculator1;

import static org.junit.jupiter.api.Assertions.assertEquals;

import org.junit.jupiter.api.Test;

public class AppTest
{
	 @Test
	    public void testAddition() {

	        App app = new App();

	        int result = app.add(5,3);

	        assertEquals(8,result);

	    }
    
}

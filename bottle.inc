  
//=====================================================================
//                      Water Bottle
//=====================================================================
  
#declare bottle = union{  
//bottle
lathe{
	cubic_spline 19,	
	<0.03,1.40>,	
	<0.05,1.25>,	
	<0.08,1.17>,	
	<0.13,1.13>,	
	<0.15,1.07>,	
	<0.145,0.95>,	
	<0.125,0.90>,	
	<0.125,0.85>,	
	<0.125,0.80>,	
	<0.135,0.75>,	
	<0.145,0.60>,	
	<0.16,0.46>,	
	<0.16,0.27>,	
	<0.16,0.13>,	
	<0.16,0.03>,	
	<0.12,0.012>,	
	<0.07,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>
        texture{ 
            pigment{ color Black }
            finish { phong 1 diffuse 0.1 ambient 0.6 specular 1 reflection {0.02}}
           }
               
//logo               
      /*      pigment { image_map { jpeg "logo.jpg" // the file to read (iff/gif/tga/png/sys)
                        map_type 0 // 0=planar, 1=spherical, 2=cylindrical, 5=torus
                        interpolate 2 // 0=none, 1=linear, 2=bilinear, 4=normalized distance
                        once 
                        } // image_map
            scale <0,0.5,0>
            translate <0,0,0>
           }  */
           
            
            scale 4      
	     }
	     
	//rubber grip    
	lathe{
	cubic_spline 19,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,1.07>,
	//start rubber grip	
	<0.143,0.95>,	
	<0.1256,0.90>,	
	<0.1256,0.85>,	
	<0.1256,0.80>,	
	<0.1356,0.75>,	
	<0.1456,0.60>,	
	//end rubber grip	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>	
	<0.00,0.00>,	
	<0.00,0.00>
      
texture{
    pigment{
      aoi
      color_map{
	[0.00 rgb <.0075, .0175, .0025>]
	[0.55 rgb <.020, .022, .024>]
	[0.65 rgb <.004, .004, .004>]
	[0.85 rgb <.006, .002, .001>]
	[1.00 rgb <.007, .004, .001>]
    } 
    poly_wave 1.25
    scale 0.1
    }
    normal {bozo 0.2 scale 0.25}
    finish{
      specular .015
      roughness .075
      brilliance 0.275
    }
  }
	scale 4
}


//rubber lid
lathe{
	cubic_spline 19,	
	<0.030,1.40>,	
	<0.050,1.25>,	
	<0.083,1.17>,	
	<0.15,1.13>,	
	<0.155,1.07>,	
	<0.13,0.95>,	
	<0.00,0.90>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>
texture{
    pigment{
      aoi
      color_map{
	[0.00 rgb <.0075, .0175, .0025>]
	[0.55 rgb <.020, .022, .024>]
	[0.65 rgb <.004, .004, .004>]
	[0.85 rgb <.006, .002, .001>]
	[1.00 rgb <.007, .004, .001>]
    } 
    poly_wave 1.25
    scale 0.1
    }
    normal {bozo 0.2 scale 0.25}
    finish{
      specular .015
      roughness .075
      brilliance 0.275
    }
  }
            scale 4 
            translate <0,0,0>     
	     }


//plastic lid
lathe{
	cubic_spline 19,	
	<0.031,1.40>,	
	<0.051,1.25>,	
	<0.084,1.17>,	
	<0.16,1.13>,	
	<0.00,0.90>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>,	
	<0.00,0.00>
        texture{ 
            pigment{ color Black }
            finish { phong 1 diffuse 0 ambient 0 }
           }
            scale 4 
            translate <0,0,0>     
	     }



     
//cap
//lid bottom bit
object{ Round_Conic_Torus( 0.31, // >0, vertical center distance of the upper and lower torii
                           0.12, // >0, upper radius up by <0,C_distance,0>
                           0.07, // >0,  lower radius on zero !!!
                           0.04, // border radius, // max. = min(lower radius, upper radius)
                           0 // Merge_On
                         ) // ------------------------------------------------  
         texture{ pigment{ color Blue}
                  finish { phong 1}
                } // end of texture
          scale<0,0,0>  rotate<25,0,0>  translate<0,4.62,-0.4>
       }  // end of object ---------------------------------------------------
//---------------------------------------------------------------------------- 


//lid top pointy bit
object{ Round_Conic_Torus( 0.31, // >0, vertical center distance of the upper and lower torii
                           0.12, // >0, upper radius up by <0,C_distance,0>
                           0.125, // >0,  lower radius on zero !!!
                           0.04, // border radius, // max. = min(lower radius, upper radius)
                           0 // Merge_On
                         ) // ------------------------------------------------  
         texture{ pigment{ color Blue}
                  finish { phong 1}
                } // end of texture
          scale<0,0,0>  rotate<-65,0,0>  translate<0,5.05,-0.33>
       }  // end of object ---------------------------------------------------
//---------------------------------------------------------------------------- 

//lid top round hole cover bit
object{ Round_Cylinder_Tube( <0,0,0>, // starting point
                             <0.0,1,0>, // end point
                             0.21, // major radius
                             0.06, // minor radius (borders)
                             0,  //  1 = filled; 0 = open tube 
                             1 // 0 = union, 1 = merge for transparent materials 
                           ) //-------------------------------------------------
        texture{ pigment{ color Blue } 
                 finish { phong 1}                               
               } // end texture
        scale <0,0,0> 
        rotate<0,0,0> 
        translate<0,4.03,0>
      } // end of object ------------------------------------------------------- 
//------------------------------------------------------------------------------

//closes bottom of lid
object{ Round_Cylinder_Tube( <0,0,0>, // starting point
                             <0.0,1,0>, // end point
                             0.21, // major radius
                             0.06, // minor radius (borders)
                             1,  //  1 = filled; 0 = open tube 
                             1 // 0 = union, 1 = merge for transparent materials 
                           ) //-------------------------------------------------
        texture{ pigment{ color Blue } 
                 finish { phong 1}                               
               } // end texture
        scale <0,0,0> 
        rotate<0,0,0> 
        translate<0,3.9,0>
      } // end of object ------------------------------------------------------- 
//------------------------------------------------------------------------------ 

//top plastic bit lid hinge
cylinder { <-0.1,0,0>,<0.1,0,0>, 0.10
        texture{ 
            pigment{ color Black }
            finish { phong 1 diffuse 0 ambient 0 }
           } // end of texture
           scale <1,1,1> rotate<0,0,0> translate<0,4.67,-0.4>
         } // end of cylinder  ------------------------------------


 
}//end bottle object and its unions   

//---------- Bottle Logo --------------------

#declare bottleLogo = box { <0, 0.00, 0>,< 4.5, 2, 0>   
             texture { pigment { 
                         image_map { jpeg "logo.jpg"
                                     map_type 0 
                                     // interpolate 2 
                                     once 
                                    } // image_map 
                               } //pigment 
              } // end of texture  
      //scale <1,0.75,1> //rotate<0,180,0> //translate<0,-0.05,0.302> 
    } // end of box --------------------------------------
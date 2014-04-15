//
//  VPConfiguration.h
//  ViaPlace
//
//  Created by Charles Berlin on 12/28/12.
//  Copyright (c) 2012 Charles Berlin. All rights reserved.
//

//Constant Declarations for server development type
#define VPServerProduction      0
#define VPServerStaging         1
#define VPServerBeta            2


//Set developmet environment here
#ifndef VPServer
#define VPServer VPServerProduction
#endif

//Add your viaplace api key here
#define VPAPIKey @"3e1e0416b0a07276ddbbcc1a2448df1443c04fec"

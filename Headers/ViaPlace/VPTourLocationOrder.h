//
//  VPTourLocationOrder.h
//  ViaPlace
//
//  Created by Charles Berlin on 1/3/13.
//  Copyright (c) 2013 Charles Berlin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class VPTour;

@interface VPTourLocationOrder : NSManagedObject

@property (nonatomic, retain) NSString * locationId;
@property (nonatomic, retain) NSNumber * order;
@property (nonatomic, retain) NSString * tourId;
@property (nonatomic, retain) VPTour *tour;
@property (nonatomic, retain) NSManagedObject *location;

@end

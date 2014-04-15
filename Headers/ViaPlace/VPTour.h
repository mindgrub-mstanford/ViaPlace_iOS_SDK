//
//  VPTour.h
//  ViaPlace
//
//  Created by Charles Berlin on 1/3/13.
//  Copyright (c) 2013 Charles Berlin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import <UIKit/UIKit.h>

@interface VPTour : NSManagedObject

@property (nonatomic, retain) NSString * desc;
@property (nonatomic, retain) NSString * duration;
@property (nonatomic, retain) NSString * imageUrl;
@property (nonatomic, retain) NSNumber * locationCount;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * stopCount;
@property (nonatomic, retain) NSNumber * tourId;
@property (nonatomic, retain) NSSet *locations;
@property (nonatomic, retain) NSString * thumbNailUrl;
@property (nonatomic, retain) UIImage * image;
@property (nonatomic, retain) UIImage * thumbNail;

- (NSArray*) getOrderedLocations;

@end

@interface VPTour (CoreDataGeneratedAccessors)

- (void)addLocationsObject:(NSManagedObject *)value;
- (void)removeLocationsObject:(NSManagedObject *)value;
- (void)addLocations:(NSSet *)values;
- (void)removeLocations:(NSSet *)values;

@end

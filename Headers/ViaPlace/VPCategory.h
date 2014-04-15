//
//  VPCategory.h
//  ViaPlace
//
//  Created by Charles Berlin on 1/3/13.
//  Copyright (c) 2013 Charles Berlin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class VPLocation;

@interface VPCategory : NSManagedObject

@property (nonatomic, retain) NSNumber * categoryId;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *points;
@end

@interface VPCategory (CoreDataGeneratedAccessors)

- (void)addPointsObject:(VPLocation *)value;
- (void)removePointsObject:(VPLocation *)value;
- (void)addPoints:(NSSet *)values;
- (void)removePoints:(NSSet *)values;

@end

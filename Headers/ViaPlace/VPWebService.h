//
//  VPWebService.h
//  ViaPlace
//
//  Created by Charles Berlin on 12/27/12.
//  Copyright (c) 2012 Charles Berlin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VPBlockTypes.h"
#import "VPConfiguration.h"
#import <RestKit/RestKit.h>
#import "VPTour.h"

extern NSString * const VPErrorDomain;

@interface VPWebService : NSObject
{
    RKObjectManager *objectManager;
    
    RKEntityMapping * categoryMap;
    RKEntityMapping * mediaItemMap;
    RKEntityMapping * locationMap;
    RKEntityMapping * tourLocationOrderMap;
    RKEntityMapping * tourMap;
}

+ (VPWebService*) sharedInstance;
@property (nonatomic, readonly) NSManagedObjectContext *vpContext;

- (void) getLocationsWithSuccessBlock:(SuccessBlock)success AndFailureBlock:(FailureBlock)failure UsesCache:(BOOL)useCache;
- (void) getCategoriesWithSuccessBlock:(SuccessBlock)success AndFailureBlock:(FailureBlock)failure UsesCache:(BOOL)useCache;
- (void) getToursWithSuccessBlock:(SuccessBlock)success AndFailureBlock:(FailureBlock)failure UsesCache:(BOOL)useCache;
- (void) getTour:(VPTour*)tour WithSuccessBlock:(SuccessBlock)success AndFailureBlock:(FailureBlock)failure UsesCache:(BOOL)useCache;

@end

//
//  VPLocation.h
//  ViaPlace
//
//  Created by Charles Berlin on 1/3/13.
//  Copyright (c) 2013 Charles Berlin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import <MapKit/MapKit.h>

@class VPCategory, VPMediaItem, VPTourLocationOrder;

@interface VPLocation : NSManagedObject <MKAnnotation>

@property (nonatomic, retain) NSNumber * active;
@property (nonatomic, retain) NSString * address;
@property (nonatomic, retain) NSString * address2;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSNumber * clientId;
@property (nonatomic, retain) NSString * clientImageFilename;
@property (nonatomic, retain) NSString * country;
@property (nonatomic, retain) NSString * desc;
@property (nonatomic, retain) NSString * imageFilename;
@property (nonatomic, retain) NSNumber * latitude;
@property (nonatomic, retain) NSNumber * locationId;
@property (nonatomic, retain) NSNumber * longitude;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * phone;
@property (nonatomic, retain) NSString * postal;
@property (nonatomic, retain) NSString * state;
@property (nonatomic, retain) NSString * url;
@property (nonatomic, retain) NSString * additionalInfo;
@property (nonatomic, retain) NSSet *categories;
@property (nonatomic, retain) NSSet *mediaItems;
@property (nonatomic, retain) NSSet *tourOrders;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImage *thumbNail;
@property (nonatomic, retain) NSString *thumbNailUrl;

@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *subtitle;

- (NSArray*) getAllCategoryPoints;

@end

@interface VPLocation (CoreDataGeneratedAccessors)

- (void)addCategoriesObject:(VPCategory *)value;
- (void)removeCategoriesObject:(VPCategory *)value;
- (void)addCategories:(NSSet *)values;
- (void)removeCategories:(NSSet *)values;

- (void)addMediaItemsObject:(VPMediaItem *)value;
- (void)removeMediaItemsObject:(VPMediaItem *)value;
- (void)addMediaItems:(NSSet *)values;
- (void)removeMediaItems:(NSSet *)values;

- (void)addTourOrdersObject:(VPTourLocationOrder *)value;
- (void)removeTourOrdersObject:(VPTourLocationOrder *)value;
- (void)addTourOrders:(NSSet *)values;
- (void)removeTourOrders:(NSSet *)values;

@end

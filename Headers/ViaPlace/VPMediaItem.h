//
//  VPMediaItem.h
//  ViaPlace
//
//  Created by Charles Berlin on 1/3/13.
//  Copyright (c) 2013 Charles Berlin. All rights reserved.
//
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class VPLocation;

typedef enum{
    VPMediaItemTypeImage,
    VPMediaItemTypeAudio,
    VPMediaItemTypeVideo
}VPMediaItemType;

@interface VPMediaItem : NSManagedObject

@property (nonatomic, retain) NSString * fileNameUrl;
@property (nonatomic, retain) NSNumber * itemId;
@property (nonatomic, retain) NSNumber * pointId;
@property (nonatomic, retain) NSString * thumbnailUrl;
@property (nonatomic, retain) NSNumber * type;
@property (nonatomic, retain) VPLocation *point;
@property (nonatomic, retain) UIImage *thumbNail;
@property (nonatomic, retain) UIImage *image;

@end

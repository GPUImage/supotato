//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface ABTestTaskModel : NSObject
{
    BOOL _isNeedUITest;
    NSString *_bucketName;
    NSString *_taskDescription;
    NSString *_systemTime;
    NSArray *_codeBlockArray;
    NSString *_btsName;
    NSString *_bucketId;
    NSString *_expTime;
    NSString *_group;
    NSString *_groupConfig;
    NSString *_type;
    NSString *_bTrack;
    NSDictionary *_uiDic;
    NSArray *_viewsList;
    NSArray *_labelsList;
    NSArray *_buttonsList;
    NSArray *_imageViewsList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bTrack; // @synthesize bTrack=_bTrack;
@property(retain, nonatomic) NSString *btsName; // @synthesize btsName=_btsName;
@property(retain, nonatomic) NSString *bucketId; // @synthesize bucketId=_bucketId;
@property(retain, nonatomic) NSString *bucketName; // @synthesize bucketName=_bucketName;
@property(retain, nonatomic) NSArray *buttonsList; // @synthesize buttonsList=_buttonsList;
@property(retain, nonatomic) NSArray *codeBlockArray; // @synthesize codeBlockArray=_codeBlockArray;
@property(retain, nonatomic) NSString *expTime; // @synthesize expTime=_expTime;
@property(retain, nonatomic) NSString *group; // @synthesize group=_group;
@property(retain, nonatomic) NSString *groupConfig; // @synthesize groupConfig=_groupConfig;
@property(retain, nonatomic) NSArray *imageViewsList; // @synthesize imageViewsList=_imageViewsList;
- (BOOL)invalid;
@property(nonatomic) BOOL isNeedUITest; // @synthesize isNeedUITest=_isNeedUITest;
@property(retain, nonatomic) NSArray *labelsList; // @synthesize labelsList=_labelsList;
@property(retain, nonatomic) NSString *systemTime; // @synthesize systemTime=_systemTime;
@property(copy, nonatomic) NSString *taskDescription; // @synthesize taskDescription=_taskDescription;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSDictionary *uiDic; // @synthesize uiDic=_uiDic;
@property(retain, nonatomic) NSArray *viewsList; // @synthesize viewsList=_viewsList;

@end


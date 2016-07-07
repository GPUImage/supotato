//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, TBAccsDataEntity, TBAccsRequest;

@protocol AccsRequestErrorProcessor <NSObject>
- (void)oneRequestTimeoutWithRequest:(TBAccsRequest *)arg1;
- (void)requestFailWithRequest:(TBAccsRequest *)arg1 error:(NSError *)arg2;
- (void)requestFinish:(TBAccsRequest *)arg1 entity:(TBAccsDataEntity *)arg2;
- (void)requestTimeoutWithRequest:(TBAccsRequest *)arg1;
@end


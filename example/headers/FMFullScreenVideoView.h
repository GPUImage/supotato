//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMImageScrollView.h"

#import "TBAVVideoProtocol.h"

@class NSString, TBIndividualVideoView;

__attribute__((visibility("hidden")))
@interface FMFullScreenVideoView : FMImageScrollView <TBAVVideoProtocol>
{
    BOOL _shouldPlay;
    TBIndividualVideoView *_innerVideoView;
    CDUnknownBlockType _viewTapAction;
    NSString *_videoURLString;
    struct CGRect _videoFrame;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 videoID:(id)arg2 videoViewFrame:(struct CGRect)arg3;
@property(retain, nonatomic) TBIndividualVideoView *innerVideoView; // @synthesize innerVideoView=_innerVideoView;
- (void)pause;
- (void)play;
- (void)replay;
@property(nonatomic) BOOL shouldPlay; // @synthesize shouldPlay=_shouldPlay;
- (void)setTapAction:(CDUnknownBlockType)arg1;
@property(nonatomic) struct CGRect videoFrame; // @synthesize videoFrame=_videoFrame;
@property(copy, nonatomic) NSString *videoURLString; // @synthesize videoURLString=_videoURLString;
@property(copy, nonatomic) CDUnknownBlockType viewTapAction; // @synthesize viewTapAction=_viewTapAction;
- (void)touchEndedGesture:(id)arg1;
- (void)videoViewDidEndPlayVideo:(id)arg1;
- (void)videoViewDidStartPlayVideo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


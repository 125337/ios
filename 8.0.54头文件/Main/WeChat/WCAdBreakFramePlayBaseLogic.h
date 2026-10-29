@interface WCAdBreakFramePlayBaseLogic : MMObject <WCAdAlphaVideoViewDelegate>
{
    BOOL _bTimelineScene; // +0x8
    WCAdBreakFrameInfo * _adBreakFrameInfo; // +0x10
    WCDataItem * _dataItem; // +0x18
    WCAdAlphaVideoView * _alphaVideoView; // +0x20
}
- (id)initWithBreakFrameInfo:(id)arg1 dataItem:(id)arg2 alphaVideoView:(id)arg3 bTimelineScene:(BOOL)arg4;
- (BOOL)checkPlayMode;
- (void)reset;
- (void)onReferenceVideoPlay;
- (void)onReferenceVideoStop;
- (void)onReferenceVideoPlaybackTimeUpdate:(double)arg1 isPlaying:(BOOL)arg2;
- (void)onSelfLike;
- (void)onSelfCancelLike;
- (void)onSelfComment;
- (id)fetchVideoPlayInfo;
- (id)fetchBreakFrameReportInfo;
- (id)adBreakFrameInfo;
- (id)dataItem;
- (id)alphaVideoView;
- (BOOL)bTimelineScene;
- (void).cxx_destruct;
@end


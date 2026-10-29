@interface WCAdBreakFrameView : MMUIView
{
    BOOL _bTimelineScene; // +0x8
    UIView * _playerControlViewContainer; // +0x10
    id <WCAdBreakFrameViewDelegate> _delegate; // +0x18
    WCAdBreakFrameInfo * _adBreakFrameInfo; // +0x20
    WCDataItem * _dataItem; // +0x28
    WCAdAlphaVideoView * _alphaVideoView; // +0x30
    MMUIButton * _clickView; // +0x38
    WCAdBreakFramePlayBaseLogic * _playLogic; // +0x40
    CGRect _referenceFrame; // +0x48
    CGRect _mediaFrame; // +0x68
    CGRect _clickViewFrame; // +0x88
}
- (id)initWithFrame:(CGRect)arg1 adBreakFrameInfo:(id)arg2 dataItem:(id)arg3 bTimelineScene:(BOOL)arg4 referenceFrame:(CGRect)arg5;
- (void)dealloc;
- (void)setFrame:(CGRect)arg1 referenceFrame:(CGRect)arg2;
- (void)onReferenceVideoPlay;
- (void)onReferenceVideoStop;
- (void)onReferenceVideoPlaybackTimeUpdate:(double)arg1 isPlaying:(BOOL)arg2;
- (void)resetVideoPlayer;
- (BOOL)isVideoDataAvailable;
- (void)downloadVideo;
- (id)fetchVideoMediaId;
- (void)initMediaView;
- (id)createAlphaVideoView;
- (void)initPlayerControlViewContainer;
- (void)initClickView;
- (void)calcMediaFrame;
- (void)calcClickViewFrame;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)checkAreaCanClick:(CGPoint)arg1;
- (void)onClickAreaClick:(id)arg1 forEvent:(id)arg2;
- (void)reportVideoCompositeType;
- (void)registerExtension;
- (void)unRegisterExtension;
- (id)playLogic;
- (void)onCommentSend:(id)arg1 comment:(id)arg2;
- (void)onDataItem:(id)arg1 likeFlagChanged:(BOOL)arg2;
- (id)playerControlViewContainer;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)adBreakFrameInfo;
- (void)setAdBreakFrameInfo:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (BOOL)bTimelineScene;
- (void)setBTimelineScene:(BOOL)arg1;
- (CGRect)referenceFrame;
- (void)setReferenceFrame:(CGRect)arg1;
- (CGRect)mediaFrame;
- (void)setMediaFrame:(CGRect)arg1;
- (id)alphaVideoView;
- (void)setAlphaVideoView:(id)arg1;
- (CGRect)clickViewFrame;
- (void)setClickViewFrame:(CGRect)arg1;
- (id)clickView;
- (void)setClickView:(id)arg1;
- (void)setPlayLogic:(id)arg1;
- (void).cxx_destruct;
@end


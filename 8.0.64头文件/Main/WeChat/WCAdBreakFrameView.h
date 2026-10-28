@interface WCAdBreakFrameView : MMUIView
{
    BOOL _bTimelineScene; // +0x8
    BOOL _canAddEmitter; // +0x9
    UIView * _playerControlViewContainer; // +0x10
    SightIconView * _downloadProgressView; // +0x18
    WCAdURLImageView * _coverImageView; // +0x20
    id <WCAdBreakFrameViewDelegate> _delegate; // +0x28
    WCAdBreakFrameInfo * _adBreakFrameInfo; // +0x30
    WCDataItem * _dataItem; // +0x38
    WCAdAlphaVideoView * _alphaVideoView; // +0x40
    MMUIButton * _clickView; // +0x48
    WCAdBreakFramePlayBaseLogic * _playLogic; // +0x50
    WCAdCardEmitterView * _emitterView; // +0x58
    CGRect _referenceFrame; // +0x60
    CGRect _mediaFrame; // +0x80
    CGRect _clickViewFrame; // +0xa0
}
- (id)initWithFrame:(CGRect)arg1 adBreakFrameInfo:(id)arg2 dataItem:(id)arg3 bTimelineScene:(BOOL)arg4 referenceFrame:(CGRect)arg5;
- (void)dealloc;
- (void)setFrame:(CGRect)arg1 referenceFrame:(CGRect)arg2;
- (void)startAlphaVideoPlayIfNeed;
- (void)pauseAlphaVideoPlayIfNeed;
- (void)onReferenceVideoPlaybackTimeUpdate:(double)arg1 isPlaying:(BOOL)arg2;
- (void)onPlaybackTimeUpdate:(double)arg1;
- (void)onPlayEnd:(BOOL)arg1;
- (void)resetVideoPlayer;
- (BOOL)isVideoDataAvailable;
- (void)downloadVideo;
- (id)fetchVideoMediaId;
- (void)initMediaView;
- (id)createAlphaVideoView;
- (void)initPlayerControlViewContainer;
- (void)initPlayerControl;
- (void)initClickView;
- (void)initCoverImageView;
- (void)initDownloadProgressView;
- (void)calcMediaFrame;
- (void)calcClickViewFrame;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)checkAreaCanClick:(CGPoint)arg1;
- (void)onClickAreaClick:(id)arg1 forEvent:(id)arg2;
- (void)reportVideoCompositeType;
- (void)registerExtension;
- (void)unRegisterExtension;
- (id)playLogic;
- (BOOL)shouldDeleteBreakFrameViewWhileCellEndDisplaying;
- (id)emitterView;
- (void)appendEmitterByGesture:(id)arg1;
- (void)endEmitters;
- (void)onCommentSend:(id)arg1 comment:(id)arg2;
- (void)onDataItem:(id)arg1 likeFlagChanged:(BOOL)arg2;
- (id)playerControlViewContainer;
- (id)downloadProgressView;
- (void)setDownloadProgressView:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
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
- (void)setEmitterView:(id)arg1;
- (BOOL)canAddEmitter;
- (void)setCanAddEmitter:(BOOL)arg1;
- (void).cxx_destruct;
@end

@interface WAFloatingViewBaseWrapper : NSObject
{
    BOOL _showProgressBar; // +0x8
    BOOL _needAddToOriginParentView; // +0x9
    BOOL _isPaused; // +0xa
    unsigned int _playerId; // +0xc
    long long _type; // +0x10
    NSString * _videoURL; // +0x18
    id _videoDelegate; // +0x20
    id _originVideoDelegate; // +0x28
    WAWebViewController * _webview; // +0x30
    UIView * _videoOriginalParentView; // +0x38
    double _startTime; // +0x40
    UIImageView * _videoSnapShotView; // +0x48
    CGPoint _floatVideoInitialPosition; // +0x50
    CGRect _videoOriginalFrame; // +0x60
    CGRect _videoOriginParentViewInWindowFrame; // +0x80
}
- (void)setPlayerId:(unsigned int)arg1 webview:(id)arg2;
- (BOOL)parseFromDic:(id)arg1;
- (void)updateFromDic:(id)arg1;
- (void)setParams;
- (void)resetParams;
- (void)pause;
- (void)play;
- (void)stop;
- (id)playerView;
- (BOOL)canFloat;
- (BOOL)isLoading;
- (id)getCurrentSnapShotImage;
- (void)addToVideoView:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (BOOL)showProgressBar;
- (void)setShowProgressBar:(BOOL)arg1;
- (BOOL)needAddToOriginParentView;
- (void)setNeedAddToOriginParentView:(BOOL)arg1;
- (id)videoURL;
- (void)setVideoURL:(id)arg1;
- (id)videoDelegate;
- (void)setVideoDelegate:(id)arg1;
- (id)originVideoDelegate;
- (void)setOriginVideoDelegate:(id)arg1;
- (unsigned int)playerId;
- (void)setPlayerId:(unsigned int)arg1;
- (id)webview;
- (void)setWebview:(id)arg1;
- (id)videoOriginalParentView;
- (void)setVideoOriginalParentView:(id)arg1;
- (CGRect)videoOriginalFrame;
- (void)setVideoOriginalFrame:(CGRect)arg1;
- (CGRect)videoOriginParentViewInWindowFrame;
- (void)setVideoOriginParentViewInWindowFrame:(CGRect)arg1;
- (BOOL)isPaused;
- (void)setIsPaused:(BOOL)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (CGPoint)floatVideoInitialPosition;
- (void)setFloatVideoInitialPosition:(CGPoint)arg1;
- (id)videoSnapShotView;
- (void)setVideoSnapShotView:(id)arg1;
- (void).cxx_destruct;
@end


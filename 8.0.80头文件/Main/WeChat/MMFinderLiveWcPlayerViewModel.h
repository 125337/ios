@interface MMFinderLiveWcPlayerViewModel : NSObject <WCPlayerControlProtocol>
{
    BOOL _muted; // +0x8
    BOOL _isFirstFrameRendered; // +0x9
    BOOL _hiddenPlayerView; // +0xa
    WCPlayerView * playerView; // +0x10
    MMFinderLiveWcPlayerViewConfig * _config; // +0x18
    NSString * _playUrl; // +0x20
    unsigned long long _status; // +0x28
    id <MMFinderLiveWcPlayerViewModelDelegate> _delegate; // +0x30
    NSString * _pipViewName; // +0x38
    NSString * _pipBusinessId; // +0x40
    MMLiveStorageCleanupPinningToken * _filePinningToken; // +0x48
    MMFinderLiveTaskId * _taskId; // +0x50
    NSMutableArray * _tempARGBColorRequestTaskList; // +0x58
    NSMutableArray * _tempYUVColorRequestTaskList; // +0x60
    NSObject<OS_dispatch_semaphore> * _tempARGBReqTaskLock; // +0x68
    NSObject<OS_dispatch_semaphore> * _tempYUVReqTaskLock; // +0x70
    CGRect _normalizedFrame; // +0x78
}
- (void)addTempARGBColorRequestTask:(id)arg1;
- (void)addTempYUVColorRequestTask:(id)arg1;
- (void)extractPixelColorInfoFromPixelBufferIfNeeded:(__CVBuffer *)arg1;
- (void)checkTempYUVColorRequestTaskListOverLimit;
- (void)checkTempARGBColorRequestTaskListOverLimit;
- (void)extractPixelColorWithRequestTaskList:(id)arg1 fromPixelBufferIfNeeded:(__CVBuffer *)arg2;
- (CGRect)convertNormalizedDisplayFrameFromPixelBuffer:(__CVBuffer *)arg1 withDisplaySize:(CGSize)arg2;
- (CGPoint)convertNormalizedCoordinate:(CGPoint)arg1 toPointInPixelBuffer:(__CVBuffer *)arg2 pixelBufferDisplayNormalizedFrame:(CGRect)arg3;
- (struct)readARGBColorInPixelPoint:(CGPoint)arg1 pixelBuffer:(__CVBuffer *)arg2 ret:(BOOL *)arg3;
- (struct)readYUVColorInPixelPoint:(CGPoint)arg1 pixelBuffer:(__CVBuffer *)arg2 ret:(BOOL *)arg3;
- (id)initTaskId:(id)arg1 config:(id)arg2;
- (void)initDefaultData;
- (void)setStatus:(unsigned long long)arg1;
- (void)setMuted:(BOOL)arg1;
- (id)tempARGBColorRequestTaskList;
- (id)tempYUVColorRequestTaskList;
- (void)updateRemotePlayUrl:(id)arg1;
- (void)updateLocalFilePath:(id)arg1;
- (void)updatePlayUri:(id)arg1 isLocalFile:(BOOL)arg2;
- (void)updatePlayInitialTime:(unsigned int)arg1;
- (void)playFinish;
- (BOOL)play;
- (BOOL)pause;
- (BOOL)resume;
- (unsigned long long)getCurrentStatus;
- (void)requestARGBColorAtNormalizedCoordinateList:(id)arg1 fromRectWithSize:(CGSize)arg2 callback:(id /* block */)arg3;
- (void)requestYUVColorAtNormalizedCoordinateList:(id)arg1 fromRectWithSize:(CGSize)arg2 callback:(id /* block */)arg3;
- (id)createPlayerInfo;
- (id)generateDownloadArgsWrap;
- (void)hiddenBufferingView;
- (void)hiddenPercentView;
- (void)hiddenThumbImageView;
- (void)onCreateThumbImage:(id)arg1;
- (void)onDataSourceChangeStart:(id)arg1;
- (void)onDataSourceChangeSucc:(id)arg1;
- (void)onDataSourceChangeSuccessWithDownloadArgsWrap:(id)arg1;
- (void)onPlayerGetSeiInfo:(id)arg1;
- (void)onPlayerVideoFrameOut:(id)arg1;
- (void)onVideoDidPlayToEndTime;
- (void)onVideoFristFrameRendered;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onVideoPlayFail:(unsigned long long)arg1 errorCode:(int)arg2 LocalizedErrorDes:(id)arg3;
- (void)onVideoPlayFinish;
- (void)onVideoPrepareToPlay:(id)arg1;
- (void)onVideoSizeChange:(CGSize)arg1;
- (void)showBufferingView;
- (void)showPercentView;
- (void)showThumbImageView;
- (void)startObserveVolume;
- (void)stopObserveVolume;
- (void)updateVideoBufferPercent:(double)arg1;
- (void)updateVideoCurrentTime:(double)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)config;
- (id)playUrl;
- (void)setPlayUrl:(id)arg1;
- (unsigned long long)status;
- (BOOL)muted;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pipViewName;
- (void)setPipViewName:(id)arg1;
- (id)pipBusinessId;
- (void)setPipBusinessId:(id)arg1;
- (CGRect)normalizedFrame;
- (void)setNormalizedFrame:(CGRect)arg1;
- (BOOL)isFirstFrameRendered;
- (void)setIsFirstFrameRendered:(BOOL)arg1;
- (id)filePinningToken;
- (void)setFilePinningToken:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)hiddenPlayerView;
- (void)setHiddenPlayerView:(BOOL)arg1;
- (void)setTempARGBColorRequestTaskList:(id)arg1;
- (void)setTempYUVColorRequestTaskList:(id)arg1;
- (id)tempARGBReqTaskLock;
- (void)setTempARGBReqTaskLock:(id)arg1;
- (id)tempYUVReqTaskLock;
- (void)setTempYUVReqTaskLock:(id)arg1;
- (void).cxx_destruct;
@end

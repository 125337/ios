@interface WCFinderLiveReplayPreviewDisplayView : UIView <MMWebImageViewDelegate>
{
    BOOL _isFetchAllPlayerData; // +0x8
    BOOL _fixedResolution; // +0x9
    BOOL _isMainVideoPrepareToPlay; // +0xa
    BOOL _hasPreDownLoadForLittleStride; // +0xb
    BOOL _isPreviewPlayerPrepareToPlay; // +0xc
    BOOL _forbidPreFetchPlayerData; // +0xd
    BOOL _isPreviewingByImg; // +0xe
    BOOL _isPreviewingByPlayer; // +0xf
    BOOL _isStartPreview; // +0x10
    unsigned int _frameInterval; // +0x14
    WCFinderLiveReplayPreviewImgLoader * _previewImgLoader; // +0x18
    id <WCFinderLiveReplayPreviewDisplayDelegate> _previewDelegate; // +0x20
    double _totalTime; // +0x28
    MMFinderLiveTaskId * _taskId; // +0x30
    MMWebImageView * _previewImgView; // +0x38
    WCPlayerView * _previewPlayer; // +0x40
    WCFinderLiveReplayPreviewPlayerControlView * _previewControlView; // +0x48
    NSString * _previewReplayUrl; // +0x50
    double _currentTime; // +0x58
    double _currImgPreviewTime; // +0x60
    double _currImgLoadBackTime; // +0x68
    double _previewPlayerDuration; // +0x70
    double _currPlayerInitialPos; // +0x78
    double _currPlayerPreviewTime; // +0x80
    double _currPlayerPlayBackTime; // +0x88
    MMFinderLiveReplayPreviewResolutionRecordInfo * _currPlayerResolutionRecord; // +0x90
    long long _currentPreviewByMode; // +0x98
    long long _currentPreviewMode; // +0xa0
    long long _currentPreviewState; // +0xa8
    WCPlayerPlaybackInfo * _mainVideoPlayBackInfo; // +0xb0
    double _playerPreviewInvokeStartTime; // +0xb8
    MMFinderLiveReplayGreateTimeModel * _currGreateTimeModel; // +0xc0
    NSMutableArray * _previewVideoResolutionRecordList; // +0xc8
    MMLiveStorageCleanupPinningToken * _resourcesPinningToken; // +0xd0
    CGSize _currPlayerPresentationSize; // +0xd8
}
+ (id)getFixedSectionFromReplayUrl:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 taskId:(id)arg2;
- (void)initData;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutPreviewImgView;
- (void)layoutPreviewPlayer;
- (void)createPreviewPlayerIfNeeded;
- (void)destroyPreviewPlayer;
- (void)changePreviewPlayer;
- (void)reCreatePreviewPlayer;
- (void)adjustPreviewPlayerFrame;
- (void)previewAtOnceWithGreateTime:(id)arg1 byMode:(long long)arg2;
- (void)previewAtOnce:(double)arg1 byMode:(long long)arg2;
- (void)previewWithGreateTime:(id)arg1 byMode:(long long)arg2;
- (void)preview:(double)arg1 byMode:(long long)arg2;
- (void)stopPreview;
- (void)updateReplayPreviewUrl:(id)arg1 fixedResolution:(BOOL)arg2;
- (void)resetToDefaultStridePreview;
- (void)prepareForLargeStridePreview;
- (void)prepareForLittleStridePreview;
- (void)appendPreviewVideoResolutionNodeList:(id)arg1 resolutionSize:(CGSize)arg2;
- (void)onReplayVideoPrepareToPlay:(id)arg1;
- (BOOL)hasPrepareForPreview;
- (BOOL)isSupportOnlyUsePlayerPreviewMode:(double)arg1;
- (void)startPreview;
- (void)updateFrameInterval:(unsigned int)arg1;
- (void)updateCurrentPreviewByMode:(long long)arg1;
- (void)updateCurrentPreviewState:(long long)arg1;
- (void)tryToPreDownLoadPlayerContentForLittleStrideIfNeeded;
- (void)inner_previewAtOnce:(double)arg1;
- (void)inner_preview:(double)arg1;
- (void)resetPreviewByImg;
- (void)resetPreviewByPlayer;
- (void)updatePreviewModeAndDisplaySize;
- (BOOL)updatePreviewMode;
- (BOOL)updateDisplaySize;
- (BOOL)updateCurrentPreviewMode:(long long)arg1;
- (BOOL)updateDisplaySize:(CGSize)arg1 mode:(long long)arg2;
- (BOOL)isCurrentEnablePreviewByImg;
- (BOOL)isCurrentEnablePreviewByPlayer;
- (void)checkEnablePreFetchPlayerData;
- (CGRect)getContentFrameFromResolutionSize:(CGSize)arg1 timeOffset:(double)arg2;
- (id)getFitResolutionRecordInfo:(double)arg1;
- (void)updatePreviewPlayerPresentationSize:(CGSize)arg1;
- (void)checkCurrPresentationSizeEqualToRecordIfNeeded;
- (void)updateIsFetchAllPlayerData:(BOOL)arg1;
- (void)updatePreviewPlayerDuration:(double)arg1;
- (_NSRange)getCurrentFixedResolutionTimeRange;
- (void)previewByImg;
- (void)schedulePreviewByImg;
- (id)getBestPreviewImgResult:(double)arg1;
- (void)previewByPlayer;
- (BOOL)checkPreviewPlayerEnableToPreviewTime:(double)arg1;
- (BOOL)checkPreviewPlayerShouldIgnorePreviewTime:(double)arg1;
- (void)schedulePreviewByPlayer;
- (id)createPlayerInfo;
- (void)updateResolutionTimeRangeForPlayArgsIfNeeded:(id)arg1;
- (id)generateDownloadArgsWrap;
- (id)videoSavePath;
- (id)videoFormatPath;
- (id)fileKey;
- (id)saveFilename;
- (id)createPlayerControlView;
- (id)previewImgLoader;
- (id)replayLiveTask;
- (BOOL)isCurrEnablePreFetchPlayerData;
- (id)previewVideoResolutionRecordList;
- (BOOL)isSoftDecodeByThumbPlayer;
- (double)currPlayerInitialPos;
- (BOOL)handleDiscontinuty;
- (BOOL)useImgForFirstFrameIfNeeded:(double)arg1;
- (double)getPreviewPlayerFrameInterval;
- (void)onLoadImageOK:(id)arg1 extraInfo:(id)arg2;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)setPreviewImgLoader:(id)arg1;
- (id)previewDelegate;
- (void)setPreviewDelegate:(id)arg1;
- (double)totalTime;
- (void)setTotalTime:(double)arg1;
- (BOOL)isFetchAllPlayerData;
- (void)setIsFetchAllPlayerData:(BOOL)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)previewImgView;
- (void)setPreviewImgView:(id)arg1;
- (id)previewPlayer;
- (void)setPreviewPlayer:(id)arg1;
- (id)previewControlView;
- (void)setPreviewControlView:(id)arg1;
- (id)previewReplayUrl;
- (void)setPreviewReplayUrl:(id)arg1;
- (BOOL)fixedResolution;
- (void)setFixedResolution:(BOOL)arg1;
- (unsigned int)frameInterval;
- (void)setFrameInterval:(unsigned int)arg1;
- (double)currentTime;
- (void)setCurrentTime:(double)arg1;
- (double)currImgPreviewTime;
- (void)setCurrImgPreviewTime:(double)arg1;
- (double)currImgLoadBackTime;
- (void)setCurrImgLoadBackTime:(double)arg1;
- (double)previewPlayerDuration;
- (void)setPreviewPlayerDuration:(double)arg1;
- (void)setCurrPlayerInitialPos:(double)arg1;
- (double)currPlayerPreviewTime;
- (void)setCurrPlayerPreviewTime:(double)arg1;
- (double)currPlayerPlayBackTime;
- (void)setCurrPlayerPlayBackTime:(double)arg1;
- (CGSize)currPlayerPresentationSize;
- (void)setCurrPlayerPresentationSize:(CGSize)arg1;
- (id)currPlayerResolutionRecord;
- (void)setCurrPlayerResolutionRecord:(id)arg1;
- (long long)currentPreviewByMode;
- (void)setCurrentPreviewByMode:(long long)arg1;
- (long long)currentPreviewMode;
- (void)setCurrentPreviewMode:(long long)arg1;
- (long long)currentPreviewState;
- (void)setCurrentPreviewState:(long long)arg1;
- (BOOL)isMainVideoPrepareToPlay;
- (void)setIsMainVideoPrepareToPlay:(BOOL)arg1;
- (id)mainVideoPlayBackInfo;
- (void)setMainVideoPlayBackInfo:(id)arg1;
- (BOOL)hasPreDownLoadForLittleStride;
- (void)setHasPreDownLoadForLittleStride:(BOOL)arg1;
- (BOOL)isPreviewPlayerPrepareToPlay;
- (void)setIsPreviewPlayerPrepareToPlay:(BOOL)arg1;
- (BOOL)forbidPreFetchPlayerData;
- (void)setForbidPreFetchPlayerData:(BOOL)arg1;
- (BOOL)isPreviewingByImg;
- (void)setIsPreviewingByImg:(BOOL)arg1;
- (BOOL)isPreviewingByPlayer;
- (void)setIsPreviewingByPlayer:(BOOL)arg1;
- (double)playerPreviewInvokeStartTime;
- (void)setPlayerPreviewInvokeStartTime:(double)arg1;
- (id)currGreateTimeModel;
- (void)setCurrGreateTimeModel:(id)arg1;
- (void)setPreviewVideoResolutionRecordList:(id)arg1;
- (BOOL)isStartPreview;
- (void)setIsStartPreview:(BOOL)arg1;
- (id)resourcesPinningToken;
- (void)setResourcesPinningToken:(id)arg1;
- (void).cxx_destruct;
@end

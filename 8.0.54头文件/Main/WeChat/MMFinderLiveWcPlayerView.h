@interface MMFinderLiveWcPlayerView : UIView <MMLiveContainerDisplayViewProtocol>
{
    BOOL _isInMinimizeMode; // +0x8
    BOOL _autoplay; // +0x9
    unsigned int _initialPlayTime; // +0xc
    WCPlayerView * _playerView; // +0x10
    UIView * _blurBackgroundView; // +0x18
    NSObject<WCPlayerControlProtocol> * _controlModel; // +0x20
    NSString * _groupName; // +0x28
    MMFinderLiveTaskId * _taskId; // +0x30
    MMFinderLiveWcPlayerViewModel * _viewModel; // +0x38
    NSString * _audioManagerGroupName; // +0x40
}
- (id)initWithTaskId:(id)arg1 audioManagerGroupName:(id)arg2;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)layoutSubviews;
- (void)startPlay;
- (void)stopPlay;
- (void)pause;
- (void)resumePlay;
- (void)mute;
- (void)unMute;
- (void)prepareForMaximizeMode;
- (void)prepareForMinimizeMode;
- (void)forceLayout;
- (void)updatePlaySrcPath;
- (void)setPlayerContentMode:(long long)arg1;
- (void)setupPlayerView;
- (void)updatePlayerViewFrame:(CGRect)arg1;
- (id)liveTask;
- (CGSize)playerPresentationSize;
- (CGRect)getNormalizedMinimizeSrcFrameForBusiness:(long long)arg1;
- (id)getExtendTransitionContainerBackView;
- (id)minimizeSrcView;
- (CGRect)minimizeSrcFrame;
- (void)updateViewModel:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (id)blurBackgroundView;
- (void)setBlurBackgroundView:(id)arg1;
- (id)controlModel;
- (void)setControlModel:(id)arg1;
- (BOOL)isInMinimizeMode;
- (void)setIsInMinimizeMode:(BOOL)arg1;
- (unsigned int)initialPlayTime;
- (void)setInitialPlayTime:(unsigned int)arg1;
- (BOOL)autoplay;
- (void)setAutoplay:(BOOL)arg1;
- (id)groupName;
- (void)setGroupName:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)audioManagerGroupName;
- (void)setAudioManagerGroupName:(id)arg1;
- (void).cxx_destruct;
@end


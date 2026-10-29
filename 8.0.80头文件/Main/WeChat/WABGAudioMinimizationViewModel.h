@interface WABGAudioMinimizationViewModel : NSObject <MinimizeTaskContainerInfoDelegate, MiniAudioTaskContentViewDelegate>
{
    BOOL _isReadyToShow; // +0x8
    WABGAudioMinimizationItemInfo * _itemInfo; // +0x10
    id <WABGAudioMinimizationViewModelDelegate> _delegate; // +0x18
    MiniAudioTaskContentView * _taskContentView; // +0x20
    WABGAudioMinimizationPlayerView * _playerView; // +0x28
}
- (id)initWithItemInfo:(id)arg1;
- (void)updateItemInfo:(id)arg1;
- (void)updateIsPlaying;
- (CGRect)playerViewFrame;
- (BOOL)canShow;
- (id)taskData;
- (id)cropImageTo3by4:(id)arg1;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)onMiniAudioContentSizeChangeTo:(CGSize)arg1 anime:(BOOL)arg2;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)arg1;
- (void)onMiniAudioContentViewPlayTypeButtonClicked:(long long)arg1;
- (void)disableAVPlayerLayerAnimation:(BOOL)arg1;
- (void)onEnterMinimize;
- (void)onDismissMinimize;
- (id)itemInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isReadyToShow;
- (void)setIsReadyToShow:(BOOL)arg1;
- (id)taskContentView;
- (void)setTaskContentView:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (void).cxx_destruct;
@end

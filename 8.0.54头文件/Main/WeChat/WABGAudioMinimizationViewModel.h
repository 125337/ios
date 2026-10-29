@interface WABGAudioMinimizationViewModel : NSObject <MinimizeTaskContainerInfoDelegate, MiniAudioTaskContentViewDelegate>
{
    BOOL _isReadyToShow; // +0x8
    WABGAudioMinimizationItemInfo * _itemInfo; // +0x10
    id <WABGAudioMinimizationViewModelDelegate> _delegate; // +0x18
    MiniAudioTaskContentView * _taskContentView; // +0x20
}
- (id)initWithItemInfo:(id)arg1;
- (void)updateItemInfo:(id)arg1;
- (CGRect)coverViewFrame;
- (BOOL)canShow;
- (id)taskData;
- (void)onMiniAudioContentViewCloseButtonClicked;
- (void)onMiniAudioContentViewOuterContentClicked;
- (void)onMiniAudioContentViewPlayPauseButtonClicked:(BOOL)arg1;
- (id)cropImageTo3by4:(id)arg1;
- (id)itemInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isReadyToShow;
- (void)setIsReadyToShow:(BOOL)arg1;
- (id)taskContentView;
- (void)setTaskContentView:(id)arg1;
- (void).cxx_destruct;
@end


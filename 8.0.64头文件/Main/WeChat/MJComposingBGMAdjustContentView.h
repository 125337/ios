@interface MJComposingBGMAdjustContentView : MMUIView <MJComposingBGMAdjustPanelViewDelegate, MJComposingBGMVolumeAdjustViewDelegate>
{
    MJComposingBGMAdjustViewModel * _viewModel; // +0x8
    id <MJComposingBGMAdjustContentViewDelegate> _delegate; // +0x10
    MJComposingBGMAdjustPanelView * _panelView; // +0x18
    MJComposingBGMVolumeAdjustView * _volumeView; // +0x20
    MJComposingBGMTimeRangeAdjustView * _timeRangeView; // +0x28
    unsigned long long _scene; // +0x30
}
- (id)initWithViewModel:(id)arg1;
- (void)commonInit;
- (void)resetToMainPanel;
- (void)update;
- (void)didClickCloseButtonInBGMPanelView:(id)arg1;
- (void)didClickVolumeAdjustButtonInBGMPanelView:(id)arg1;
- (void)didClickTimeRangeAdjustButtonInBGMPanelView:(id)arg1;
- (void)didClickLyricUpdateButtonInBGMPanelView:(id)arg1;
- (void)didCloseInBGMVolumeAdjustView:(id)arg1;
- (void)_transFromPanelViewToVolumeAdjustViewAnimated:(BOOL)arg1;
- (void)_transFromPanelViewToTimeRangeAdjustViewAnimated:(BOOL)arg1;
- (void)_transFromVolumeAdjustViewToPanelViewAnimated:(BOOL)arg1;
- (void)_transFromTimeRangeAdjustViewToPanelViewAnimated:(BOOL)arg1;
- (void)setupPanelView;
- (void)setupVolumeView;
- (void)setupTimeRangeView;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)volumeView;
- (void)setVolumeView:(id)arg1;
- (id)timeRangeView;
- (void)setTimeRangeView:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

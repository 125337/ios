@interface MJComposingBGMAdjustPanelView : MMUIView
{
    MJComposingBGMAdjustViewModel * _viewModel; // +0x8
    id <MJComposingBGMAdjustPanelViewDelegate> _delegate; // +0x10
    MMUIButton * _closeButton; // +0x18
    MMUILabel * _titleLabel; // +0x20
    UIView * _topBar; // +0x28
    MJComposingBGMAdjustPanelItemButton * _volumeButton; // +0x30
    MJComposingBGMAdjustPanelItemButton * _timeRangeButton; // +0x38
    MJComposingBGMAdjustPanelItemButton * _lyricButton; // +0x40
    UIImpactFeedbackGenerator * _feedbackGenerator; // +0x48
}
- (id)initWithViewModel:(id)arg1;
- (void)commonInit;
- (void)setupTopBarView;
- (void)setupContentView;
- (void)updateLyricButton;
- (void)update;
- (void)closeButtonDidTouchUpInside:(id)arg1;
- (void)volumeButtonTouchUpInside:(id)arg1;
- (void)timeRangeButtonTouchUpInside:(id)arg1;
- (void)lyricButtonTouchUpInside:(id)arg1;
- (id)feedbackGenerator;
- (id)viewModel;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)topBar;
- (void)setTopBar:(id)arg1;
- (id)volumeButton;
- (void)setVolumeButton:(id)arg1;
- (id)timeRangeButton;
- (void)setTimeRangeButton:(id)arg1;
- (id)lyricButton;
- (void)setLyricButton:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void).cxx_destruct;
@end

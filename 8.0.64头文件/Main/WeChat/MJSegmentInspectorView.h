@interface MJSegmentInspectorView : MMUIView
{
    MJSegmentInspectorViewModel * _viewModel; // +0x8
    UIView * _topBar; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUILabel * _subTitleLabel; // +0x20
    MJPublisherButton * _applyAllButton; // +0x28
    MJPublisherButton * _resetButton; // +0x30
    MMUIButton * _cancelButton; // +0x38
    MMUIButton * _doneButton; // +0x40
}
- (id)initWithViewModel:(id)arg1;
- (void)commonInit;
- (id)titleLabel;
- (id)subTitleLabel;
- (id)doneButton;
- (id)cancelButton;
- (id)applyAllButton;
- (id)resetButton;
- (void)cancelButtonDidTouchUpInside:(id)arg1;
- (void)doneButtonDidTouchUpInside:(id)arg1;
- (void)applyAllButtonDidTouchUpInside:(id)arg1;
- (void)resetButtonDidTouchUpInside:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)topBar;
- (void)setTopBar:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setApplyAllButton:(id)arg1;
- (void)setResetButton:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setDoneButton:(id)arg1;
- (void).cxx_destruct;
@end

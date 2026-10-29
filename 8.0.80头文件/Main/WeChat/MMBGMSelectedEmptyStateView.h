@interface MMBGMSelectedEmptyStateView : MMUIView
{
    id /* block */ _onAddMusicTap; // +0x8
    UILabel * _tipLabel; // +0x10
    UIButton * _actionButton; // +0x18
    unsigned long long _mode; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubViews;
- (void)setupConstraints;
- (void)updateWithMode:(unsigned long long)arg1 tipText:(id)arg2 actionTitle:(id)arg3;
- (void)updateFrameForContainerSize:(CGSize)arg1;
- (void)updateModeConstraints;
- (id)localImportActionReportView;
- (void)handleActionButtonTap;
- (id)actionAccessibilityLabelWithTitle:(id)arg1;
- (id /* block */)onAddMusicTap;
- (void)setOnAddMusicTap:(id /* block */)arg1;
- (id)tipLabel;
- (void)setTipLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (unsigned long long)mode;
- (void)setMode:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

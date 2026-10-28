@interface SendPatGuideViewController : MMPageSheetBaseViewController
{
    unsigned long long _guideType; // +0x70
    id /* block */ _dismissBlock; // +0x78
    MMUILabel * _titleLabel; // +0x80
    MMUILabel * _subtitleLabel; // +0x88
    UIButton * _confirmButton; // +0x90
}
- (void)viewDidLoad;
- (void)configPageSheet;
- (void)viewDidTransitionToNewSize;
- (void)configDetailView;
- (void)updateContent;
- (void)updateDetailViewLayout:(id)arg1;
- (void)onTapConfirmButton;
- (void)setGuideType:(unsigned long long)arg1;
- (void)showWithAnimated:(BOOL)arg1;
- (unsigned long long)guideType;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)confirmButton;
- (void)setConfirmButton:(id)arg1;
- (void).cxx_destruct;
@end

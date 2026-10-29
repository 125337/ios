@interface WAPNAuthManagerSubview : WAAuthPageSheetBaseView
{
    BOOL _completed; // +0x8
    UIButton * _button; // +0x10
}
+ (double)viewHeightByDataModel:(id)arg1 hostView:(id)arg2;
- (void)setViewDataModel:(id)arg1;
- (void)setupButton;
- (void)onTapManage;
- (void)showCompletedOverlay;
- (void)applyCompletedOverlay;
- (id)button;
- (void)setButton:(id)arg1;
- (BOOL)completed;
- (void)setCompleted:(BOOL)arg1;
- (void).cxx_destruct;
@end

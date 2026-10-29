@interface NewLifeProfilePostGuidePageSheet : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>
{
    id <NewLifePostEndDelegate> _postEndDelegate; // +0x68
    UIViewController * _viewController; // +0x70
    NewLifeRedDotTipsShowInfo * _profilePostRedDotInfo; // +0x78
    NSMutableDictionary * _reportParams; // +0x80
}
- (id)initWithViewController:(id)arg1 delegate:(id)arg2 redDotInfo:(id)arg3;
- (void)viewDidLoad;
- (void)onClickBtn:(id)arg1;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (id)postEndDelegate;
- (void)setPostEndDelegate:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (id)profilePostRedDotInfo;
- (void)setProfilePostRedDotInfo:(id)arg1;
- (id)reportParams;
- (void)setReportParams:(id)arg1;
- (void).cxx_destruct;
@end


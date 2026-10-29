@interface EmoticonPrivacyPageSheet : MMPageSheetBaseViewController <ILinkEventExt>
{
    int _reportExtranceScene; // +0x70
}
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)onClickConfirmButton;
- (void)onClickCancelButton;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)reportAction:(int)arg1;
- (int)reportExtranceScene;
- (void)setReportExtranceScene:(int)arg1;
@end

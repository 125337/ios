@interface EmoticonLocalEmojiRecommendSwitchPageSheet : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate, ILinkEventExt>
{
    int _reportExtranceScene; // +0x68
}
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)reportAction:(int)arg1;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (int)reportExtranceScene;
- (void)setReportExtranceScene:(int)arg1;
@end


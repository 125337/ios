@interface WCFinderAdCommentApplyActionSheet : WCActionSheet <ILinkEventExt>
{
    int _commentScene; // +0x8
    id <WCFinderAdCommentApplyActionSheetDelegate> _applyDelegate; // +0x10
    UIView * _tipsView; // +0x18
    MMUIButton * _acceptBtn; // +0x20
}
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (id)getTipsActionSheetView;
- (void)bindAdApplyReportFromView:(id)arg1 viewId:(id)arg2 reportPolicy:(unsigned long long)arg3;
- (void)onCheckBoxClicked:(id)arg1;
- (void)updateAcceptBtnBkg;
- (void)onClickAcceptBtn;
- (void)onClickCancelBtn;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(BOOL)arg2;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)applyDelegate;
- (void)setApplyDelegate:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (id)acceptBtn;
- (void)setAcceptBtn:(id)arg1;
- (void).cxx_destruct;
@end

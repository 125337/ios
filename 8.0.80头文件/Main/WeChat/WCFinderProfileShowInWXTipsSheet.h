@interface WCFinderProfileShowInWXTipsSheet : MMUIViewController <ILinkEventExt, UIGestureRecognizerDelegate>
{
    id <WCFinderProfileShowInWXTipsSheetDelegate> _delegate; // +0x70
    WCFinderFittingWidthRichView * _detailRichTextView; // +0x78
    UIView * _cardView; // +0x80
}
- (void)showFromViewController:(id)arg1;
- (BOOL)useTransparentNavibar;
- (void)viewDidLayoutSubviews;
- (void)updateYogaLayout;
- (void)viewDidLoad;
- (void)addShape:(id)arg1;
- (id)createBtnWithTitle:(id)arg1 action:(SEL)arg2 bgColor:(id)arg3 titleColor:(id)arg4;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)onBackGroundViewTapAction:(id)arg1;
- (void)onClickCancelBtn:(id)arg1;
- (void)onCancelAction;
- (void)onClickSettingBtn:(id)arg1;
- (id)jumpWXProfileHref;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)detailRichTextView;
- (void)setDetailRichTextView:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (void).cxx_destruct;
@end

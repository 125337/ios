@interface WCFinderShadowOptionBubbleView : WCFinderCommonBottomSuspendView
{
    UIButton * _actionBtn; // +0x8
    UIButton * _closeBtn; // +0x10
    UIView * _containerView; // +0x18
    UIImageView * _leftImageView; // +0x20
    RichTextView * _leftContenTextView; // +0x28
    id /* block */ _closeBlock; // +0x30
}
+ (id)genActionBtnBy:(id)arg1 bkColor:(id)arg2 fontColor:(id)arg3;
+ (id)genRighTextViewByWidth:(double)arg1;
+ (id)genCloseBtnTarget:(id)arg1 action:(SEL)arg2;
+ (double)bubbleViewHeightByTotalWidth:(double)arg1 leftContent:(id)arg2 rightTips:(id)arg3;
+ (double)leftTextAreaMaxWidthByTotalWidth:(double)arg1 rightTips:(id)arg2;
+ (unsigned long long)getLeftTextAreaMaxLengthCountByTotalWidth:(double)arg1 rightTips:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 uiConfig:(id)arg2 actionClickBlock:(id /* block */)arg3 closeClickBlock:(id /* block */)arg4;
- (void)setUpUIByLeftContent:(id)arg1 rightTips:(id)arg2 actionClickBlock:(id /* block */)arg3 closeClickBlock:(id /* block */)arg4;
- (void)layoutAllSubviews;
- (id)containerView;
- (id)leftContenTextView;
- (id)closeBtn;
- (void)willRemoveView;
- (void)removeViewAction:(BOOL)arg1;
- (void)onClickCloseBtn;
- (id)actionBtn;
- (void)setActionBtn:(id)arg1;
- (void)setCloseBtn:(id)arg1;
- (void)setContainerView:(id)arg1;
- (id)leftImageView;
- (void)setLeftImageView:(id)arg1;
- (void)setLeftContenTextView:(id)arg1;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end


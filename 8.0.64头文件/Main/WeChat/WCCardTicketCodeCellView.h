@interface WCCardTicketCodeCellView : MMUIView <WCCardCodeAnimatorDelegate>
{
    WCCardDataCardTPInfo * _cardTpInfo; // +0x8
    WCCardDataCardInfo * _cardInfo; // +0x10
    WCCardCodeAnimator * _codeAnimator; // +0x18
    UIView * _codeContainView; // +0x20
    id <WCCardTicketCodeCellViewDelegate> _delegate; // +0x28
}
+ (double)heightForCardSource:(id)arg1 viewWidth:(double)arg2;
- (id)initWithViewWidth:(double)arg1 cardSource:(id)arg2 delegate:(id)arg3;
- (void)setupView;
- (id)createSecondaryFieldView;
- (id)getCodeViewWithCode:(id)arg1;
- (id)createCodeNumView;
- (void)fieldClicked:(id)arg1;
- (void)codeAnimatorWillBecomeFullScreen:(id)arg1;
- (void)codeAnimatorWillExitFullScreen:(id)arg1;
- (void).cxx_destruct;
@end

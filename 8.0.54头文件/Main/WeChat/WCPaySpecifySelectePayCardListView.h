@interface WCPaySpecifySelectePayCardListView : MMUIView <CAAnimationDelegate>
{
    WCPayBindCardInfo * selectedPayCardInfo; // +0x8
    NSArray * m_arrBindCard; // +0x10
    NSMutableArray * m_arrButtonArray; // +0x18
    UIImageView * m_backgroundView; // +0x20
    id <WCPaySpecifySelectePayCardListViewDelegate> m_delegate; // +0x28
    BOOL _openFieldArea; // +0x30
}
- (BOOL)useChangeCardViewV2;
- (id)initWithFrame:(CGRect)arg1 andPayCardList:(id)arg2 BanlanceInfo:(id)arg3 Description:(id)arg4 delegate:(id)arg5 LQTInfo:(id)arg6 isOpenFieldArea:(BOOL)arg7;
- (void)showAnimation;
- (void)OnCompleteButtonDone:(id)arg1;
- (void)onCancelButtonDone;
- (void)OnSelectedCard:(id)arg1;
- (void)OnSelectedNewCard:(id)arg1;
- (void)closeView;
- (BOOL)shouldPreventedAutorotateToInterfaceOrientation;
- (BOOL)openFieldArea;
- (void)setOpenFieldArea:(BOOL)arg1;
- (void).cxx_destruct;
@end


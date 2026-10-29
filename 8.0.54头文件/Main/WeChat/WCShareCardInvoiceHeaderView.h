@interface WCShareCardInvoiceHeaderView : WCShareCardBaseHeaderView
{
    id <WCShareCardInvoiceCardHeaderDelegate> _delegate; // +0x8
    MMUIView * _cardContentView; // +0x10
}
- (id)initWithViewWidth:(double)arg1 withCardSourceData:(id)arg2 cardStatus:(int)arg3 isNeedHideAcceptBtn:(BOOL)arg4 delegate:(id)arg5;
- (void)initView;
- (void)initTicketCardContentView;
- (void)addLeftAndRightCornerToView:(id)arg1;
- (void)onClickApplyBtn:(id)arg1;
- (double)getRealHeight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cardContentView;
- (void)setCardContentView:(id)arg1;
- (void).cxx_destruct;
@end


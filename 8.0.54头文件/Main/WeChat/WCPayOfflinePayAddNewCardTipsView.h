@interface WCPayOfflinePayAddNewCardTipsView : MMUIView
{
    id <WCPayOfflineAddNewCardTipsViewDelegate> _delegate; // +0x8
}
- (id)initAddNewCardTipsViewWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)setupContentView;
- (void)addNewCardBtnPress;
- (void)viewPayCardBtnPress;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end


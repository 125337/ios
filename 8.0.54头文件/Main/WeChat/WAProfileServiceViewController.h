@interface WAProfileServiceViewController : ZZFLEXCollectionViewController
{
    GetProfileInfoResponse_RelievedBuyInfo * _buyInfo; // +0x68
    WAProfileServiceHeaderView * _headerView; // +0x70
    UIView * _halfAdapterHeaderView; // +0x78
    id /* block */ _halfAdapterCloseAction; // +0x80
}
+ (double)viewHeightByBuyInfo:(id)arg1;
- (id)initWithBuyInfo:(id)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (void)setBuyInfo:(id)arg1;
- (void)reloadUI;
- (id)halfAdapterHeaderWithCloseAction:(id /* block */)arg1;
- (id)buyInfo;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)halfAdapterHeaderView;
- (void)setHalfAdapterHeaderView:(id)arg1;
- (id /* block */)halfAdapterCloseAction;
- (void)setHalfAdapterCloseAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end


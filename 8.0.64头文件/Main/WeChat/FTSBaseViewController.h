@interface FTSBaseViewController : WCSearchViewController
{
    FTSContext * _context; // +0x70
    UIView * _emptyFooterView; // +0x78
    WCTimeLineFooterView * _footerView; // +0x80
}
- (id)initWithContext:(id)arg1;
- (void)viewDidLoad;
- (void)onNavigationCancelItemClick;
- (id)getFTSContext;
- (id)footerView;
- (id)emptyFooterView;
- (void)startSearchFrom:(id)arg1 searchBar:(id)arg2;
- (id)context;
- (void)setContext:(id)arg1;
- (void)setEmptyFooterView:(id)arg1;
- (void)setFooterView:(id)arg1;
- (void).cxx_destruct;
@end

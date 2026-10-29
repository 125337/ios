@interface WCCardPkgBackTableView : MMTableView
{
    double _maxHeight; // +0x40
    id <WCCardPkgBackTableViewDelegate> _wx_delegate; // +0x48
}
- (void)reloadData;
- (void)updateLayout;
- (double)maxHeight;
- (void)setMaxHeight:(double)arg1;
- (id)wx_delegate;
- (void)setWx_delegate:(id)arg1;
- (void).cxx_destruct;
@end


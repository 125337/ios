@interface BrandTLTableView : MMTableView
{
    BOOL _reportSwitch; // +0x39
    id /* block */ _identifierWithIndexPath; // +0x40
    id /* block */ _indexPathWithIdentifier; // +0x48
    id /* block */ _isVisibleOnScreen; // +0x50
    NSString * _identifier; // +0x58
    double _firstVisibleCellOriginY; // +0x60
}
- (id)initWithFrame:(CGRect)arg1 style:(long long)arg2;
- (void)setContentSize:(CGSize)arg1;
- (void)markFirstVisibleCellOriginY;
- (void)checkMarkedCellOriginY;
- (BOOL)isFlicker:(CGRect)arg1;
- (id)cellIdentifier:(id)arg1;
- (BOOL)shouldMarkOrReport;
- (void)clearMarkData;
- (void)reportFlicker:(double)arg1 currentCellY:(double)arg2 indexPath:(id)arg3 identifier:(id)arg4;
- (id /* block */)identifierWithIndexPath;
- (void)setIdentifierWithIndexPath:(id /* block */)arg1;
- (id /* block */)indexPathWithIdentifier;
- (void)setIndexPathWithIdentifier:(id /* block */)arg1;
- (id /* block */)isVisibleOnScreen;
- (void)setIsVisibleOnScreen:(id /* block */)arg1;
- (BOOL)reportSwitch;
- (void)setReportSwitch:(BOOL)arg1;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
- (double)firstVisibleCellOriginY;
- (void)setFirstVisibleCellOriginY:(double)arg1;
- (void).cxx_destruct;
@end

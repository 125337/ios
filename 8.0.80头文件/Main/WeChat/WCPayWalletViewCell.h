@interface WCPayWalletViewCell : UITableViewCell
{
    WCPayTableCellViewDataView * _dataView; // +0x8
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateNumberDelegate:(id)arg1;
- (void)updateLine:(BOOL)arg1;
- (void)layoutSubviews;
- (void)updateDataView;
- (void)updateViewData:(id)arg1 RedDot:(id)arg2 delegate:(id)arg3;
- (id)getAccessibilityLabelString;
- (id)dataView;
- (void)setDataView:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCHeaderActionSheet : WCActionSheet
{
    NSArray * _headerArr; // +0x8
    UIView * _headerView; // +0x10
}
- (id)initByHeader:(id)arg1;
- (void)setAllButtonTitle:(id)arg1;
- (id)getFixedHeaderViewInWidth:(double)arg1;
- (void)onCloseMenu:(id)arg1;
- (id)headerArr;
- (void)setHeaderArr:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (void).cxx_destruct;
@end


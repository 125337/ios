@interface WCFinderFeedDetailSectionFooterView : UITableViewHeaderFooterView <WCGeneralMonitorCellProtocol>
{
    UIView * _separatorView; // +0x8
    NSLayoutConstraint * _leadingLayoutConstraint; // +0x10
}
+ (double)defaultLeadingPadding;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)setCustomBgColor:(id)arg1;
- (void)setLeadingPadding:(double)arg1;
- (id)getGeneralMonitorCellBizId;
- (id)separatorView;
- (void)setSeparatorView:(id)arg1;
- (id)leadingLayoutConstraint;
- (void)setLeadingLayoutConstraint:(id)arg1;
- (void).cxx_destruct;
@end

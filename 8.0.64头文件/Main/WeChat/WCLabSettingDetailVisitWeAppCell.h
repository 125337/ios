@interface WCLabSettingDetailVisitWeAppCell : UITableViewCell
{
    UIButton * _button; // +0x8
    WCLabsAppItem * _labItem; // +0x10
    id <WCLabSettingDetailVisitWeAppCellDelegate> _delegate; // +0x18
}
+ (double)height;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)configureWithLabItem:(id)arg1;
- (void)onClickVisitWeApp:(id)arg1;
- (void)initButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

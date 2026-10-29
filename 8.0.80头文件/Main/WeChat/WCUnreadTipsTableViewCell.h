@interface WCUnreadTipsTableViewCell : MMTableViewCell
{
    id <WCUnreadTipsTableViewCellDelegate> _delegate; // +0x8
    NSMutableArray * _headerViews; // +0x10
    MMUIButton * _defaultButton; // +0x18
    UILabel * _titleLabel; // +0x20
    WCUnreadTipsViewModel * _vm; // +0x28
}
+ (double)cellHeight;
- (void)updateViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)defaultButton;
- (id)titleLabel;
- (id)headerViews;
- (id)genHeadImageView;
- (void)onJumpToUnreadItem;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setHeaderViews:(id)arg1;
- (void)setDefaultButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)vm;
- (void)setVm:(id)arg1;
- (void).cxx_destruct;
@end

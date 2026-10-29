@interface WCFinderEndorsementCellView : CommonMessageCellView
{
    UILabel * _titleLabel; // +0xa8
    UILabel * _descLabel; // +0xb0
}
- (void)layoutContentView;
- (id)displayIconName;
- (id)nameLabel;
- (id)descLabel;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end


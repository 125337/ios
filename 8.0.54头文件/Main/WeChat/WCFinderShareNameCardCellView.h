@interface WCFinderShareNameCardCellView : CommonMessageCellView
{
    UILabel * _nameLabel; // +0xa8
    UILabel * _descLabel; // +0xb0
    WCFinderAuthInfoIconView * _icon; // +0xb8
}
- (void)layoutContentView;
- (id)nameLabel;
- (id)descLabel;
- (id)icon;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)setNameLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setIcon:(id)arg1;
- (void).cxx_destruct;
@end


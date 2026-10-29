@interface PocketMoneyMessageCellView : CommonMessageCellView
{
    RichTextView * _titleLabel; // +0xb8
    RichTextView * _descLabel; // +0xc0
    UIImageView * _thumbImageView; // +0xc8
}
- (id)operationMenuItems;
- (void)layoutContentView;
- (void)addTitleLabel;
- (void)addDescLabel;
- (void)addThumbImageView;
- (void)onTouchUpInside;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (void).cxx_destruct;
@end

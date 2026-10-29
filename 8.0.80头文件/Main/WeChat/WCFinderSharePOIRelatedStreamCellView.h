@interface WCFinderSharePOIRelatedStreamCellView : CommonMessageCellView
{
    UILabel * _titleLabel; // +0xb8
    UILabel * _descLabel; // +0xc0
    MMWebImageView * _webImageView; // +0xc8
}
- (void)layoutContentView;
- (id)titleLabel;
- (id)descLabel;
- (id)webImageView;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setWebImageView:(id)arg1;
- (void).cxx_destruct;
@end

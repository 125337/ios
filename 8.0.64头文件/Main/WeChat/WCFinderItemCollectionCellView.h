@interface WCFinderItemCollectionCellView : CommonMessageCellView
{
    UILabel * _titleLabel; // +0xb0
    UILabel * _descriptionLabel; // +0xb8
    MMWebImageView * _thumbImageView; // +0xc0
    UIView * _separator; // +0xc8
    UIImageView * _tinyIcon; // +0xd0
    UILabel * _finderLabel; // +0xd8
}
- (BOOL)canBeReused;
- (void)layoutContentView;
- (void)onAppear;
- (void)_setupUI;
- (void)_setupLayout;
- (id)operationMenuItems;
- (void)onTouchUpInside;
- (void)_reportViewExpWithViewID:(id)arg1 isFavorite:(BOOL)arg2;
- (id)titleLabel;
- (id)descriptionLabel;
- (id)thumbImageView;
- (id)separator;
- (id)tinyIcon;
- (id)finderLabel;
- (void)setTitleLabel:(id)arg1;
- (void)setDescriptionLabel:(id)arg1;
- (void)setThumbImageView:(id)arg1;
- (void)setSeparator:(id)arg1;
- (void)setTinyIcon:(id)arg1;
- (void)setFinderLabel:(id)arg1;
- (void).cxx_destruct;
@end

@interface MMScrollableActionSheetHorizontalItemView : MMUIView
{
    MMScrollableActionSheetHorizontalItemInfo * _itemInfo; // +0x8
    UIButton * _iconButton; // +0x10
    UILabel * _titleLabel; // +0x18
    UIImageView * _cornerImageView; // +0x20
    double _cachedItemViewHeight; // +0x28
    id <MMScrollableActionSheetHorizontalItemViewDelegate> _delegate; // +0x30
}
- (id)initWithDelegate:(id)arg1;
- (void)setupIconButton;
- (void)setupTitleLabel;
- (void)setupGestureRecognizer;
- (void)setItemInfo:(id)arg1;
- (void)setNeedRecalcuateItemViewHeight;
- (double)calcuateItemViewHeight;
- (void)layoutSubviews;
- (double)layoutIconButtonAndTitleLabel;
- (void)onTappedItemInfo;
- (id)itemInfo;
- (id)iconButton;
- (void)setIconButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)cornerImageView;
- (void)setCornerImageView:(id)arg1;
- (double)cachedItemViewHeight;
- (void)setCachedItemViewHeight:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end


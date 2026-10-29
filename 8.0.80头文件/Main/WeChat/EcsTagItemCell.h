@interface EcsTagItemCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>
{
    EcsTagItemViewModel * _viewDataModel; // +0x8
    EcsRichTextLabel * _titleLabel; // +0x10
    MMWebImageView * _iconView; // +0x18
    long long _lastWidth; // +0x20
}
+ (CGSize)viewSizeByDataModel:(id)arg1 hostView:(id)arg2;
- (void)layoutSubviews;
- (void)setViewDataModel:(id)arg1;
- (void)updateIconData:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (id)viewDataModel;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (long long)lastWidth;
- (void)setLastWidth:(long long)arg1;
- (void).cxx_destruct;
@end

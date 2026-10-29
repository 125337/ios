@interface RelatedEmoticonActivityCell : EmoticonCellLikeButton
{
    EmotionActivity * _activity; // +0x8
    MMUILabel * _mainLabel; // +0x10
    MMWebImageView * _iconImageView; // +0x18
    MMUILabel * _nameLabel; // +0x20
    UIImageView * _arrowImageView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)setActivity:(id)arg1;
- (id)activity;
- (id)mainLabel;
- (void)setMainLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end


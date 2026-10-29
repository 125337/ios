@interface EmoticonSearchFooterView : UICollectionReusableView
{
    id <EmoticonSearchCollectionComponentDelegate> _delegate; // +0x8
    EmoticonCellLikeButton * _button; // +0x10
    UIImageView * _iconImageView; // +0x18
    UILabel * _titleLabel; // +0x20
    UIImageView * _arrowImageView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onTapWebSearchButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)button;
- (void)setButton:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end


@interface MJShootBeautyItemCell : UICollectionViewCell
{
    BOOL _isCellSelected; // +0x8
    MMUIImageView * _iconImageView; // +0x10
    MMUIView * _iconContainerView; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUIView * _borderView; // +0x28
    MMUIView * _blurView; // +0x30
    MMUIView * _dotView; // +0x38
    MJShootBeautyItem * _item; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)commonInit;
- (void)setupViews;
- (void)prepareForReuse;
- (void)reset;
- (void)updateModifyState;
- (void)configCellWithItem:(id)arg1 isAdjustable:(BOOL)arg2;
- (void)setIsCellSelected:(BOOL)arg1;
- (id)iconContainerView;
- (id)iconImageView;
- (id)titleLabel;
- (id)borderView;
- (id)blurView;
- (id)dotView;
- (BOOL)isCellSelected;
- (void)setIconImageView:(id)arg1;
- (void)setIconContainerView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setBorderView:(id)arg1;
- (void)setBlurView:(id)arg1;
- (void)setDotView:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (void).cxx_destruct;
@end


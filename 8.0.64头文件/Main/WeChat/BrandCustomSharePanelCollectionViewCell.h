@interface BrandCustomSharePanelCollectionViewCell : UICollectionViewCell
{
    BOOL _actionDisabled; // +0x8
    UIView * _iconContainerView; // +0x10
    UIImageView * _iconView; // +0x18
    UILabel * _actionNameLabel; // +0x20
}
+ (id)reuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)setHighlighted:(BOOL)arg1;
- (void)prepareForReuse;
- (void)updateWithAction:(id)arg1;
- (id)iconContainerView;
- (void)setIconContainerView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)actionNameLabel;
- (void)setActionNameLabel:(id)arg1;
- (BOOL)actionDisabled;
- (void)setActionDisabled:(BOOL)arg1;
- (void).cxx_destruct;
@end

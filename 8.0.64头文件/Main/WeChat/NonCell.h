@interface NonCell : UICollectionViewCell
{
    UIView * m_iconView; // +0x8
    MMUILabel * m_descLabel; // +0x10
    BOOL _isSelected; // +0x18
    UIImageView * _icon; // +0x20
}
+ (id)identifier;
- (void)setIsSelected:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)icon;
- (void)setIcon:(id)arg1;
- (BOOL)isSelected;
- (void).cxx_destruct;
@end

@interface MJStyleEditTabCollectionViewCell : UICollectionViewCell
{
    BOOL _isSelected; // +0x8
    MMUILabel * _textLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)prepareForReuse;
- (void)setupWithItem:(id)arg1;
- (void)setIsSelected:(BOOL)arg1;
- (id)textLabel;
- (BOOL)isSelected;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end

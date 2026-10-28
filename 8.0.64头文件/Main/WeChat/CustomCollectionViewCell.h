@interface CustomCollectionViewCell : UICollectionViewCell
{
    BOOL _selected; // +0x8
    UILabel * _label; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)label;
- (void)setSelected:(BOOL)arg1;
- (BOOL)selected;
- (void)setLabel:(id)arg1;
- (void).cxx_destruct;
@end

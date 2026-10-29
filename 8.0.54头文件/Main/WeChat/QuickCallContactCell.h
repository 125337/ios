@interface QuickCallContactCell : UICollectionViewCell
{
    CContact * _contact; // +0x8
    MMHeadImageView * _headImageView; // +0x10
    MMUILabel * _nameLabel; // +0x18
}
+ (CGSize)cellSize;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setContact:(id)arg1;
- (id)contact;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (void).cxx_destruct;
@end


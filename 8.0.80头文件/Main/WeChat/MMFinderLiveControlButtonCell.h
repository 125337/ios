@interface MMFinderLiveControlButtonCell : UICollectionViewCell
{
    unsigned int _style; // +0x8
    MMFinderLiveControlButtonItem * _item; // +0x10
    UIImageView * _iconImageView; // +0x18
    UILabel * _titleLabel; // +0x20
}
+ (id)identifier;
+ (CGSize)cellSize:(unsigned int)arg1;
- (void)prepareForReuse;
- (void)updateWithButtonItem:(id)arg1 style:(unsigned int)arg2 canShowRedDot:(BOOL)arg3;
- (void)removeRedDot;
- (void)updateEnabled;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)iconImageView;
- (id)titleLabel;
- (id)item;
- (void)setItem:(id)arg1;
- (unsigned int)style;
- (void)setStyle:(unsigned int)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

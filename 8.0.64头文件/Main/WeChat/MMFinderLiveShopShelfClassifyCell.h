@interface MMFinderLiveShopShelfClassifyCell : UICollectionViewCell
{
    FinderShopShelfLabelClassifyInfo * _info; // +0x8
    MMUILabel * _classifyLabel; // +0x10
    MMWebImageView * _iconView; // +0x18
}
+ (id)cellIdentifier;
+ (id)normalFont;
+ (id)selectedFont;
+ (CGSize)iconSize;
+ (double)spacing;
+ (CGSize)cellSizeWithInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)updateWithClassifyInfo:(id)arg1;
- (void)updateWithIsChosen:(BOOL)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)classifyLabel;
- (void)setClassifyLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (void).cxx_destruct;
@end

@interface MMFinderLiveShopShelfClassifyCell : UICollectionViewCell
{
    FinderShopShelfLabelClassifyInfo * _info; // +0x8
    UIView * _selectedBgView; // +0x10
    UIView * _contentContainerView; // +0x18
    MMUILabel * _classifyLabel; // +0x20
    MMWebImageView * _iconView; // +0x28
    UIView * _dynamicContentView; // +0x30
    NSMutableArray * _dynamicSubviews; // +0x38
    NSMutableArray * _dynamicItems; // +0x40
}
+ (id)cellIdentifier;
+ (id)normalFont;
+ (id)selectedFont;
+ (CGSize)iconSize;
+ (double)spacing;
+ (double)contentWidthForInfo:(id)arg1;
+ (CGSize)cellSizeWithInfo:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutDynamicContent;
- (void)updateWithClassifyInfo:(id)arg1;
- (void)rebuildDynamicContentWithItems:(id)arg1;
- (id)imgUrlForItem:(id)arg1 selected:(BOOL)arg2;
- (void)updateWithIsChosen:(BOOL)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (id)selectedBgView;
- (void)setSelectedBgView:(id)arg1;
- (id)contentContainerView;
- (void)setContentContainerView:(id)arg1;
- (id)classifyLabel;
- (void)setClassifyLabel:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)dynamicContentView;
- (void)setDynamicContentView:(id)arg1;
- (id)dynamicSubviews;
- (void)setDynamicSubviews:(id)arg1;
- (id)dynamicItems;
- (void)setDynamicItems:(id)arg1;
- (void).cxx_destruct;
@end

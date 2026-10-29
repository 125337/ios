@interface TingStandardSharedListView : UIView
{
    TingCategoryCoverView * _coverView; // +0x8
    MMListenCategoryItem * _categoryItem; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateDisplayWith:(id)arg1;
- (void)layoutSubviews;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)categoryItem;
- (void)setCategoryItem:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCFinderJumpInfoDynamicCarouselDetailView : UIView
{
    WCFinderJumpInfoDynamicCarouselDetailViewItem * _viewItem; // +0x8
    id /* block */ _contentSizeDidChangeBlock; // +0x10
    UIView * _contentView; // +0x18
    NSArray * _itemViews; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)reloadContentViewWithViewItem:(id)arg1;
- (void)switchCarouselWithViewItem:(id)arg1 animation:(long long)arg2;
- (void)updateCarouselContent;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)layoutContentSubviews;
- (void)contentSizeDidChange;
- (id)viewItem;
- (id /* block */)contentSizeDidChangeBlock;
- (void)setContentSizeDidChangeBlock:(id /* block */)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)itemViews;
- (void)setItemViews:(id)arg1;
- (void).cxx_destruct;
@end


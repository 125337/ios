@interface EcsFinderFeedBarBaseButtonCell : UICollectionViewCell <ZZFlexibleLayoutViewProtocol>
{
    EcsRichTextButtonViewModel * _viewDataModel; // +0x8
    UIView * _shadowView; // +0x10
}
- (void)setHighlighted:(BOOL)arg1;
- (void)onViewPositionUpdatedWithIndexPath:(id)arg1 sectionItemCount:(long long)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (id)viewDataModel;
- (void)setViewDataModel:(id)arg1;
- (id)shadowView;
- (void)setShadowView:(id)arg1;
- (void).cxx_destruct;
@end

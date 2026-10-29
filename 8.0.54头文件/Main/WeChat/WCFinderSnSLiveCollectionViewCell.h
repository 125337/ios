@interface WCFinderSnSLiveCollectionViewCell : UICollectionViewCell
{
    WCFinderFeedStaticCoverView * _coverView; // +0x8
    WCFinderFeedContentVM * _contentVM; // +0x10
    UIView * _avatorContainerView; // +0x18
    UILabel * _shareTipsLabel; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (id)avatorContainerView;
- (id)shareTipsLabel;
- (void)prepareForReuse;
- (void)initSubView;
- (void)updateUIWithContentVM:(id)arg1;
- (void)updateAvatorContainerView;
- (id)generatorAvatorViewWithHeadUrl:(id)arg1;
- (id)coverView;
- (void)setCoverView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void)setAvatorContainerView:(id)arg1;
- (void)setShareTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end


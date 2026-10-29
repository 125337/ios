@interface WCFinderLiveRecommendCollectionViewCell : UICollectionViewCell
{
    WCFinderLiveCompleteElementModel * _elementModel; // +0x8
    WCFinderDiscoveryNearbyLiveCollectionViewCell * _recommendItemView; // +0x10
    id /* block */ _onTap; // +0x18
    id <WCFinderDiscoveryNearbyLiveCollectionViewCellDelegate> _delegate; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)onTapItem:(id)arg1;
- (void)playWithSound:(BOOL)arg1;
- (void)stop;
- (void)layoutSubviews;
- (id)recommendItemView;
- (void)updateCellWithItem:(id)arg1 delegate:(id)arg2 styleInfo:(id)arg3 openAudienceNewLiveRecomend:(BOOL)arg4 enableTopAuthorInfo:(BOOL)arg5;
- (id)elementModel;
- (void)setElementModel:(id)arg1;
- (void)setRecommendItemView:(id)arg1;
- (id /* block */)onTap;
- (void)setOnTap:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

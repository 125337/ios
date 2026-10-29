@interface EcsFinderFeedSingleProductBar : EcsFinderFeedSingleProductBaseView
{
    UIView * _leftView; // +0x8
    EcsFinderFeedBulkBuyInfoView * _bulkBuyView; // +0x10
    EcsFinderFeedNewBuyerInfoView * _buyerView; // +0x18
    EcsFinderFeedFriendsLikedInfoView * _friendsLikedView; // +0x20
    UICollectionView * _actionView; // +0x28
    ZZFLEXAngel * _actionAngel; // +0x30
}
- (void)onViewSizeChanged;
- (void)setDataVM:(id)arg1;
- (void)reloadActionView;
- (void)setupUI;
- (id)bulkBuyView;
- (id)buyerView;
- (id)friendsLikedView;
- (id)leftView;
- (void)setLeftView:(id)arg1;
- (void)setBulkBuyView:(id)arg1;
- (void)setBuyerView:(id)arg1;
- (void)setFriendsLikedView:(id)arg1;
- (id)actionView;
- (void)setActionView:(id)arg1;
- (id)actionAngel;
- (void)setActionAngel:(id)arg1;
- (void).cxx_destruct;
@end

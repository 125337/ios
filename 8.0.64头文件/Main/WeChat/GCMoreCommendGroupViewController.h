@interface GCMoreCommendGroupViewController : GCReportBaseVc <GCLoadMoreProtocol, GCBaseGroupCellModelDelegate, GCChatRoomImageZoomAnimationDelegate>
{
    GCCollectionViewManager * _collectionViewManager; // +0x70
    UICollectionView * _collectionView; // +0x78
    GCGroupServer * _groupServer; // +0x80
    GCCollectionViewSectionModel * _sectionModel; // +0x88
    GCLoadingMoreCellModel * _loadMoreCellModel; // +0x90
}
- (id)init;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)loadMoreChatRoom;
- (void)viewDidLayoutSubviews;
- (void)onLoadMoreData;
- (void)onOpenChatRoomConfig:(id)arg1 cellModel:(id)arg2;
- (CGRect)getImgFrameWithIdentifier:(id)arg1;
- (void)onMoreChatRoomRespone:(id)arg1;
- (CGRect)collectionViewFrame;
- (id)collectionViewManager;
- (void)setCollectionViewManager:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)groupServer;
- (void)setGroupServer:(id)arg1;
- (id)sectionModel;
- (void)setSectionModel:(id)arg1;
- (id)loadMoreCellModel;
- (void)setLoadMoreCellModel:(id)arg1;
- (void).cxx_destruct;
@end

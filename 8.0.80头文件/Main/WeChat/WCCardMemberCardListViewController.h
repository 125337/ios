@interface WCCardMemberCardListViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCNewCardDetailViewControllerDelegate, WCActionSheetDelegate, SessionSelectControllerDelegate, ShareMessageConfirmLogicHelperDelegate, IMemberCardListLogicExt>
{
    WCCardCollectionView * _collectionView; // +0x70
    UIScrollView * _emptyScrollView; // +0x78
    WCCardEmptyBackView * _emptyBackView; // +0x80
    UICollectionViewFlowLayout * _collectionLayout; // +0x88
    WCCardMemberCardListLogicController * _logicViewController; // +0x90
    ShareMessageConfirmLogicHelper * _sendAppMsgHelper; // +0x98
}
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (id)collectionView;
- (id)emptyScrollView;
- (id)emptyBackView;
- (id)collectionLayout;
- (void)confiView;
- (void)confiNavigationBar;
- (void)confiData;
- (void)onGiftToFriendWithIndexPath:(id)arg1;
- (void)reloadCollectionView;
- (void)onBackDidSelected;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (void)onDeleteCard:(id)arg1;
- (void)onGiftCard:(id)arg1 lastIndex:(id)arg2;
- (void)onShareCard:(id)arg1 lastIndex:(id)arg2;
- (void)onUseCard:(id)arg1 lastIndex:(id)arg2 delayTime:(double)arg3;
- (void)delayFadeOutCard:(id)arg1;
- (void)memberCardListLogicUpdateMemberCard:(id)arg1 atIdx:(unsigned long long)arg2;
- (void)setCollectionView:(id)arg1;
- (void)setEmptyScrollView:(id)arg1;
- (void)setEmptyBackView:(id)arg1;
- (void)setCollectionLayout:(id)arg1;
- (id)logicViewController;
- (void)setLogicViewController:(id)arg1;
- (id)sendAppMsgHelper;
- (void)setSendAppMsgHelper:(id)arg1;
- (void).cxx_destruct;
@end

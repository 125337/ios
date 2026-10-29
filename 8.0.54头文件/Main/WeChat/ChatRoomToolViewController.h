@interface ChatRoomToolViewController : MMUIHalfScreenViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, ChatRoomToolWeAppSelectViewControllerDelegate, IMsgExt, WCActionSheetDelegate, ChatRoomToolLastUseWeAppLogicDelegate, IChatRoomToolMgrExt>
{
    NSMutableArray * m_toolWeAppAr; // +0x68
    NSMutableArray * m_latestUseInGroupWeAppAr; // +0x70
    ChatRoomToolLastUseWeAppLogic * m_lastUseWeAppLogic; // +0x78
    BOOL _isShowInPageSheetMode; // +0x80
    CContact * _chatRoomContact; // +0x88
    UICollectionView * _collectionView; // +0x90
}
- (void)viewDidLoad;
- (id)init;
- (void)initRegister;
- (void)initData;
- (void)reloadView;
- (double)getContentMargin;
- (double)getSessionContentMargin;
- (void)initCollectionView;
- (void)reloadCollection;
- (BOOL)isShowEmptyCell;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)didSelectChatRoomToolWeAppAddAction;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)didUpdateSelectWeAppList:(id)arg1;
- (void)onLoadWeAppLogicReloadTableWithWeAppList:(id)arg1;
- (void)onChangeChatRoomToolWeAppListWithUserName:(id)arg1;
- (id)chatRoomContact;
- (void)setChatRoomContact:(id)arg1;
- (BOOL)isShowInPageSheetMode;
- (void)setIsShowInPageSheetMode:(BOOL)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (void).cxx_destruct;
@end


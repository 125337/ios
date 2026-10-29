@interface _TtC6WeChat41StoreEmotionDesignerProfileViewController : MMUIViewController <MMNavBarInteractiveDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, StoreEmoticonGetPersonalDesignerCGIDelegate, StoreEmotionGetDesignerEmojiListCgiDelegate, StoreEmoticonGetDesginerIPListCgiDelegate, IStoreEmotionRewardExt, IStoreEmotionDesignerReddotMgrExt, StoreEmotionPageShareLogicDelegate>
{
     reportInfo; // +0x8
     closeBlock; // +0x10
     addNewPackageBlock; // +0x20
     viewDetailBlock; // +0x30
     designer; // +0x40
     needJmp2SingleEmoji; // +0x48
     oldRedirectUrl; // +0x50
     extranceScene; // +0x60
     designerDesc; // +0x68
     bannerUrl; // +0x78
     setKey; // +0x88
     ipContext; // +0x98
     emoticonsList; // +0xa8
     ipPacks; // +0xb0
     emojiList; // +0xb8
     emoticonsListFinishLoad; // +0xc0
     emojiListFinishLoad; // +0xc1
     finderInfo; // +0xc8
     hasLoad; // +0xe8
     canShowDesignerEmojiEntrance; // +0xe9
     didPrefetchDesignerEmoji; // +0xea
     topicProxy; // +0xf0
     curPayingRewardStoreItem; // +0xf8
     curPayingRewardInfo; // +0x100
     $__lazy_storage_$_collectionView; // +0x108
     collectionLayout; // +0x110
     headerView; // +0x118
     $__lazy_storage_$_getDesignerCgi; // +0x120
     $__lazy_storage_$_getEmojiListCgi; // +0x128
     $__lazy_storage_$_getDesignerIPListCgi; // +0x130
     $__lazy_storage_$_shareLogic; // +0x138
     $__lazy_storage_$_loadingView; // +0x140
     $__lazy_storage_$_retryContainer; // +0x148
     $__lazy_storage_$_retryTipLabel; // +0x150
     $__lazy_storage_$_retryButton; // +0x158
     contentCell; // +0x160
     $__lazy_storage_$_sessionID; // +0x168
     designerReportInfo; // +0x178
     headerHeight; // +0x190
     lastOffsetY; // +0x198
     headerBottomMargin; // +0x1a0
     cellIdentifier; // +0x1a8
     headerIdentifier; // +0x1b8
}
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (id /* block */)addNewPackageBlock;
- (void)setAddNewPackageBlock:(id /* block */)arg1;
- (id /* block */)viewDetailBlock;
- (void)setViewDetailBlock:(id /* block */)arg1;
- (id)designer;
- (void)setDesigner:(id)arg1;
- (BOOL)needJmp2SingleEmoji;
- (void)setNeedJmp2SingleEmoji:(BOOL)arg1;
- (id)oldRedirectUrl;
- (void)setOldRedirectUrl:(id)arg1;
- (id)initWithExtrance:(long long)arg1;
- (id)initWithExtrance:(long long)arg1 and:(id)arg2;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)setWithPreviewUrl:(id)arg1;
- (void)setWithDesignerUin:(unsigned int)arg1 andOldRedirectUrl:(id)arg2 andDesignerName:(id)arg3;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (BOOL)useBlackStatusbar;
- (BOOL)useTransparentNavibar;
- (BOOL)showNavigationBarSepLine;
- (id)navigationBarBackgroundColor;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)onGotPersonalDesignerResponse:(id)arg1;
- (void)onGetPersonalDesignerFailed;
- (void)onGetDesignerEmojiListSuccessedWithDesignerUin:(unsigned int)arg1 Tags:(id)arg2 DesignerEmojiList:(id)arg3 hasMore:(BOOL)arg4;
- (void)onGetDesignerEmojiListFailedWithDesignerUin:(unsigned int)arg1;
- (void)onRetryButtonClick;
- (void)onShare;
- (void)onBackBtnClickWithBtn:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onGotDesginerIPList:(id)arg1 with:(unsigned long long)arg2;
- (void)onGetDesginerIPListFailed;
- (void)onGetEmotionRewardFinishedWithPid:(id)arg1 RewardInfo:(id)arg2;
- (void)onDesigner:(id)arg1 singlePid:(id)arg2 reddotStatusChange:(BOOL)arg3;
- (void)onDesigner:(id)arg1 changReddotStatus:(BOOL)arg2 newReddotPids:(id)arg3;
- (void)registerYReportSdk;
- (id)normalRightButton;
- (id)fadeRightButton;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end


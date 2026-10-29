@interface MMLiveSyndicateParticipantWaitingViewController : MMUIViewController <MMLiveSyndicatePollingLogicDelegate, MMLiveSyndicateManagingDelegate, MMLiveMoreFunctionManagerDelegate, MMScrollActionSheetDelegate, MMLiveActionSheetFlowLayoutViewDelegate, MMFinderLivePromoteManagePanelDelegate, MultiSelectContactsViewControllerDelegate, UICollectionViewDelegate, UICollectionViewDataSource>
{
    int _noticeTriggerType; // +0x70
    NSString * _finderUsername; // +0x78
    MMLiveSyndicateModel * _syndicateModel; // +0x80
    WCFinderCreateLivePrepareResponseModel * _prepareResponseModel; // +0x88
    MMLiveSyndicatePollingLogic * _pollingLogic; // +0x90
    MMLiveSyndicateParticipantManagementPageSheet * _managementSheet; // +0x98
    WCFinderStarterLiveViewModel * _starterVM; // +0xa0
    MMFinderLiveTask * _localLiveTask; // +0xa8
    MMScrollActionSheet * _moreActionSheet; // +0xb0
    MMLiveActionSheetFlowLayoutView * _moreActionSheetFlowLayoutView; // +0xb8
    MMStarterLiveMoreFunctionManager * _moreFunctionManager; // +0xc0
    MMFinderLivePromoteManageLogic * _promoteManageLogic; // +0xc8
    UIView * _topAreaView; // +0xd0
    UIImageView * _backgroundImageView; // +0xd8
    WCFinderHeadImageView * _coverImageView; // +0xe0
    UILabel * _titleLabel; // +0xe8
    UIView * _gradientView; // +0xf0
    CAGradientLayer * _topGradientLayer; // +0xf8
    CAGradientLayer * _bottomGradientLayer; // +0x100
    UICollectionView * _controlButtonPanel; // +0x108
    NSArray * _controlItems; // +0x110
    MMFinderLiveControlButtonItem * _leftItem; // +0x118
    MMFinderLiveControlButtonItem * _moreToolItem; // +0x120
    MMLiveSyndicateManagementEntryView * _syndicateEntryView; // +0x128
    UIButton * _waitingButton; // +0x130
    MMLiveNoticeSelectButton * _noticeSelectButton; // +0x138
}
- (id)initWithFinderUsername:(id)arg1 syndicateModel:(id)arg2 prepareResponseModel:(id)arg3 starterVM:(id)arg4;
- (void)dealloc;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)setupGradientLayers;
- (void)initializeComponents;
- (id)leftItem;
- (id)moreToolItem;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (double)controlPanelItemPadding;
- (CGSize)controlPanelSize;
- (void)resetCoverImage;
- (void)updateBackgroundWithImage:(id)arg1;
- (void)loadBackgroundFromURL:(id)arg1;
- (void)onCloseTapped;
- (void)onSyndicateEntryTapped;
- (void)onLiveNoticeTapped;
- (void)onPrizeButtonClick;
- (void)onMoreButtonClick;
- (void)onMoreSettingsButtonClick;
- (id)moreActionSheet;
- (id)moreActionSheetFlowLayoutView;
- (id)buildParticipantMoreActionSheetSectionsWithTitlesOut:(id)arg1;
- (id)makeItemWithTitle:(id)arg1 iconName:(id)arg2 iconSize:(CGSize)arg3 itemId:(id)arg4;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)onActionSheetItemClicked:(id)arg1 senderView:(id)arg2;
- (id)mmLiveActionSheetFlowLayoutView:(id)arg1 getRedDotShowInfoAtPath:(id)arg2;
- (void)configLiveActionSheetCollectionCellOnCreate:(id)arg1;
- (void)showSyndicateManagementSheet;
- (void)populateLiveTaskWithPrepareResponse;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)startPolling;
- (void)onSyndicateModelUpdated:(id)arg1 withMembersDiff:(id)arg2;
- (void)onSyndicateLiveStarted:(id)arg1 withObjectId:(unsigned long long)arg2 liveId:(unsigned long long)arg3;
- (void)onSyndicateTerminatedWithReason:(unsigned long long)arg1;
- (void)onSyndicateChanged:(id)arg1;
- (void)onSyndicateCanceled;
- (void)onSyndicateInvitationLinkInvalidated;
- (void)finishWithResult:(unsigned long long)arg1 objectId:(unsigned long long)arg2 liveId:(unsigned long long)arg3;
- (void)selectRoomForRedPacket;
- (void)onChildPageSheetDismiss;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)operationViewDidSelect:(unsigned long long)arg1 item:(id)arg2;
- (void)reloadGiftSettings;
- (BOOL)canUpdateGiftForTask:(id)arg1;
- (void)updateCreationGiftSwitchEnabled:(BOOL)arg1 allowAnchorNotice:(BOOL)arg2;
- (BOOL)enableBindNoticeView;
- (BOOL)enableShowNoticeView;
- (id)getNoticeViewText;
- (void)updateNoticeData;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)syndicateModel;
- (void)setSyndicateModel:(id)arg1;
- (id)prepareResponseModel;
- (void)setPrepareResponseModel:(id)arg1;
- (id)pollingLogic;
- (void)setPollingLogic:(id)arg1;
- (id)managementSheet;
- (void)setManagementSheet:(id)arg1;
- (id)starterVM;
- (void)setStarterVM:(id)arg1;
- (id)localLiveTask;
- (void)setLocalLiveTask:(id)arg1;
- (void)setMoreActionSheet:(id)arg1;
- (void)setMoreActionSheetFlowLayoutView:(id)arg1;
- (id)moreFunctionManager;
- (void)setMoreFunctionManager:(id)arg1;
- (id)promoteManageLogic;
- (void)setPromoteManageLogic:(id)arg1;
- (id)topAreaView;
- (void)setTopAreaView:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)coverImageView;
- (void)setCoverImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)topGradientLayer;
- (void)setTopGradientLayer:(id)arg1;
- (id)bottomGradientLayer;
- (void)setBottomGradientLayer:(id)arg1;
- (id)controlButtonPanel;
- (void)setControlButtonPanel:(id)arg1;
- (id)controlItems;
- (void)setControlItems:(id)arg1;
- (void)setLeftItem:(id)arg1;
- (void)setMoreToolItem:(id)arg1;
- (id)syndicateEntryView;
- (void)setSyndicateEntryView:(id)arg1;
- (id)waitingButton;
- (void)setWaitingButton:(id)arg1;
- (id)noticeSelectButton;
- (void)setNoticeSelectButton:(id)arg1;
- (int)noticeTriggerType;
- (void)setNoticeTriggerType:(int)arg1;
- (void).cxx_destruct;
@end

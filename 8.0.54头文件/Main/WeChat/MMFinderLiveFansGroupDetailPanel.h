@interface MMFinderLiveFansGroupDetailPanel : MMPageSheetBaseView <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, MMFinderLiveFansGroupDetailCollectionViewCellDelegate, ILinkEventExt>
{
    BOOL _useDefaultIntimacy; // +0x8
    BOOL _isFetching; // +0x9
    BOOL _isReserveLiveModing; // +0xa
    BOOL _isAfterJoin; // +0xb
    id /* block */ _onReserveLiveNotificationBlock; // +0x10
    id /* block */ _onClickJoinSuperfanCallback; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    UIView * _panelView; // +0x28
    MMFinderLiveFansGroupDetailNavBar * _navBar; // +0x30
    UIView * _upgradeHeaderView; // +0x38
    MMUILabel * _myWarmHeartValueLabel; // +0x40
    MMFinderLiveFansGroupSignView * _signView; // +0x48
    RichTextView * _upgradeTipLabel; // +0x50
    RichTextView * _superfanTipLabel; // +0x58
    UIView * _upgradeInfoContainerView; // +0x60
    UIView * _settingHeaderView; // +0x68
    MMUILabel * _settingHeaderTitleLabel; // +0x70
    UICollectionView * _upgradeDetailCollectView; // +0x78
    NSMutableArray * _fansGroupUpgradeInfoList; // +0x80
    WCFinderAnimationLoadingView * _loadingView; // +0x88
    MMFinderLiveFansGroupIntimacyInfo * _fansGroupIntimacyInfo; // +0x90
    unsigned long long _reserveLiveContinueModCnt; // +0x98
}
- (id)initWithTaskId:(id)arg1 afterJoin:(BOOL)arg2;
- (void)innerInit;
- (void)dealloc;
- (void)registerExtension;
- (void)unResgisterExtension;
- (void)setupPageSheetConfig;
- (BOOL)shouldAdaptToDarkLight;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)updateWidgetsAlpha;
- (void)layoutPanelView;
- (void)layoutUpgradeHeaderView;
- (void)updateUpgradInfoContainerViewHeight;
- (void)layoutSettingHeaderView;
- (void)updateUpgradeHeaderViewHeight;
- (void)updateSettingHeaderViewHeight;
- (double)getUpgradeHeaderViewHeight;
- (double)getSettingHeaderViewHeight;
- (double)contentWidth;
- (double)contentHeight;
- (double)getContentHeightForCurrentScreenHeight;
- (void)layoutSettingHeaderTitleLabel;
- (void)layoutNavBar;
- (void)layoutMyWarmHeartValueLabel;
- (void)reportAudienceReserveLiveNotificationInfo:(long long)arg1;
- (void)layoutCurrentLevelAndSign;
- (void)layoutUpgradeTipLabel;
- (void)layoutSuperfanTipLabel;
- (void)layoutUpgradeDetailCollectView;
- (void)layoutLoadingView;
- (void)createLoadingView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)detailCollectionViewCell:(id)arg1 didModifyFansGroupReserveLive:(BOOL)arg2;
- (void)detailCollectionViewCell:(id)arg1 onViewImageWithURLString:(id)arg2 image:(id)arg3 sourceImageView:(id)arg4;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)clearSubViews:(id)arg1;
- (id)getIntroductionUrl:(id)arg1;
- (void)refreshFansGroupIntimacy;
- (void)refreshUI;
- (unsigned int)getCurrentIntimacy;
- (double)getUpgradeTipLabelMaxWidth;
- (void)updateFansGroupUpgradeInfoList;
- (unsigned int)getGainIntimacy:(id)arg1;
- (unsigned int)getAllGainIntimacy:(id)arg1;
- (unsigned int)getCurrentComplete:(id)arg1;
- (void)modifyFansGroupReserveLive:(BOOL)arg1;
- (void)buySuperfan;
- (id)liveTask;
- (void)setIsFetching:(BOOL)arg1;
- (BOOL)isSelfSuperfan;
- (void)showWithAnimated:(BOOL)arg1;
- (void)showInView:(id)arg1 animated:(BOOL)arg2;
- (void)reportForOpenFansGroupDetailPage;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)useDefaultIntimacy;
- (void)setUseDefaultIntimacy:(BOOL)arg1;
- (id /* block */)onReserveLiveNotificationBlock;
- (void)setOnReserveLiveNotificationBlock:(id /* block */)arg1;
- (id /* block */)onClickJoinSuperfanCallback;
- (void)setOnClickJoinSuperfanCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)panelView;
- (void)setPanelView:(id)arg1;
- (id)navBar;
- (void)setNavBar:(id)arg1;
- (id)upgradeHeaderView;
- (void)setUpgradeHeaderView:(id)arg1;
- (id)myWarmHeartValueLabel;
- (void)setMyWarmHeartValueLabel:(id)arg1;
- (id)signView;
- (void)setSignView:(id)arg1;
- (id)upgradeTipLabel;
- (void)setUpgradeTipLabel:(id)arg1;
- (id)superfanTipLabel;
- (void)setSuperfanTipLabel:(id)arg1;
- (id)upgradeInfoContainerView;
- (void)setUpgradeInfoContainerView:(id)arg1;
- (id)settingHeaderView;
- (void)setSettingHeaderView:(id)arg1;
- (id)settingHeaderTitleLabel;
- (void)setSettingHeaderTitleLabel:(id)arg1;
- (id)upgradeDetailCollectView;
- (void)setUpgradeDetailCollectView:(id)arg1;
- (id)fansGroupUpgradeInfoList;
- (void)setFansGroupUpgradeInfoList:(id)arg1;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)fansGroupIntimacyInfo;
- (void)setFansGroupIntimacyInfo:(id)arg1;
- (BOOL)isFetching;
- (BOOL)isReserveLiveModing;
- (void)setIsReserveLiveModing:(BOOL)arg1;
- (unsigned long long)reserveLiveContinueModCnt;
- (void)setReserveLiveContinueModCnt:(unsigned long long)arg1;
- (BOOL)isAfterJoin;
- (void)setIsAfterJoin:(BOOL)arg1;
- (void).cxx_destruct;
@end


@interface _TtC6WeChat32BrandProfilePicTabViewController : UIViewController <UICollectionViewDelegate, BrandProfileTopicViewDelegate, BrandProfileTabVCProtocol, MMRefreshTableFooterDelegate>
{
    void * delegate; // +0x8
    void * topicDelegate; // +0x10
    BrandProfileOutboxAndMsgProvider * outboxProvider; // +0x18
    BrandProfileReporter * reporter; // +0x20
     viewModel; // +0x28
     menuCoordinator; // +0x30
     outboxEventKey; // +0x38
     observingOutboxAndMsg; // +0x48
     serviceType; // +0x50
     justReadSource; // +0x58
     justReadPageLimit; // +0x70
     hasCompletedInitialFetch; // +0x74
     didRequestJustRead; // +0x75
     didStartJustReadPreload; // +0x76
     isJustReadTipReady; // +0x77
     shouldJumpToJustReadSourceWhenReady; // +0x78
     isJustReadMaskVisible; // +0x79
     shouldDisplayJustReadTip; // +0x7a
     isJustReadTabSelected; // +0x7b
     isJustReadPreloading; // +0x7c
     $__lazy_storage_$_waterfallLayout; // +0x80
     $__lazy_storage_$_topicView; // +0x88
     $__lazy_storage_$_updateReminderView; // +0x90
     $__lazy_storage_$_collectionView; // +0x98
     $__lazy_storage_$_dataSource; // +0xa0
     gradientLayer; // +0xa8
     gradientView; // +0xb0
     $__lazy_storage_$_justReadTipsView; // +0xb8
     $__lazy_storage_$_loadingView; // +0xc0
}
- (void)onLikeStatusChanged:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (id)viewController;
- (void)setContentOffset:(CGPoint)arg1;
- (void)updateSectionWidthInSectionDataList;
- (id)tabTitle;
- (void)setExternalGestureRecognizer:(id)arg1;
- (unsigned long long)tabType;
- (void)onTopicButtonClicked:(id)arg1;
- (void)onUnfoldButtonClicked;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)topicDelegate;
- (void)setTopicDelegate:(id)arg1;
- (id)outboxProvider;
- (void)setOutboxProvider:(id)arg1;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)initWithUsername:(id)arg1 inBrandManagerMode:(BOOL)arg2 serviceType:(long long)arg3 cachedPOICount:(long long)arg4;
- (id)initWithCoder:(id)arg1;
- (BOOL)shouldWrapViewWithSafeArea;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)configureJustReadSourceWithBiz:(id)arg1 mid:(unsigned int)arg2 idx:(unsigned int)arg3;
- (void)setJustReadTabSelected:(BOOL)arg1;
- (void)updateServiceType:(long long)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onDeleteBizArticleNotification:(id)arg1;
- (void)refreshUpdateReminderLayout;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end

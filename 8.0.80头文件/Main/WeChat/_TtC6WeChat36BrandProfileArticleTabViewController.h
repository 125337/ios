@interface _TtC6WeChat36BrandProfileArticleTabViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDelegate, BrandProfileTopicViewDelegate, BrandProfileTabVCProtocol, MMRefreshTableFooterDelegate>
{
    void * delegate; // +0x8
    void * topicDelegate; // +0x10
    BrandProfileOutboxAndMsgProvider * outboxProvider; // +0x18
    BrandProfileReporter * reporter; // +0x20
     viewModel; // +0x28
     menuCoordinator; // +0x30
     observingMsgUpdated; // +0x38
     hasAppliedInitialSnapshot; // +0x39
     $__lazy_storage_$_topicView; // +0x40
     $__lazy_storage_$_updateReminderView; // +0x48
     $__lazy_storage_$_collectionView; // +0x50
     $__lazy_storage_$_dataSource; // +0x58
     $__lazy_storage_$_loadingView; // +0x60
}
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
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
- (id)initWithUsername:(id)arg1 inBrandManagerMode:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (void)refreshUpdateReminderLayout;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onDeleteBizArticleNotification:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end

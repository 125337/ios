@interface _TtC6WeChat36BrandProfileAudioTabV2ViewController : UIViewController <UICollectionViewDelegate, BrandProfileTopicViewDelegate, BrandProfileTabVCProtocol, MMRefreshTableFooterDelegate>
{
    void * delegate; // +0x8
    void * topicDelegate; // +0x10
    BrandProfileReporter * reporter; // +0x18
     viewModel; // +0x20
     menuCoordinator; // +0x28
     $__lazy_storage_$_topicView; // +0x30
     $__lazy_storage_$_collectionView; // +0x38
     $__lazy_storage_$_dataSource; // +0x40
     $__lazy_storage_$_loadingView; // +0x48
}
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
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
- (id)reporter;
- (void)setReporter:(id)arg1;
- (id)initWithUsername:(id)arg1 inBrandManagerMode:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onDeleteBizArticleNotification:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end

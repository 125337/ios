@interface _TtC6WeChat32BrandProfilePicTabViewController : UIViewController <UICollectionViewDelegate, BrandProfileTopicViewDelegate, BrandProfileTabVCProtocol, MMRefreshTableFooterDelegate>
{
     delegate; // +0x8
     topicDelegate; // +0x10
     viewModel; // +0x18
     $__lazy_storage_$_waterfallLayout; // +0x20
     $__lazy_storage_$_topicView; // +0x28
     $__lazy_storage_$_collectionView; // +0x30
     $__lazy_storage_$_dataSource; // +0x38
     gradientLayer; // +0x40
     gradientView; // +0x48
     $__lazy_storage_$_loadingView; // +0x50
}
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
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
- (id)initWithUsername:(id)arg1 inBrandManagerMode:(BOOL)arg2;
- (id)initWithCoder:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end

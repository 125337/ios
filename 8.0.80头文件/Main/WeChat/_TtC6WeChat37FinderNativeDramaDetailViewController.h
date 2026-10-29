@interface _TtC6WeChat37FinderNativeDramaDetailViewController : MMUIViewController <WCFinderFeedBaseViewControllerProtocol, WCFinderHalfScreenContentProtocol, UICollectionViewDelegate, WCFinderNativeDramaDetailViewControllerProtocol>
{
     viewModel; // +0x8
    void * parentFeed; // +0x10
    void * containerViewController; // +0x18
     $__lazy_storage_$_collectionView; // +0x20
     $__lazy_storage_$_dataSource; // +0x28
}
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)halfScreenTrackingScrollView;
- (double)contentHeight;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)parentFeed;
- (void)setParentFeed:(id)arg1;
- (id)containerViewController;
- (void)setContainerViewController:(id)arg1;
- (id)initWithViewModel:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end

@interface _TtC6WeChat29FinderKjTheaterViewController : MMUIViewController <UICollectionViewDataSource, UICollectionViewDelegate, WCFinderFeedBaseViewControllerProtocol>
{
     model; // +0x8
     cacheState; // +0x10
     reporter; // +0x18
     pendingPosition; // +0x20
     layoutItems; // +0x48
     layoutHorizontalInsets; // +0x50
     layoutIsRegularWidth; // +0x70
     $__lazy_storage_$_layout; // +0x78
     $__lazy_storage_$_collectionView; // +0x80
     header; // +0x88
     footer; // +0x90
     statusButton; // +0x98
     failed; // +0xa0
     awaitingPlaybackReturn; // +0xa1
     playbackController; // +0xa8
     contextID; // +0xb0
     finished; // +0xc0
     pageVisible; // +0xc1
     validExposedDramaIDs; // +0xc8
}
- (id)initWithCoder:(id)arg1;
- (void)viewDidLoad;
- (BOOL)useTransparentNavibar;
- (id)navigationBarBackgroundColor;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)refreshHeadOnScrolltoTop;
- (void)refresh;
- (void)retry;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end

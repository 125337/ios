@interface _TtC6WeChat46FinderNativeDramaEpisodeSelectedListController : MMUIViewController <WCFinderHalfScreenContentProtocol, UICollectionViewDelegate>
{
     episodes; // +0x8
     onTapAction; // +0x10
     contentHeightValue; // +0x20
    void * containerViewController; // +0x28
     $__lazy_storage_$_collectionView; // +0x30
     $__lazy_storage_$_dataSource; // +0x38
}
- (id)halfScreenTrackingScrollView;
- (double)contentHeight;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)containerViewController;
- (void)setContainerViewController:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void).cxx_destruct;
@end

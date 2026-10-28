@interface WCFinderMusicPlaylistViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderStreamFooterViewActionDelegate, WCFinderStreamProfileMusicPlaylistPageDelegate>
{
    BOOL _isAuthor; // +0x70
    UICollectionView * _collectionView; // +0x78
    WCFinderStreamFooterView * _footerView; // +0x80
    id <WCFindeProfileMusicSectionBase> _viewModel; // +0x88
    void * * _cellUpdater; // +0x90
    id /* block */ _clickAction; // +0x98
    SDKReportInfo _reporter; // +0xa0
}
+ (id)playListVCWithCategory:(id)arg1 cellUpdater:(void * *)arg2 clickAction:(id /* block */)arg3 reporter:(SDKReportInfo)arg4;
- (void)viewDidLoad;
- (void)dealloc;
- (id)navigationBarBackgroundColor;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (BOOL)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterPostFromSnsAction:(id)arg1;
- (void)requestMore;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onPlayList:(id)arg1 appendDataAtRange:(_NSRange)arg2;
- (void)onPlayList:(id)arg1 onLoadSuccess:(BOOL)arg2;
- (void)bindAlbumSDKReport:(id)arg1 item:(id)arg2;
- (void)bindPageSDKReport;
- (BOOL)isAuthor;
- (void)setIsAuthor:(BOOL)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void * *)cellUpdater;
- (void)setCellUpdater:(void * *)arg1;
- (id /* block */)clickAction;
- (void)setClickAction:(id /* block */)arg1;
- (SDKReportInfo)reporter;
- (void)setReporter:(SDKReportInfo)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

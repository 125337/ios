@interface WCStoryAlbumViewModel : NSObject <WCFacadeExt, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCStoryAlbumEntranceCollectionViewCellDelegate>
{
    BOOL _noMoreData; // +0x8
    NSMutableArray * _timeTable; // +0x10
    NSMutableDictionary * _timelineMediaData; // +0x18
    NSMutableArray * _photoMutipleImageArray; // +0x20
    WCMomentsPageContext * _pageContext; // +0x28
    NSString * _userName; // +0x30
    long long _homepageType; // +0x38
    NSMutableSet * _tidSet; // +0x40
    NSMutableDictionary * _isSectionANewYearCache; // +0x48
    id /* block */ _didSelectedItemBlock; // +0x50
    id /* block */ _dataDidChangeBlock; // +0x58
    id /* block */ _fetchMoreDataResultBlock; // +0x60
    id /* block */ _configFooterViewBlock; // +0x68
    id /* block */ _getViewSizeBlock; // +0x70
    id /* block */ _scrollViewDidScrollBlock; // +0x78
    id /* block */ _EntranceCellClickBlock; // +0x80
    NSObject<OS_dispatch_queue> * _handleDataQueue; // +0x88
}
+ (id)viewModelWithUserName:(id)arg1;
- (id)initWithUserName:(id)arg1;
- (void)dealloc;
- (id)tidSet;
- (id)timeTable;
- (id)timelineMediaData;
- (id)photoMutipleImageArray;
- (id)isSectionANewYearCache;
- (void)setDidSelectedItemBlock:(id /* block */)arg1;
- (void)setDataDidChangeBlock:(id /* block */)arg1;
- (void)setFetchMoreDataResultBlock:(id /* block */)arg1;
- (void)setConfigFooterViewBlock:(id /* block */)arg1;
- (void)setGetViewSizeBlock:(id /* block */)arg1;
- (void)setScrollViewDidScrollBlock:(id /* block */)arg1;
- (void)setEntranceCellClickBlock:(id /* block */)arg1;
- (void)registerExtension;
- (void)fetchData;
- (void)fetchMoreData;
- (void)handleData:(id)arg1;
- (BOOL)isANewYearSection:(unsigned long long)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onHomepage:(id)arg1 type:(long long)arg2 updateWithResult:(long long)arg3 withAddedData:(id)arg4 changedData:(id)arg5 deletedData:(id)arg6 tips:(id)arg7;
- (void)onTogetherBadgesChanged;
- (void)onEntranceCellClick;
- (void)setTimeTable:(id)arg1;
- (void)setTimelineMediaData:(id)arg1;
- (void)setPhotoMutipleImageArray:(id)arg1;
- (BOOL)hasNoMoreData;
- (void)setNoMoreData:(BOOL)arg1;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (long long)homepageType;
- (void)setHomepageType:(long long)arg1;
- (void)setTidSet:(id)arg1;
- (void)setIsSectionANewYearCache:(id)arg1;
- (id /* block */)didSelectedItemBlock;
- (id /* block */)dataDidChangeBlock;
- (id /* block */)fetchMoreDataResultBlock;
- (id /* block */)configFooterViewBlock;
- (id /* block */)getViewSizeBlock;
- (id /* block */)scrollViewDidScrollBlock;
- (id /* block */)EntranceCellClickBlock;
- (id)handleDataQueue;
- (void)setHandleDataQueue:(id)arg1;
- (void).cxx_destruct;
@end

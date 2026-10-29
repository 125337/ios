@interface WCAlbumPickViewModel : NSObject <WCFacadeExt, WCAlbumPickerCollectionCellViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    BOOL _noMoreData; // +0x8
    NSMutableArray * _timeTable; // +0x10
    NSMutableDictionary * _timelineMediaData; // +0x18
    NSMutableArray * _photoMutipleImageArray; // +0x20
    OrderedDictionary * _selectedMediaItems; // +0x28
    unsigned long long _maxSelectedImagesCount; // +0x30
    long long _selectionConfirmMode; // +0x38
    NSString * _userName; // +0x40
    long long _homepageType; // +0x48
    NSMutableDictionary * _isSectionANewYearCache; // +0x50
    id /* block */ _selectionChangeBlock; // +0x58
    id /* block */ _didSelectedItemBlock; // +0x60
    id /* block */ _dataDidChangeBlock; // +0x68
    id /* block */ _fetchMoreDataResultBlock; // +0x70
    id /* block */ _configFooterViewBlock; // +0x78
    id /* block */ _getViewSizeBlock; // +0x80
    id /* block */ _scrollViewDidScrollBlock; // +0x88
    id /* block */ _getIndexPathBlock; // +0x90
    id /* block */ _finishDownloadBlock; // +0x98
    id /* block */ _didTapConfirmItemBlock; // +0xa0
    NSMutableArray * _prepardDownloadMediaInfos; // +0xa8
}
+ (id)viewModelWithUserName:(id)arg1 type:(long long)arg2;
- (id)initWithUserName:(id)arg1 type:(long long)arg2;
- (void)dealloc;
- (id)timeTable;
- (id)timelineMediaData;
- (id)photoMutipleImageArray;
- (id)isSectionANewYearCache;
- (void)setSelectionChangeBlock:(id /* block */)arg1;
- (void)setDidSelectdItemBlock:(id /* block */)arg1;
- (void)setDataDidChangeBlock:(id /* block */)arg1;
- (void)setFetchMoreDataResultBlock:(id /* block */)arg1;
- (void)setConfigFooterViewBlock:(id /* block */)arg1;
- (void)setGetViewSizeBlock:(id /* block */)arg1;
- (void)setScrollViewDidScrollBlock:(id /* block */)arg1;
- (void)setGetIndexPathBlock:(id /* block */)arg1;
- (void)setFinishDownloadBlock:(id /* block */)arg1;
- (void)setDidTapConfirmItemBlock:(id /* block */)arg1;
- (void)registerExtension;
- (void)fetchData;
- (void)fetchMoreData;
- (void)handleData:(id)arg1;
- (long long)getSelectedMediaType;
- (id)getSelectedMediaDownloadLocalPath;
- (id)getSelectedMediaContent;
- (id)checkSelectedMediaDownload;
- (void)downloadMediaList:(id)arg1;
- (BOOL)isANewYearSection:(unsigned long long)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onHomepage:(id)arg1 type:(long long)arg2 updateWithResult:(long long)arg3 withAddedData:(id)arg4 changedData:(id)arg5 deletedData:(id)arg6 tips:(id)arg7;
- (long long)indexInSelectedMedia:(id)arg1;
- (unsigned int)getSelectedCount;
- (void)onRemoveSelectedInfo:(id)arg1;
- (BOOL)isMediaSelectable:(id)arg1;
- (void)onToggleSelection:(id)arg1;
- (void)handleItemPicked:(id)arg1;
- (id)mediaOfIndexPath:(id)arg1;
- (void)pickMedia:(id)arg1;
- (id)findParentFeed:(id)arg1;
- (BOOL)isPhotoMedia:(id)arg1;
- (BOOL)hasSelectImageAsset;
- (BOOL)hasSelectVideoAsset;
- (void)onDownloadFinish:(id)arg1 downloadType:(long long)arg2;
- (void)onDownloadFail:(id)arg1 downloadType:(long long)arg2;
- (void)setTimeTable:(id)arg1;
- (void)setTimelineMediaData:(id)arg1;
- (void)setPhotoMutipleImageArray:(id)arg1;
- (id)selectedMediaItems;
- (void)setSelectedMediaItems:(id)arg1;
- (unsigned long long)maxSelectedImagesCount;
- (void)setMaxSelectedImagesCount:(unsigned long long)arg1;
- (long long)selectionConfirmMode;
- (void)setSelectionConfirmMode:(long long)arg1;
- (BOOL)hasNoMoreData;
- (void)setNoMoreData:(BOOL)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (long long)homepageType;
- (void)setHomepageType:(long long)arg1;
- (void)setIsSectionANewYearCache:(id)arg1;
- (id /* block */)selectionChangeBlock;
- (id /* block */)didSelectedItemBlock;
- (void)setDidSelectedItemBlock:(id /* block */)arg1;
- (id /* block */)dataDidChangeBlock;
- (id /* block */)fetchMoreDataResultBlock;
- (id /* block */)configFooterViewBlock;
- (id /* block */)getViewSizeBlock;
- (id /* block */)scrollViewDidScrollBlock;
- (id /* block */)getIndexPathBlock;
- (id /* block */)finishDownloadBlock;
- (id /* block */)didTapConfirmItemBlock;
- (id)prepardDownloadMediaInfos;
- (void)setPrepardDownloadMediaInfos:(id)arg1;
- (void).cxx_destruct;
@end

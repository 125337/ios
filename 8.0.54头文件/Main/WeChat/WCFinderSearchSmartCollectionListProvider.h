@interface WCFinderSearchSmartCollectionListProvider : NSObject <WCFinderCollectionFeedListProvider>
{
    BOOL _hasMoreCollectionTop; // +0x8
    BOOL _hasMoreCollectionBottom; // +0x9
    BOOL _filterCollectionId; // +0xa
    NSString * _traceTag; // +0x10
    WCFinderShareFeedDataProvider * _dataProvider; // +0x18
    FinderCollectionInfo * _collectionInfo; // +0x20
    WCFinderFeedArray * _feedArray; // +0x28
    id /* block */ _feedMapper; // +0x30
}
+ (id)inlineProvider:(id)arg1 contentVM:(id)arg2 feedMapper:(id /* block */)arg3;
+ (id)newListProvider:(id)arg1 contentVM:(id)arg2 feedMapper:(id /* block */)arg3;
- (id)initWithDataProvider:(id)arg1 collectionInfo:(id)arg2 feedMapper:(id /* block */)arg3 firstPageDatas:(id)arg4 filterCollectionId:(BOOL)arg5;
- (BOOL)hasMoreTop;
- (BOOL)hasMoreBottom;
- (BOOL)isPullingTop;
- (BOOL)isPullingBottom;
- (BOOL)isPullingFirstPage;
- (void)pullTop;
- (void)pullBottom;
- (void)pullFirstPage;
- (void)onFeedChange:(id)arg1 context:(id)arg2;
- (id)onFilterTopDataItems:(id)arg1;
- (id)onFilterBottomDataItems:(id)arg1;
- (id)description;
- (unsigned long long)collectionTopicID;
- (id)traceTag;
- (void)setTraceTag:(id)arg1;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (id)collectionInfo;
- (void)setCollectionInfo:(id)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (BOOL)hasMoreCollectionTop;
- (void)setHasMoreCollectionTop:(BOOL)arg1;
- (BOOL)hasMoreCollectionBottom;
- (void)setHasMoreCollectionBottom:(BOOL)arg1;
- (id /* block */)feedMapper;
- (void)setFeedMapper:(id /* block */)arg1;
- (BOOL)filterCollectionId;
- (void)setFilterCollectionId:(BOOL)arg1;
- (void).cxx_destruct;
@end


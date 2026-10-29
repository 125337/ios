@interface WCFinderWXInteractCenterDataProvider : NSObject <WCFinderInteractiveDetailListDataProvider>
{
    BOOL _continueFlag; // +0x8
    NSHashTable * _observerTable; // +0x10
    NSMutableArray * _mutableItems; // +0x18
    NSMutableSet * _tidContainSet; // +0x20
    NSMutableSet * _collectionIDSet; // +0x28
    unsigned long long _state; // +0x30
    long long _selectType; // +0x38
    long long _favoritesDataType; // +0x40
    NSData * _lastBuffer; // +0x48
    WCFinderBaseCgi * _cgi; // +0x50
    long long _favSelectedSubTabIndex; // +0x58
}
+ (long long)convertTabTypeToTabFlag:(long long)arg1;
+ (long long)genAllTabFlag;
+ (int)genFlowCommentSceneByType:(long long)arg1;
+ (int)genDetailCommentSceneByType:(long long)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithType:(long long)arg1;
- (id)observerTable;
- (void)registerObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)dataLoadLocal;
- (void)dataFetchSuc:(BOOL)arg1;
- (void)dataFetchWillHandle:(BOOL)arg1;
- (void)dataFail;
- (void)dataAppendFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)triggerFetchActionBySelectType:(long long)arg1 dataType:(long long)arg2;
- (void)_loadFirstPageData;
- (void)_registerItem:(id)arg1;
- (void)_insertDataWithNewItems:(id)arg1;
- (void)resetContentInfo;
- (id)subTabList;
- (long long)selectedSubTabIndex;
- (unsigned long long)flowViewState;
- (BOOL)hasMoreData;
- (id)items;
- (id)itemContentVMs;
- (void)deleteItemAtIndex:(long long)arg1;
- (void)fetchNextPage;
- (id)contentVMAtIndex:(long long)arg1;
- (id)getWXInteractiveListCgiWithType:(long long)arg1 commentScene:(int)arg2;
- (void)_didRecivedCGIList:(id)arg1 type:(long long)arg2 commentScene:(int)arg3;
- (void)setObserverTable:(id)arg1;
- (id)mutableItems;
- (void)setMutableItems:(id)arg1;
- (id)tidContainSet;
- (void)setTidContainSet:(id)arg1;
- (id)collectionIDSet;
- (void)setCollectionIDSet:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (long long)selectType;
- (void)setSelectType:(long long)arg1;
- (long long)favoritesDataType;
- (void)setFavoritesDataType:(long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)cgi;
- (void)setCgi:(id)arg1;
- (long long)favSelectedSubTabIndex;
- (void)setFavSelectedSubTabIndex:(long long)arg1;
- (void).cxx_destruct;
@end

@interface WCFinderWXInteractCenterDataProvider : NSObject
{
    BOOL _continueFlag; // +0x8
    NSHashTable * _observerTable; // +0x10
    NSMutableArray * _contentVMArray; // +0x18
    NSMutableSet * _tidContainSet; // +0x20
    unsigned long long _state; // +0x28
    long long _selectType; // +0x30
    NSData * _lastBuffer; // +0x38
    WCFinderBaseCgi * _cgi; // +0x40
}
+ (long long)convertTabTypeToTabFlag:(long long)arg1;
+ (long long)convertTabFlagToTabType:(long long)arg1;
+ (long long)genAllTabFlag;
+ (int)genFlowCommentSceneByType:(long long)arg1;
+ (int)genDetailCommentSceneByType:(long long)arg1;
- (id)init;
- (id)initWithType:(long long)arg1;
- (void)loadFirstPageData;
- (void)dealloc;
- (id)observerTable;
- (void)registerObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)dataLoadLocal;
- (void)dataFetchSuc;
- (void)dataFail;
- (void)dataAppendFromIndex:(long long)arg1 toIndex:(long long)arg2;
- (void)triggerFetchActionBySelectType:(long long)arg1;
- (id)processServerData:(id)arg1;
- (BOOL)isValiadServerDataItem:(id)arg1;
- (void)resetContentInfo;
- (void)deleteContentVM:(id)arg1;
- (unsigned long long)flowViewState;
- (unsigned long long)dataCount;
- (BOOL)hasMoreData;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (id)contentVMFromTid:(id)arg1;
- (long long)indexRowForContentVM:(id)arg1;
- (long long)indexRowForTid:(id)arg1;
- (void)setObserverTable:(id)arg1;
- (id)contentVMArray;
- (void)setContentVMArray:(id)arg1;
- (id)tidContainSet;
- (void)setTidContainSet:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (long long)selectType;
- (void)setSelectType:(long long)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)cgi;
- (void)setCgi:(id)arg1;
- (void).cxx_destruct;
@end


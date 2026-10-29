@interface WCFinderHotWordFetchCursor : NSObject
{
    BOOL _continueFlag; // +0x8
    NSMutableArray * _hotWordList; // +0x10
    WCFinderSearchHotWord * _firstHotword; // +0x18
    AnyPromise * _currentFetchPromise; // +0x20
    NSData * _lastBuffer; // +0x28
    NSData * _objHotwordInfoBuffer; // +0x30
    WCFinderSearchHotWord * _currentHotword; // +0x38
}
- (id)initWithHotWordList:(id)arg1 objHotwordInfoBuffer:(id)arg2 lastBuffer:(id)arg3;
- (id)nextHotWord;
- (id)takeOneHotwordFromStack;
- (void)requestNextPage;
- (BOOL)loading;
- (id)hotWordList;
- (void)setHotWordList:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)firstHotword;
- (void)setFirstHotword:(id)arg1;
- (id)currentFetchPromise;
- (void)setCurrentFetchPromise:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)objHotwordInfoBuffer;
- (void)setObjHotwordInfoBuffer:(id)arg1;
- (id)currentHotword;
- (void)setCurrentHotword:(id)arg1;
- (void).cxx_destruct;
@end

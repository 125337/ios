@interface WCFinderInteractiveSearchStore : NSObject
{
    NSString * _lastKeyword; // +0x8
    NSMutableArray * _dataItems; // +0x10
    NSData * _lastBuff; // +0x18
    unsigned long long _loadState; // +0x20
    WCFinderCustomCGI * _lastCGI; // +0x28
    long long _tabType; // +0x30
}
- (id)initWithTabType:(long long)arg1;
- (void)dealloc;
- (id)init;
- (void)search:(id)arg1 commentScene:(int)arg2 complete:(id /* block */)arg3;
- (void)search:(id)arg1 firstPage:(BOOL)arg2 commentScene:(int)arg3 complete:(id /* block */)arg4;
- (void)requestNextPage:(id /* block */)arg1 commentScene:(int)arg2;
- (id)lastKeyword;
- (void)setLastKeyword:(id)arg1;
- (id)dataItems;
- (void)setDataItems:(id)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (unsigned long long)loadState;
- (void)setLoadState:(unsigned long long)arg1;
- (id)lastCGI;
- (void)setLastCGI:(id)arg1;
- (long long)tabType;
- (void)setTabType:(long long)arg1;
- (void).cxx_destruct;
@end

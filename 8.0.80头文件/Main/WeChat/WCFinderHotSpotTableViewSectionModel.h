@interface WCFinderHotSpotTableViewSectionModel : NSObject
{
    NSData * _lastBuffer; // +0x8
    NSMutableArray * _hotWords; // +0x10
}
- (unsigned long long)dataCount;
- (id)hotWordAtIndex:(unsigned long long)arg1;
- (void)loadLocalData;
- (BOOL)isDataEmpty;
- (void)fetchServerDataCompletion:(id /* block */)arg1 failed:(id /* block */)arg2;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)hotWords;
- (void)setHotWords:(id)arg1;
- (void).cxx_destruct;
@end

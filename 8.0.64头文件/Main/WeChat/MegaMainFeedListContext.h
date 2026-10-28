@interface MegaMainFeedListContext : NSObject
{
    NSArray * _mainFeedList; // +0x8
    NSNumber * _hasMore; // +0x10
    FlutterStandardTypedData * _lastBuffer; // +0x18
}
+ (id)makeWithMainFeedList:(id)arg1 hasMore:(id)arg2 lastBuffer:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)mainFeedList;
- (void)setMainFeedList:(id)arg1;
- (id)hasMore;
- (void)setHasMore:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (void).cxx_destruct;
@end

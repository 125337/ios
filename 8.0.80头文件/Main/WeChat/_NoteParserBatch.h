@interface _NoteParserBatch : NSObject
{
    BOOL _hasMore; // +0x8
    NSArray * _items; // +0x10
    id /* block */ _readyBlock; // +0x18
    id /* block */ _finishBlock; // +0x20
    NSMutableArray * _resultsByIndex; // +0x28
    long long _finishedCount; // +0x30
}
- (id)items;
- (void)setItems:(id)arg1;
- (BOOL)hasMore;
- (void)setHasMore:(BOOL)arg1;
- (id /* block */)readyBlock;
- (void)setReadyBlock:(id /* block */)arg1;
- (id /* block */)finishBlock;
- (void)setFinishBlock:(id /* block */)arg1;
- (id)resultsByIndex;
- (void)setResultsByIndex:(id)arg1;
- (long long)finishedCount;
- (void)setFinishedCount:(long long)arg1;
- (void).cxx_destruct;
@end

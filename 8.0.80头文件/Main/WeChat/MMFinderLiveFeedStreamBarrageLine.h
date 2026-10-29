@interface MMFinderLiveFeedStreamBarrageLine : NSObject
{
    BOOL _markAppendedItemCurRunLoop; // +0x8
    BOOL _disableInsert; // +0x9
    MMFinderLiveFeedStreamBarrageConfig * _config; // +0x10
    double _width; // +0x18
    NSMutableArray * _items; // +0x20
}
- (id)init;
- (BOOL)canAppendItem:(id)arg1;
- (BOOL)tryAddItem:(id)arg1;
- (void)unmarkAppendedItemCurRunLoop;
- (id)lastBarrageItem;
- (void)deleteItem:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (BOOL)markAppendedItemCurRunLoop;
- (void)setMarkAppendedItemCurRunLoop:(BOOL)arg1;
- (BOOL)disableInsert;
- (void)setDisableInsert:(BOOL)arg1;
- (void).cxx_destruct;
@end

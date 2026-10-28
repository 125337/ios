@interface WCFinderSectionDiffChangeItem : NSObject
{
    int _type; // +0x8
    NSIndexSet * _indexSet; // +0x10
    NSArray * _itemChanges; // +0x18
}
- (id)initWithType:(int)arg1 indexSet:(id)arg2 itemChange:(id)arg3;
- (int)type;
- (void)setType:(int)arg1;
- (id)indexSet;
- (void)setIndexSet:(id)arg1;
- (id)itemChanges;
- (void)setItemChanges:(id)arg1;
- (void).cxx_destruct;
@end

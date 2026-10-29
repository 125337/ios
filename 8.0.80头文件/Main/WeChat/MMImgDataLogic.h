@interface MMImgDataLogic : NSObject
{
    unsigned int _originIndex; // +0x8
    id <MMImgDataLogicDelegate> _delegate; // +0x10
    NSArray * _itemArray; // +0x18
}
- (id)itemAtIndex:(unsigned int)arg1;
- (unsigned int)indexForItem:(id)arg1;
- (void)preloadIfNeed:(id)arg1 complete:(id /* block */)arg2;
- (void)updatePreloadData;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)itemArray;
- (void)setItemArray:(id)arg1;
- (unsigned int)originIndex;
- (void)setOriginIndex:(unsigned int)arg1;
- (void).cxx_destruct;
@end

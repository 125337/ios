@interface WAStarMoveInfo : MMObject
{
    unsigned long long _moveType; // +0x8
    WAAppItemData * _moveItem; // +0x10
    WAAppItemData * _toPreItem; // +0x18
    WAAppItemData * _toNextItem; // +0x20
}
- (unsigned long long)moveType;
- (void)setMoveType:(unsigned long long)arg1;
- (id)moveItem;
- (void)setMoveItem:(id)arg1;
- (id)toPreItem;
- (void)setToPreItem:(id)arg1;
- (id)toNextItem;
- (void)setToNextItem:(id)arg1;
- (void).cxx_destruct;
@end


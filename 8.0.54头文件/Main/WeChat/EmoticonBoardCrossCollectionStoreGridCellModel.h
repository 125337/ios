@interface EmoticonBoardCrossCollectionStoreGridCellModel : NSObject
{
    BOOL _darkMode; // +0x8
    unsigned long long _column; // +0x10
    NSArray * _emoticonWrapArray; // +0x18
    NSString * _packageId; // +0x20
    double _totalWidth; // +0x28
    unsigned long long _row; // +0x30
    double _intervalX; // +0x38
    double _intervalY; // +0x40
    double _edgeLeft; // +0x48
    double _edgeTop; // +0x50
    double _totalHeight; // +0x58
    CGSize _itemSize; // +0x60
}
- (id)init;
- (void)genWholeModel;
- (unsigned long long)column;
- (void)setColumn:(unsigned long long)arg1;
- (CGSize)itemSize;
- (void)setItemSize:(CGSize)arg1;
- (id)emoticonWrapArray;
- (void)setEmoticonWrapArray:(id)arg1;
- (BOOL)darkMode;
- (void)setDarkMode:(BOOL)arg1;
- (id)packageId;
- (void)setPackageId:(id)arg1;
- (double)totalWidth;
- (void)setTotalWidth:(double)arg1;
- (unsigned long long)row;
- (void)setRow:(unsigned long long)arg1;
- (double)intervalX;
- (void)setIntervalX:(double)arg1;
- (double)intervalY;
- (void)setIntervalY:(double)arg1;
- (double)edgeLeft;
- (void)setEdgeLeft:(double)arg1;
- (double)edgeTop;
- (void)setEdgeTop:(double)arg1;
- (double)totalHeight;
- (void)setTotalHeight:(double)arg1;
- (void).cxx_destruct;
@end


@interface GCLayoutConfig : NSObject
{
    int _numLine; // +0x8
    double _outTotalHeight; // +0x10
    double _outMaxWidth; // +0x18
    NSArray * _subViewArray; // +0x20
    double _space; // +0x28
    NSArray * _spaceArray; // +0x30
    double _maxRight; // +0x38
    double _lineSpace; // +0x40
    double _verticalFixeRight; // +0x48
    NSNumber * _verticalAlignTop; // +0x50
    double _maxWidth; // +0x58
    double _firstViewLeft; // +0x60
    double _centerY; // +0x68
    unsigned long long _alignStrategy; // +0x70
}
+ (id)layoutConfigWithSubviewArray:(id)arg1 space:(double)arg2 maxRight:(double)arg3 lineSpace:(double)arg4 alignStrategy:(unsigned long long)arg5;
+ (id)layoutConfigWithSubviewArray:(id)arg1 space:(double)arg2 maxRight:(double)arg3;
- (double)outTotalHeight;
- (void)setOutTotalHeight:(double)arg1;
- (double)outMaxWidth;
- (void)setOutMaxWidth:(double)arg1;
- (int)numLine;
- (void)setNumLine:(int)arg1;
- (id)subViewArray;
- (void)setSubViewArray:(id)arg1;
- (double)space;
- (void)setSpace:(double)arg1;
- (id)spaceArray;
- (void)setSpaceArray:(id)arg1;
- (double)maxRight;
- (void)setMaxRight:(double)arg1;
- (double)lineSpace;
- (void)setLineSpace:(double)arg1;
- (double)verticalFixeRight;
- (void)setVerticalFixeRight:(double)arg1;
- (id)verticalAlignTop;
- (void)setVerticalAlignTop:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (double)firstViewLeft;
- (void)setFirstViewLeft:(double)arg1;
- (double)centerY;
- (void)setCenterY:(double)arg1;
- (unsigned long long)alignStrategy;
- (void)setAlignStrategy:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


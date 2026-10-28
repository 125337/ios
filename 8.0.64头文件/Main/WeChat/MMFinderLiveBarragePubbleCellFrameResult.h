@interface MMFinderLiveBarragePubbleCellFrameResult : NSObject
{
    unsigned long long _layoutedStyle; // +0x8
    NSMutableArray * _singleArrStyles; // +0x10
    double _singleFirstLineOriginX; // +0x18
    NSMutableArray * _multiArrStyles; // +0x20
    double _multiFirstLineOriginX; // +0x28
    NSMutableArray * _singleArrStylesInBright; // +0x30
    double _singleFirstLineOriginXInBright; // +0x38
    NSMutableArray * _multiArrStylesInBright; // +0x40
    double _multiFirstLineOriginXInBright; // +0x48
    CGSize _singleCellSize; // +0x50
    CGSize _singleContentSize; // +0x60
    CGSize _multiCellSize; // +0x70
    CGSize _multiContentSize; // +0x80
    CGSize _singleCellSizeInBright; // +0x90
    CGSize _singleContentSizeInBright; // +0xa0
    CGSize _multiCellSizeInBright; // +0xb0
    CGSize _multiContentSizeInBright; // +0xc0
}
- (unsigned long long)layoutedStyle;
- (void)setLayoutedStyle:(unsigned long long)arg1;
- (CGSize)singleCellSize;
- (void)setSingleCellSize:(CGSize)arg1;
- (CGSize)singleContentSize;
- (void)setSingleContentSize:(CGSize)arg1;
- (id)singleArrStyles;
- (void)setSingleArrStyles:(id)arg1;
- (double)singleFirstLineOriginX;
- (void)setSingleFirstLineOriginX:(double)arg1;
- (CGSize)multiCellSize;
- (void)setMultiCellSize:(CGSize)arg1;
- (CGSize)multiContentSize;
- (void)setMultiContentSize:(CGSize)arg1;
- (id)multiArrStyles;
- (void)setMultiArrStyles:(id)arg1;
- (double)multiFirstLineOriginX;
- (void)setMultiFirstLineOriginX:(double)arg1;
- (CGSize)singleCellSizeInBright;
- (void)setSingleCellSizeInBright:(CGSize)arg1;
- (CGSize)singleContentSizeInBright;
- (void)setSingleContentSizeInBright:(CGSize)arg1;
- (id)singleArrStylesInBright;
- (void)setSingleArrStylesInBright:(id)arg1;
- (double)singleFirstLineOriginXInBright;
- (void)setSingleFirstLineOriginXInBright:(double)arg1;
- (CGSize)multiCellSizeInBright;
- (void)setMultiCellSizeInBright:(CGSize)arg1;
- (CGSize)multiContentSizeInBright;
- (void)setMultiContentSizeInBright:(CGSize)arg1;
- (id)multiArrStylesInBright;
- (void)setMultiArrStylesInBright:(id)arg1;
- (double)multiFirstLineOriginXInBright;
- (void)setMultiFirstLineOriginXInBright:(double)arg1;
- (void).cxx_destruct;
@end

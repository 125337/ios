@interface MJStyleEditData : NSObject
{
    BOOL _segmentHasMultiSubtitles; // +0x8
    unsigned long long _type; // +0x10
    NSArray * _stickers; // +0x18
    double _spacing; // +0x20
    CGSize _cellSize; // +0x28
    UIEdgeInsets _sectionInset; // +0x38
}
- (id)initWithType:(unsigned long long)arg1 stickers:(id)arg2 cellSize:(CGSize)arg3 spacing:(double)arg4 sectionInset:(UIEdgeInsets)arg5 segmentHasMultiSubtitles:(BOOL)arg6;
- (unsigned long long)numberOfItems;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)stickers;
- (void)setStickers:(id)arg1;
- (CGSize)cellSize;
- (void)setCellSize:(CGSize)arg1;
- (double)spacing;
- (void)setSpacing:(double)arg1;
- (UIEdgeInsets)sectionInset;
- (void)setSectionInset:(UIEdgeInsets)arg1;
- (BOOL)segmentHasMultiSubtitles;
- (void)setSegmentHasMultiSubtitles:(BOOL)arg1;
- (void).cxx_destruct;
@end


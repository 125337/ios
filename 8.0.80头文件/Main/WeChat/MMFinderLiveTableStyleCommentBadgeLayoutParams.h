@interface MMFinderLiveTableStyleCommentBadgeLayoutParams : NSObject
{
    double _otherWidth; // +0x8
    double _signAreaWidth; // +0x10
    double _signAreaHeight; // +0x18
    double _headerWidth; // +0x20
    double _headerHeight; // +0x28
    double _firstLineBaseWidth; // +0x30
    double _firstLineBaseHeight; // +0x38
    double _firstLineOriginX; // +0x40
    NSArray * _nickArrStyles; // +0x48
    CGSize _nickNameSize; // +0x50
}
- (double)otherWidth;
- (void)setOtherWidth:(double)arg1;
- (double)signAreaWidth;
- (void)setSignAreaWidth:(double)arg1;
- (double)signAreaHeight;
- (void)setSignAreaHeight:(double)arg1;
- (double)headerWidth;
- (void)setHeaderWidth:(double)arg1;
- (double)headerHeight;
- (void)setHeaderHeight:(double)arg1;
- (double)firstLineBaseWidth;
- (void)setFirstLineBaseWidth:(double)arg1;
- (double)firstLineBaseHeight;
- (void)setFirstLineBaseHeight:(double)arg1;
- (double)firstLineOriginX;
- (void)setFirstLineOriginX:(double)arg1;
- (CGSize)nickNameSize;
- (void)setNickNameSize:(CGSize)arg1;
- (id)nickArrStyles;
- (void)setNickArrStyles:(id)arg1;
- (void).cxx_destruct;
@end

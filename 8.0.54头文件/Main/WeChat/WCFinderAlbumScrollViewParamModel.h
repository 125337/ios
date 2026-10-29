@interface WCFinderAlbumScrollViewParamModel : NSObject
{
    BOOL _isMoreThanTimeLimit; // +0x8
    BOOL _firstToEnterEditVideo; // +0x9
    double _zoomScale; // +0x10
    CGSize _contentSize; // +0x18
    CGPoint _contentOffset; // +0x28
    CGPoint _contentOffsetHistory; // +0x38
    CGPoint _sliderContentOffset; // +0x48
    CGRect _frame; // +0x58
    struct _timeRange; // +0x78
}
- (id)init;
- (CGRect)frame;
- (void)setFrame:(CGRect)arg1;
- (CGSize)contentSize;
- (void)setContentSize:(CGSize)arg1;
- (double)zoomScale;
- (void)setZoomScale:(double)arg1;
- (CGPoint)contentOffset;
- (void)setContentOffset:(CGPoint)arg1;
- (CGPoint)contentOffsetHistory;
- (void)setContentOffsetHistory:(CGPoint)arg1;
- (BOOL)isMoreThanTimeLimit;
- (void)setIsMoreThanTimeLimit:(BOOL)arg1;
- (struct)timeRange;
- (void)setTimeRange:(struct)arg1;
- (BOOL)firstToEnterEditVideo;
- (void)setFirstToEnterEditVideo:(BOOL)arg1;
- (CGPoint)sliderContentOffset;
- (void)setSliderContentOffset:(CGPoint)arg1;
@end


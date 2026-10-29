@interface WCAdTwistHugeDiskView : MMUIView <WCCanvasImageLoaderObserver>
{
    int _impactTimingIndex; // +0x8
    WCADCanvasEggAnimationHugeDisk * _hugeDiskInfo; // +0x10
    UIImageView * _flipBackView; // +0x18
    double _paddingBottom; // +0x20
    UIImpactFeedbackGenerator * _impactFeedback; // +0x28
    NSArray * _impactTimings; // +0x30
    CGSize _imageSize; // +0x38
}
- (id)initWithInfo:(id)arg1 flipBackView:(id)arg2 imageSize:(CGSize)arg3 paddingBottom:(double)arg4;
- (void)dealloc;
- (void)generateSubviews;
- (id)generateTwistTransitionSubviewWithImage:(id)arg1 isSpecial:(BOOL)arg2;
- (id)fetchImageForUrl:(id)arg1;
- (void)updateSubviewsWithImage:(id)arg1 forView:(id)arg2;
- (double)fetchImageCornerRadius;
- (id)fetchSpecialView;
- (void)updateFlipBackViewWithImage:(id)arg1;
- (void)startImpactInDuration:(double)arg1;
- (id)generateimpactTimingsInDuration:(double)arg1;
- (void)triggerImpactOnce;
- (void)triggerImpactOnceAtIndex:(int)arg1;
- (id)generateCornerForImage:(id)arg1 cornerRadius:(double)arg2;
- (double)fetchEaseTimingFor:(double)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)hugeDiskInfo;
- (void)setHugeDiskInfo:(id)arg1;
- (id)flipBackView;
- (void)setFlipBackView:(id)arg1;
- (CGSize)imageSize;
- (void)setImageSize:(CGSize)arg1;
- (double)paddingBottom;
- (void)setPaddingBottom:(double)arg1;
- (id)impactFeedback;
- (void)setImpactFeedback:(id)arg1;
- (id)impactTimings;
- (void)setImpactTimings:(id)arg1;
- (int)impactTimingIndex;
- (void)setImpactTimingIndex:(int)arg1;
- (void).cxx_destruct;
@end

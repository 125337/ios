@interface MMStarRatingViewConfiguration : NSObject
{
    BOOL _allowHalfStar; // +0x8
    long long _numberOfStars; // +0x10
    double _starSideLength; // +0x18
    double _starHorizontalMargin; // +0x20
    UIImage * _normalStarImage; // +0x28
    UIImage * _highlightStarImage; // +0x30
    double _animationDuration; // +0x38
}
+ (id)defaultConfiguration;
- (long long)numberOfStars;
- (void)setNumberOfStars:(long long)arg1;
- (double)starSideLength;
- (void)setStarSideLength:(double)arg1;
- (double)starHorizontalMargin;
- (void)setStarHorizontalMargin:(double)arg1;
- (id)normalStarImage;
- (void)setNormalStarImage:(id)arg1;
- (id)highlightStarImage;
- (void)setHighlightStarImage:(id)arg1;
- (double)animationDuration;
- (void)setAnimationDuration:(double)arg1;
- (BOOL)allowHalfStar;
- (void)setAllowHalfStar:(BOOL)arg1;
- (void).cxx_destruct;
@end


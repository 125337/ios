@interface MMLiveScrollNumView : UIView
{
    UIColor * _digitColor; // +0x8
    unsigned long long _numberSize; // +0x10
    double _splitSpaceWidth; // +0x18
    double _topAndBottomPadding; // +0x20
    unsigned long long _numberValue; // +0x28
    UIView * _backgroundView; // +0x30
    UIView * _digitBackgroundView; // +0x38
    UIFont * _digitFont; // +0x40
    NSMutableArray * _numberViews; // +0x48
    unsigned long long _randomLength; // +0x50
}
+ (unsigned long long)digitFromNum:(unsigned long long)arg1 withIndex:(unsigned long long)arg2;
+ (unsigned long long)sizeFromNum:(unsigned long long)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)initScrollNumView;
- (void)setNumber:(unsigned long long)arg1 withDigitFont:(id)arg2 withAnimationType:(int)arg3 animationTime:(double)arg4;
- (unsigned long long)digitIndex:(unsigned long long)arg1;
- (void)didConfigFinish;
- (void)sizeToFit;
- (id)digitColor;
- (void)setDigitColor:(id)arg1;
- (unsigned long long)numberSize;
- (void)setNumberSize:(unsigned long long)arg1;
- (double)splitSpaceWidth;
- (void)setSplitSpaceWidth:(double)arg1;
- (double)topAndBottomPadding;
- (void)setTopAndBottomPadding:(double)arg1;
- (unsigned long long)numberValue;
- (void)setNumberValue:(unsigned long long)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)digitBackgroundView;
- (void)setDigitBackgroundView:(id)arg1;
- (id)digitFont;
- (void)setDigitFont:(id)arg1;
- (id)numberViews;
- (void)setNumberViews:(id)arg1;
- (unsigned long long)randomLength;
- (void)setRandomLength:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


@interface ScrollNumber : UIView
{
    BOOL _isYogaRightAlignment; // +0x8
    BOOL _bIsFontChange; // +0x9
    unsigned int _dotPos; // +0xc
    UIFont * _font; // +0x10
    UIColor * _color; // +0x18
    double _animationTime; // +0x20
    NSMutableArray * _numberArray; // +0x28
    unsigned long long _currentNumber; // +0x30
    UIView * _container; // +0x38
    UIView * _clipView; // +0x40
}
- (id)init;
- (void)layoutSubviews;
- (void)setFont:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)singleNumberSize;
- (CGSize)unitSize;
- (CGSize)dotSize;
- (void)updateContainer;
- (void)updateClipView;
- (void)defaultNumber:(unsigned long long)arg1;
- (void)updateNumber:(unsigned long long)arg1;
- (id)viewFromStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (id)viewFromRStart:(unsigned long long)arg1 end:(unsigned long long)arg2;
- (int)bitOfNumber:(unsigned long long)arg1;
- (id)arrayFromMin:(unsigned long long)arg1;
- (id)mixCurrentArray:(id)arg1 diffArray:(id)arg2;
- (id)mixMinCurrentArray:(id)arg1 diffArray:(id)arg2;
- (id)noChangeArray:(id)arg1;
- (void)updateLastNumberFrame:(id)arg1 numberCount:(unsigned long long)arg2 target:(id)arg3;
- (void)updateTarget:(id)arg1 numberCount:(unsigned long long)arg2;
- (double)widthOfNumber:(unsigned long long)arg1;
- (id)reverseArray:(id)arg1;
- (double)offsetXOfDot:(id)arg1;
- (double)currentOffsetXOfDot:(id)arg1;
- (CGSize)scrollNumberSize;
- (double)widthOfNumbers:(id)arg1;
- (unsigned long long)getNumber;
- (void)recenterClipView;
- (id)font;
- (id)color;
- (void)setColor:(id)arg1;
- (unsigned int)dotPos;
- (void)setDotPos:(unsigned int)arg1;
- (double)animationTime;
- (void)setAnimationTime:(double)arg1;
- (BOOL)isYogaRightAlignment;
- (void)setIsYogaRightAlignment:(BOOL)arg1;
- (id)numberArray;
- (void)setNumberArray:(id)arg1;
- (unsigned long long)currentNumber;
- (void)setCurrentNumber:(unsigned long long)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (id)clipView;
- (void)setClipView:(id)arg1;
- (BOOL)bIsFontChange;
- (void)setBIsFontChange:(BOOL)arg1;
- (void).cxx_destruct;
@end

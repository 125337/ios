@interface WAProfileRatingView : UIControl
{
    UIView * _starBackgroundView; // +0x8
    UIView * _starForegroundView; // +0x10
    BOOL _isHandleTouch; // +0x18
    BOOL _isUpdateProcess; // +0x19
    unsigned int _numberOfStar; // +0x1c
    float _score; // +0x20
    unsigned long long _displayType; // +0x28
    double _elementHeight; // +0x30
    double _elementWidth; // +0x38
    double _elementMargin; // +0x40
    UIImage * _forgroundImage; // +0x48
    UIImage * _backgroundImage; // +0x50
}
- (id)init;
- (id)initWithNumberOfStar:(unsigned int)arg1;
- (void)setForgroundImage:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)sizeToFit;
- (double)widthForCompleteNum:(float)arg1 randomNum:(float)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateScoreWithTouch:(id)arg1 hasNotify:(BOOL)arg2;
- (void)setScore:(float)arg1;
- (void)setScore:(float)arg1 withAnimation:(BOOL)arg2;
- (void)setScore:(float)arg1 withAnimation:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)updateForegroundView;
- (unsigned int)numberOfStar;
- (void)setNumberOfStar:(unsigned int)arg1;
- (float)score;
- (unsigned long long)displayType;
- (void)setDisplayType:(unsigned long long)arg1;
- (double)elementHeight;
- (void)setElementHeight:(double)arg1;
- (double)elementWidth;
- (void)setElementWidth:(double)arg1;
- (double)elementMargin;
- (void)setElementMargin:(double)arg1;
- (BOOL)isHandleTouch;
- (void)setIsHandleTouch:(BOOL)arg1;
- (BOOL)isUpdateProcess;
- (void)setIsUpdateProcess:(BOOL)arg1;
- (id)forgroundImage;
- (id)backgroundImage;
- (void).cxx_destruct;
@end


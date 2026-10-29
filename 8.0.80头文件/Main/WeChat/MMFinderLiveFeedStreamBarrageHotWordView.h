@interface MMFinderLiveFeedStreamBarrageHotWordView : UIView <MMFinderLiveFeedStreamBarrageHotWordViewProtocol>
{
    BOOL _capsulePressed; // +0x8
    BOOL _hasReportedExposed; // +0x9
    NSString * _content; // +0x10
    id /* block */ _onPlusOneTouchDown; // +0x18
    id /* block */ _onPlusOneTouchUp; // +0x20
    id /* block */ _onHotWordExposed; // +0x28
    id /* block */ _shouldPressCapsuleOnTouchDown; // +0x30
    MMFinderLiveFeedStreamBarrageStyleConfig * _styleConfig; // +0x38
    double _maxWidth; // +0x40
    RichTextView * _contentTextView; // +0x48
    UIImageView * _plusOneIconView; // +0x50
    PAGView * _plusOneBtnBgPAGView; // +0x58
    PAGFile * _idleBtnPAGFile; // +0x60
    PAGFile * _pressedBtnPAGFile; // +0x68
}
- (id)initWithContent:(id)arg1 styleConfig:(id)arg2 maxWidth:(double)arg3;
- (void)setupContentTextView;
- (void)setupPlusOneViews;
- (void)setupGesture;
- (void)layoutContent;
- (void)layoutWithCapsuleHeight:(double)arg1 buttonWidth:(double)arg2 buttonHeight:(double)arg3;
- (void)fireExposedIfNeed;
- (void)onPlusOneLongPress:(id)arg1;
- (void)setCapsulePressed:(BOOL)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)currentStrokeTextAttributeObj;
- (id)content;
- (void)setContent:(id)arg1;
- (id /* block */)onPlusOneTouchDown;
- (void)setOnPlusOneTouchDown:(id /* block */)arg1;
- (id /* block */)onPlusOneTouchUp;
- (void)setOnPlusOneTouchUp:(id /* block */)arg1;
- (id /* block */)onHotWordExposed;
- (void)setOnHotWordExposed:(id /* block */)arg1;
- (id /* block */)shouldPressCapsuleOnTouchDown;
- (void)setShouldPressCapsuleOnTouchDown:(id /* block */)arg1;
- (id)styleConfig;
- (void)setStyleConfig:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)contentTextView;
- (void)setContentTextView:(id)arg1;
- (id)plusOneIconView;
- (void)setPlusOneIconView:(id)arg1;
- (id)plusOneBtnBgPAGView;
- (void)setPlusOneBtnBgPAGView:(id)arg1;
- (BOOL)capsulePressed;
- (id)idleBtnPAGFile;
- (void)setIdleBtnPAGFile:(id)arg1;
- (id)pressedBtnPAGFile;
- (void)setPressedBtnPAGFile:(id)arg1;
- (BOOL)hasReportedExposed;
- (void)setHasReportedExposed:(BOOL)arg1;
- (void).cxx_destruct;
@end

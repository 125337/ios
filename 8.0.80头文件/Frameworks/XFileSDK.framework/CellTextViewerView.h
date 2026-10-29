@interface CellTextViewerView :  <UIGestureRecognizerDelegate>
{
    BOOL _arrowPointsUp; // +0x8
    BOOL _isDismissing; // +0x9
    NSString * _text; // +0x10
    id /* block */ _onClose; // +0x18
    UIView * _backdropView; // +0x20
    UIView * _bubbleView; // +0x28
    UITextView * _textView; // +0x30
    CAShapeLayer * _arrowLayer; // +0x38
    CGRect _anchorRect; // +0x40
    CGRect _availableRect; // +0x60
}
- (id)initWithText:(id)arg1 anchorRect:(CGRect)arg2 availableRect:(CGRect)arg3;
- (void)setupSubviews;
- (id)bubbleBackgroundColor;
- (id)bubbleBorderColor;
- (id)textColor;
- (CGSize)measureBubbleSize;
- (CGRect)bubbleFrameForSize:(CGSize)arg1;
- (void)layoutArrowForBubbleFrame:(CGRect)arg1;
- (void)layoutBubble;
- (void)showInView:(id)arg1;
- (void)dismiss;
- (void)traitCollectionDidChange:(id)arg1;
- (void)handleBackdropTap:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)text;
- (void)setText:(id)arg1;
- (id /* block */)onClose;
- (void)setOnClose:(id /* block */)arg1;
- (id)backdropView;
- (void)setBackdropView:(id)arg1;
- (id)bubbleView;
- (void)setBubbleView:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)arrowLayer;
- (void)setArrowLayer:(id)arg1;
- (BOOL)arrowPointsUp;
- (void)setArrowPointsUp:(BOOL)arg1;
- (CGRect)anchorRect;
- (void)setAnchorRect:(CGRect)arg1;
- (CGRect)availableRect;
- (void)setAvailableRect:(CGRect)arg1;
- (BOOL)isDismissing;
- (void)setIsDismissing:(BOOL)arg1;
- (void).cxx_destruct;
@end

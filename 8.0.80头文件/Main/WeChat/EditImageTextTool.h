@interface EditImageTextTool : EditImageWidgetTool <EditImageTextInputDelegate>
{
    CATextLayer * _tlayer; // +0x68
    double _strWidth; // +0x70
    double _maxWidth; // +0x78
    double _strHeight; // +0x80
    NSString * _displayStr; // +0x88
    CGRect _imageFrame; // +0x90
    CGPoint _screenCenter; // +0xb0
    double _zoomScaleWhenInit; // +0xc0
    UIView * _superView; // +0xc8
    CGRect _editViewFrame; // +0xd0
    double _lineWidth; // +0xf0
    UIColor * _lineColor; // +0xf8
    id <EditImageTextToolDelegate> _textDelegate; // +0x100
    EditImageTextView * _textView; // +0x108
    double _textViewSafeAreaWidth; // +0x110
    UIColor * _confirmBtnColor; // +0x118
    WCEditViewControllerUIConfig * _uiConfig; // +0x120
    unsigned long long _textStyle; // +0x128
    CGRect _textInputViewFrame; // +0x130
}
- (id)initWithEditViewFrame:(CGRect)arg1;
- (id)mutableCopy;
- (void)resetToInitStateWithFrame:(CGRect)arg1;
- (void)createTextLayer:(CGRect)arg1 withCenterPoint:(CGPoint)arg2 withSuperView:(id)arg3;
- (void)createTrueTextLayer;
- (void)reloadTextColor;
- (double)originalScaleFactor;
- (double)maxScaleFactor;
- (double)maxFrameScaleWhileSelect;
- (double)widgetWidth;
- (double)widgetHeight;
- (double)widgetViewBorder;
- (void)subclassLargeTouchFrame;
- (void)subclassReloadFrame;
- (BOOL)needHighQuality;
- (void)setScreenCenter:(CGPoint)arg1;
- (id)exportAnimatedLayer;
- (BOOL)startEditingText;
- (void)changeEditText:(id)arg1 withColor:(id)arg2 style:(unsigned long long)arg3 backgroundColor:(id)arg4;
- (void)confirmEditText:(id)arg1 withColor:(id)arg2 style:(unsigned long long)arg3 backgroundColor:(id)arg4;
- (void)cancelEditText:(id)arg1;
- (double)_lineWidth;
- (void)set_lineWidth:(double)arg1;
- (id)_lineColor;
- (void)set_lineColor:(id)arg1;
- (id)_displayStr;
- (void)set_displayStr:(id)arg1;
- (id)textDelegate;
- (void)setTextDelegate:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (double)textViewSafeAreaWidth;
- (void)setTextViewSafeAreaWidth:(double)arg1;
- (id)confirmBtnColor;
- (void)setConfirmBtnColor:(id)arg1;
- (CGRect)textInputViewFrame;
- (void)setTextInputViewFrame:(CGRect)arg1;
- (id)uiConfig;
- (void)setUiConfig:(id)arg1;
- (unsigned long long)textStyle;
- (void)setTextStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

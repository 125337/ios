@interface EditImageTextToolV2 : EditImageWidgetTool
{
    CATextLayer * _tlayer; // +0x68
    double _strWidth; // +0x70
    double _maxWidth; // +0x78
    double _strHeight; // +0x80
    NSString * _displayStr; // +0x88
    CGRect _imageFrame; // +0x90
    CGPoint _screenCenter; // +0xb0
    UIView * _superView; // +0xc0
    CGRect _editViewFrame; // +0xc8
    double _lineWidth; // +0xe8
    UIColor * _lineColor; // +0xf0
    double _zoomScaleWhenInit; // +0xf8
    EditImageTextView * _textView; // +0x100
    double _textViewSafeAreaWidth; // +0x108
    unsigned long long _textStyle; // +0x110
    id <EditImageTextToolV2Delegate> _textDelegate; // +0x118
    UIColor * _backgroundColor; // +0x120
    WCEditViewControllerUIConfig * _uiConfig; // +0x128
}
+ (id)generateWidgetFromState:(id)arg1;
- (id)initWithEditViewFrame:(CGRect)arg1;
- (void)resetToInitStateWithFrame:(CGRect)arg1;
- (id)mutableCopy;
- (void)createTrueTextLayer;
- (void)reloadTextColor;
- (double)originalScaleFactor;
- (double)maxScaleFactor;
- (double)maxFrameScaleWhileSelect;
- (double)widgetWidth;
- (double)widgetHeight;
- (double)widgetViewBorder;
- (void)subclassReloadFrame;
- (BOOL)needHighQuality;
- (id)exportAnimatedLayer;
- (BOOL)startEditingText;
- (void)confirmEditText:(id)arg1 withColor:(id)arg2 style:(unsigned long long)arg3;
- (void)cancelEditText:(id)arg1;
- (id)exportWidgetStateForEditorFrame:(CGRect)arg1 assetPreviewFrame:(CGRect)arg2;
- (double)_lineWidth;
- (void)set_lineWidth:(double)arg1;
- (id)_lineColor;
- (void)set_lineColor:(id)arg1;
- (id)_displayStr;
- (void)set_displayStr:(id)arg1;
- (double)zoomScaleWhenInit;
- (void)setZoomScaleWhenInit:(double)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (double)textViewSafeAreaWidth;
- (void)setTextViewSafeAreaWidth:(double)arg1;
- (unsigned long long)textStyle;
- (void)setTextStyle:(unsigned long long)arg1;
- (id)textDelegate;
- (void)setTextDelegate:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (id)uiConfig;
- (void)setUiConfig:(id)arg1;
- (void).cxx_destruct;
@end


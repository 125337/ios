@interface EditImageAnimatedTextTool : EditImageAnimatedWidgetTool
{
    UILabel * m_layerView; // +0x68
    CALayer * m_textLayer; // +0x70
    BOOL _editable; // +0x78
    NSString * m_text; // +0x80
    UIColor * m_color; // +0x88
    UIColor * _strokerColor; // +0x90
    double _maxWidth; // +0x98
    double _maxFontSize; // +0xa0
    double _minFontSize; // +0xa8
    NSString * _inputHint; // +0xb0
}
+ (id)labelForInputHintLaylerWithFontSize:(double)arg1;
+ (id)labelForCaptionWithFontSize:(double)arg1 borderColor:(id)arg2;
+ (id)defaultFontOfSize:(double)arg1;
+ (id)fontArrayOfSize:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)didChangeText:(id)arg1 color:(id)arg2;
- (id)exportAnimatedLayerWithTimingObject:(id)arg1;
- (id)textLayerWithCustomLayer:(BOOL)arg1 timingObject:(id)arg2;
- (BOOL)startEditingText;
- (double)widgetViewBorder;
- (double)widgetWidth;
- (double)widgetHeight;
- (void)handleTapGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)handlePinchGesture:(id)arg1;
- (void)handleRotateGesture:(id)arg1;
- (id)accessibilityLabel;
- (id)text;
- (id)color;
- (id)strokerColor;
- (void)setStrokerColor:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (double)maxFontSize;
- (void)setMaxFontSize:(double)arg1;
- (double)minFontSize;
- (void)setMinFontSize:(double)arg1;
- (id)inputHint;
- (void)setInputHint:(id)arg1;
- (BOOL)editable;
- (void)setEditable:(BOOL)arg1;
- (void).cxx_destruct;
@end


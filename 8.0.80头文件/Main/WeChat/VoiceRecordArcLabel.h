@interface VoiceRecordArcLabel : UIView
{
    UIColor * _textColor; // +0x8
    double _textWidth; // +0x10
    UIFont * _font; // +0x18
    NSString * _text; // +0x20
    double _centerAngle; // +0x28
    NSMutableArray * _layerArray; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 text:(id)arg2 font:(id)arg3 textColor:(id)arg4 centerAngle:(double)arg5;
- (void)setTextColor:(id)arg1;
- (void)setFont:(id)arg1;
- (void)updateTextColor:(id)arg1 font:(id)arg2;
- (void)updateCenterAngle:(double)arg1;
- (void)displayText;
- (void)drawCurvedString:(id)arg1 angle:(double)arg2 radius:(double)arg3;
- (id)textColor;
- (double)textWidth;
- (void)setTextWidth:(double)arg1;
- (id)font;
- (id)text;
- (void)setText:(id)arg1;
- (double)centerAngle;
- (void)setCenterAngle:(double)arg1;
- (id)layerArray;
- (void)setLayerArray:(id)arg1;
- (void).cxx_destruct;
@end

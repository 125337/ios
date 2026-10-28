@interface ExpandableTextViewConfig : NSObject
{
    BOOL _expandHotArea; // +0x8
    BOOL _lineBreakByClipping; // +0x9
    NSString * _shrinkWording; // +0x10
    NSString * _expandWording; // +0x18
    long long _shrinkLineNum; // +0x20
    UIFont * _font; // +0x28
    UIColor * _textColor; // +0x30
    NSString * _content; // +0x38
}
- (id)init;
- (id)shrinkWording;
- (void)setShrinkWording:(id)arg1;
- (id)expandWording;
- (void)setExpandWording:(id)arg1;
- (long long)shrinkLineNum;
- (void)setShrinkLineNum:(long long)arg1;
- (id)font;
- (void)setFont:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (BOOL)expandHotArea;
- (void)setExpandHotArea:(BOOL)arg1;
- (BOOL)lineBreakByClipping;
- (void)setLineBreakByClipping:(BOOL)arg1;
- (void).cxx_destruct;
@end

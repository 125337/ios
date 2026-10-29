@interface MMFinderLiveTextShowBoxItem : NSObject
{
    BOOL _useJumpStyle; // +0x8
    NSString * _iconURL; // +0x10
    NSString * _text; // +0x18
    UIColor * _textColor; // +0x20
    UIColor * _borderColor; // +0x28
    UIColor * _backgroundColor; // +0x30
}
- (id)iconURL;
- (void)setIconURL:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (id)textColor;
- (void)setTextColor:(id)arg1;
- (id)borderColor;
- (void)setBorderColor:(id)arg1;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)arg1;
- (BOOL)useJumpStyle;
- (void)setUseJumpStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end


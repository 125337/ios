@interface AttributeLabel : UILabel
{
    UIColor * _userColor; // +0x8
}
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2 startIndex:(unsigned long long)arg3;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2 range:(_NSRange)arg3;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2 range:(_NSRange)arg3 highlightFont:(id)arg4;
- (void)setText:(id)arg1 highlightKeyWord:(id)arg2 range:(_NSRange)arg3 highlightFont:(id)arg4 highlightColor:(id)arg5;
- (void)setTextColor:(id)arg1;
- (void)setText:(id)arg1;
- (id)userColor;
- (void)setUserColor:(id)arg1;
- (void).cxx_destruct;
@end


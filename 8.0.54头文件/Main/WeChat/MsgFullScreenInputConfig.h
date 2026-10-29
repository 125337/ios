@interface MsgFullScreenInputConfig : NSObject
{
    BOOL _bEnableTopicSearchInteraction; // +0x8
    long long _textMaxLength; // +0x10
    MMTextView * _textView; // +0x18
    _NSRange _selectedRange; // +0x20
}
- (long long)textMaxLength;
- (void)setTextMaxLength:(long long)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (_NSRange)selectedRange;
- (void)setSelectedRange:(_NSRange)arg1;
- (BOOL)bEnableTopicSearchInteraction;
- (void)setBEnableTopicSearchInteraction:(BOOL)arg1;
- (void).cxx_destruct;
@end


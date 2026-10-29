@interface MsgFullScreenInputConfig : NSObject
{
    BOOL _bEnableTopicSearchInteraction; // +0x8
    BOOL _bEnableDictation; // +0x9
    int _dictationCgiScene; // +0xc
    int _dictationUIParentScene; // +0x10
    long long _textMaxLength; // +0x18
    MMTextView * _textView; // +0x20
    _NSRange _selectedRange; // +0x28
}
- (long long)textMaxLength;
- (void)setTextMaxLength:(long long)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (_NSRange)selectedRange;
- (void)setSelectedRange:(_NSRange)arg1;
- (BOOL)bEnableTopicSearchInteraction;
- (void)setBEnableTopicSearchInteraction:(BOOL)arg1;
- (BOOL)bEnableDictation;
- (void)setBEnableDictation:(BOOL)arg1;
- (int)dictationCgiScene;
- (void)setDictationCgiScene:(int)arg1;
- (int)dictationUIParentScene;
- (void)setDictationUIParentScene:(int)arg1;
- (void).cxx_destruct;
@end

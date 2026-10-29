@interface SlideTextJSHandler : WSTemplateBaseJSHandler
{
    NSString * _fullText; // +0x8
    long long _currentCharLength; // +0x10
    long long _maxCharLength; // +0x18
    id <SlideTextDelegate> _slideTextDelegate; // +0x20
    _NSRange _selectedRange; // +0x28
}
- (unsigned long long)getLocalJSBusinessType;
- (BOOL)onJsApiHandlerForwardDealWithFunc:(id)arg1 params:(id)arg2 callbackID:(id)arg3;
- (id)fullText;
- (void)setFullText:(id)arg1;
- (long long)currentCharLength;
- (void)setCurrentCharLength:(long long)arg1;
- (long long)maxCharLength;
- (void)setMaxCharLength:(long long)arg1;
- (_NSRange)selectedRange;
- (void)setSelectedRange:(_NSRange)arg1;
- (id)slideTextDelegate;
- (void)setSlideTextDelegate:(id)arg1;
- (void).cxx_destruct;
@end


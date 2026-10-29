@interface StreamInputDisplayData : NSObject
{
    BOOL _isEnd; // +0x8
    unsigned long long _inputId; // +0x10
    NSString * _resultText; // +0x18
}
- (id)init;
- (unsigned long long)inputId;
- (void)setInputId:(unsigned long long)arg1;
- (id)resultText;
- (void)setResultText:(id)arg1;
- (BOOL)isEnd;
- (void)setIsEnd:(BOOL)arg1;
- (void).cxx_destruct;
@end

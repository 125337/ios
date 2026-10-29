@interface PersonalHotwordBatchIssue : NSObject
{
    unsigned long long _inputIndex; // +0x8
    PersonalHotwordInput * _input; // +0x10
    NSError * _error; // +0x18
}
- (id)initWithInput:(id)arg1 index:(unsigned long long)arg2 error:(id)arg3;
- (unsigned long long)inputIndex;
- (void)setInputIndex:(unsigned long long)arg1;
- (id)input;
- (void)setInput:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (void).cxx_destruct;
@end

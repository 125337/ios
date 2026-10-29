@interface ChatTextExtractionResult : NSObject
{
    unsigned long long _inputIndex; // +0x8
    NSString * _inputText; // +0x10
    double _durationMS; // +0x18
    NSArray * _candidates; // +0x20
    NSError * _error; // +0x28
}
- (id)init;
- (unsigned long long)inputIndex;
- (void)setInputIndex:(unsigned long long)arg1;
- (id)inputText;
- (void)setInputText:(id)arg1;
- (double)durationMS;
- (void)setDurationMS:(double)arg1;
- (id)candidates;
- (void)setCandidates:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (void).cxx_destruct;
@end

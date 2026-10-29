@interface ScanAIFlowResult : NSObject
{
    unsigned long long _requestId; // +0x8
    long long _triggerType; // +0x10
    NSString * _imagePath; // +0x18
    NSString * _questionText; // +0x20
    ScanAIIntentResult * _intentResult; // +0x28
}
- (unsigned long long)requestId;
- (void)setRequestId:(unsigned long long)arg1;
- (long long)triggerType;
- (void)setTriggerType:(long long)arg1;
- (id)imagePath;
- (void)setImagePath:(id)arg1;
- (id)questionText;
- (void)setQuestionText:(id)arg1;
- (id)intentResult;
- (void)setIntentResult:(id)arg1;
- (void).cxx_destruct;
@end

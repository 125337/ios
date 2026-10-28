@interface CPKeyIncreaseInfo : NSObject
{
    NSString * _cpKey; // +0x8
    unsigned long long _threadId; // +0x10
}
- (id)cpKey;
- (void)setCpKey:(id)arg1;
- (unsigned long long)threadId;
- (void)setThreadId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

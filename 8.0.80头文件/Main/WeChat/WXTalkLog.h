@interface WXTalkLog : NSObject
{
    unsigned int logId; // +0x8
    NSString * logStr; // +0x10
}
- (void)dealloc;
- (id)logStr;
- (void)setLogStr:(id)arg1;
- (unsigned int)logId;
- (void)setLogId:(unsigned int)arg1;
- (void).cxx_destruct;
@end

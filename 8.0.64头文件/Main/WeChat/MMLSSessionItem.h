@interface MMLSSessionItem : NSObject <NSCoding>
{
    unsigned int _msgCount; // +0x8
    unsigned int _msgOldestTime; // +0xc
    unsigned int _msgNewestTime; // +0x10
    NSString * session; // +0x18
    NSString * userName; // +0x20
    unsigned long long fileSize; // +0x28
    long long _msgBeginTime; // +0x30
    long long _msgEndTime; // +0x38
}
+ (BOOL)sessionItemCompareItem:(id)arg1 withItem:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (unsigned int)msgCount;
- (void)setMsgCount:(unsigned int)arg1;
- (long long)msgBeginTime;
- (void)setMsgBeginTime:(long long)arg1;
- (long long)msgEndTime;
- (void)setMsgEndTime:(long long)arg1;
- (unsigned int)msgOldestTime;
- (void)setMsgOldestTime:(unsigned int)arg1;
- (unsigned int)msgNewestTime;
- (void)setMsgNewestTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

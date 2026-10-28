@interface GroupNoticeReporter : NSObject
{
    unsigned int _action; // +0x8
    unsigned int _role; // +0xc
    unsigned int _memberCount; // +0x10
    unsigned int _type; // +0x14
    NSString * _chatName; // +0x18
    NSString * _noticeId; // +0x20
}
+ (id)reporter;
+ (void)reportAction:(unsigned int)arg1;
+ (void)report_22613:(id)arg1;
- (void)setNoticeId:(id)arg1;
- (void)report;
- (unsigned int)action;
- (void)setAction:(unsigned int)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (unsigned int)role;
- (void)setRole:(unsigned int)arg1;
- (unsigned int)memberCount;
- (void)setMemberCount:(unsigned int)arg1;
- (unsigned int)type;
- (void)setType:(unsigned int)arg1;
- (id)noticeId;
- (void).cxx_destruct;
@end

@interface SessionActionItem : MMObject <PBCoding>
{
    BOOL _bNotifyOpen; // +0x8
    unsigned int _uiEnterTime; // +0xc
    unsigned int _uiStayTime; // +0x10
    unsigned int _uiStayWebViewTime; // +0x14
    unsigned int _uiSessionType; // +0x18
    unsigned int _uiMemberCount; // +0x1c
    unsigned int _uiUnreadCount; // +0x20
    NSString * _nsUserName; // +0x28
    NSString * _key; // +0x30
}
+ (void)PBArrayAdd_uiEnterTime;
+ (void)PBArrayAdd_uiStayTime;
+ (void)PBArrayAdd_uiSessionType;
+ (void)PBArrayAdd_uiMemberCount;
+ (void)PBArrayAdd_bNotifyOpen;
+ (void)PBArrayAdd_uiUnreadCount;
+ (void)PBArrayAdd_uiStayWebViewTime;
+ (void)PBArrayAdd_nsUserName;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)key;
- (unsigned int)uiEnterTime;
- (void)setUiEnterTime:(unsigned int)arg1;
- (unsigned int)uiStayTime;
- (void)setUiStayTime:(unsigned int)arg1;
- (unsigned int)uiStayWebViewTime;
- (void)setUiStayWebViewTime:(unsigned int)arg1;
- (unsigned int)uiSessionType;
- (void)setUiSessionType:(unsigned int)arg1;
- (unsigned int)uiMemberCount;
- (void)setUiMemberCount:(unsigned int)arg1;
- (BOOL)bNotifyOpen;
- (void)setBNotifyOpen:(BOOL)arg1;
- (unsigned int)uiUnreadCount;
- (void)setUiUnreadCount:(unsigned int)arg1;
- (id)nsUserName;
- (void)setNsUserName:(id)arg1;
- (void)setKey:(id)arg1;
- (void).cxx_destruct;
@end

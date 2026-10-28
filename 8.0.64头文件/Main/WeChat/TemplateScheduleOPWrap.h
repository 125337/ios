@interface TemplateScheduleOPWrap : NSObject
{
    BOOL _showAll; // +0x8
    unsigned int _remindSubType; // +0xc
    NSString * _username; // +0x10
    long long _mesSvrID; // +0x18
    NSString * _nickname; // +0x20
    NSString * _headimg; // +0x28
    NSString * _content; // +0x30
    NSString * _contentDesc; // +0x38
    NSString * _time; // +0x40
}
- (BOOL)showAll;
- (void)setShowAll:(BOOL)arg1;
- (unsigned int)remindSubType;
- (void)setRemindSubType:(unsigned int)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (long long)mesSvrID;
- (void)setMesSvrID:(long long)arg1;
- (id)nickname;
- (void)setNickname:(id)arg1;
- (id)headimg;
- (void)setHeadimg:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (id)contentDesc;
- (void)setContentDesc:(id)arg1;
- (id)time;
- (void)setTime:(id)arg1;
- (void).cxx_destruct;
@end

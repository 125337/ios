@interface ScheduleOPWrap : NSObject <NSCopying>
{
    BOOL _showAll; // +0x8
    unsigned int _remindSubType; // +0xc
    unsigned int _favID; // +0x10
    unsigned int _favLocalID; // +0x14
    NSString * _username; // +0x18
    long long _mesSvrID; // +0x20
    NSString * _nickname; // +0x28
    NSString * _headimg; // +0x30
    NSString * _content; // +0x38
    NSString * _contentDesc; // +0x40
    NSString * _time; // +0x48
    NSString * _jumpToUrl; // +0x50
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)showAll;
- (void)setShowAll:(BOOL)arg1;
- (unsigned int)remindSubType;
- (void)setRemindSubType:(unsigned int)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (long long)mesSvrID;
- (void)setMesSvrID:(long long)arg1;
- (unsigned int)favID;
- (void)setFavID:(unsigned int)arg1;
- (unsigned int)favLocalID;
- (void)setFavLocalID:(unsigned int)arg1;
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
- (id)jumpToUrl;
- (void)setJumpToUrl:(id)arg1;
- (void).cxx_destruct;
@end

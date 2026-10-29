@interface MMGameLiveLaunchModel : NSObject
{
    int _opensdkVersion; // +0x8
    NSString * _gameAppId; // +0x10
    unsigned long long _ticketExpiredTime; // +0x18
    NSMutableDictionary * _gameLiveExtInfo; // +0x20
    NSString * _ticket; // +0x28
}
- (id)gameAppId;
- (void)setGameAppId:(id)arg1;
- (int)opensdkVersion;
- (void)setOpensdkVersion:(int)arg1;
- (unsigned long long)ticketExpiredTime;
- (void)setTicketExpiredTime:(unsigned long long)arg1;
- (id)gameLiveExtInfo;
- (void)setGameLiveExtInfo:(id)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (void).cxx_destruct;
@end

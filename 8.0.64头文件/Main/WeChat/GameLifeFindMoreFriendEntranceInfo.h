@interface GameLifeFindMoreFriendEntranceInfo : NSObject
{
    BOOL _showIcon; // +0x8
    unsigned int _unReadCount; // +0xc
    unsigned int _lastUpdateMsgTime; // +0x10
    unsigned int _msgType; // +0x14
    NSString * _iconUrl; // +0x18
    NSString * _wording; // +0x20
    NSDictionary * _externInfo; // +0x28
}
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (BOOL)showIcon;
- (void)setShowIcon:(BOOL)arg1;
- (unsigned int)unReadCount;
- (void)setUnReadCount:(unsigned int)arg1;
- (unsigned int)lastUpdateMsgTime;
- (void)setLastUpdateMsgTime:(unsigned int)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (id)externInfo;
- (void)setExternInfo:(id)arg1;
- (void).cxx_destruct;
@end

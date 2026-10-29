@interface WCFinderLiveExposeStruct : NSObject
{
    BOOL _isPrivate; // +0x8
    unsigned int _onlineNum; // +0xc
    NSString * _userName; // +0x10
    unsigned long long _liveID; // +0x18
    NSString * _feedID; // +0x20
    NSString * _sessionID; // +0x28
    unsigned long long _actionTS; // +0x30
    long long _action; // +0x38
    NSString * _commentScene; // +0x40
    unsigned long long _index; // +0x48
    unsigned long long _enterStatus; // +0x50
    NSString * _snsSessionID; // +0x58
    long long _shareType; // +0x60
    NSString * _shareUserName; // +0x68
    NSString * _contextId; // +0x70
    NSString * _clickTabContextId; // +0x78
    NSString * _sessionBuffer; // +0x80
    NSString * _snsFeedId; // +0x88
    unsigned long long _enterSessionId; // +0x90
    long long _enterIconType; // +0x98
    NSString * _clickSubTabContextId; // +0xa0
    NSString * _channelExtra; // +0xa8
    NSMutableDictionary * _switchExtraDic; // +0xb0
}
- (id)toReport;
- (id)userName;
- (void)setUserName:(id)arg1;
- (unsigned long long)liveID;
- (void)setLiveID:(unsigned long long)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)sessionID;
- (void)setSessionID:(id)arg1;
- (unsigned long long)actionTS;
- (void)setActionTS:(unsigned long long)arg1;
- (long long)action;
- (void)setAction:(long long)arg1;
- (id)commentScene;
- (void)setCommentScene:(id)arg1;
- (unsigned long long)index;
- (void)setIndex:(unsigned long long)arg1;
- (unsigned long long)enterStatus;
- (void)setEnterStatus:(unsigned long long)arg1;
- (id)snsSessionID;
- (void)setSnsSessionID:(id)arg1;
- (long long)shareType;
- (void)setShareType:(long long)arg1;
- (id)shareUserName;
- (void)setShareUserName:(id)arg1;
- (id)contextId;
- (void)setContextId:(id)arg1;
- (unsigned int)onlineNum;
- (void)setOnlineNum:(unsigned int)arg1;
- (id)clickTabContextId;
- (void)setClickTabContextId:(id)arg1;
- (BOOL)isPrivate;
- (void)setIsPrivate:(BOOL)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)snsFeedId;
- (void)setSnsFeedId:(id)arg1;
- (unsigned long long)enterSessionId;
- (void)setEnterSessionId:(unsigned long long)arg1;
- (long long)enterIconType;
- (void)setEnterIconType:(long long)arg1;
- (id)clickSubTabContextId;
- (void)setClickSubTabContextId:(id)arg1;
- (id)channelExtra;
- (void)setChannelExtra:(id)arg1;
- (id)switchExtraDic;
- (void)setSwitchExtraDic:(id)arg1;
- (void).cxx_destruct;
@end


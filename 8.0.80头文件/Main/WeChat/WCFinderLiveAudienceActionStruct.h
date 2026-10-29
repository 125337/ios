@interface WCFinderLiveAudienceActionStruct : NSObject
{
    BOOL _isPrivateAccount; // +0x8
    BOOL _liveStatus; // +0x9
    unsigned int _shopPermit; // +0xc
    unsigned long long _liveId; // +0x10
    unsigned long long _liveStartTime; // +0x18
    NSString * _finderFeedId; // +0x20
    NSString * _finderUserName; // +0x28
    NSString * _liveTopic; // +0x30
    NSString * _commentScene; // +0x38
    NSString * _contextId; // +0x40
    NSString * _clickTabContextId; // +0x48
    NSString * _sessionId; // +0x50
    NSString * _sessionBuffer; // +0x58
    unsigned long long _enterSessionId; // +0x60
    unsigned long long _liveTime; // +0x68
    unsigned long long _totalFullTime; // +0x70
    unsigned long long _totalFloatTime; // +0x78
    unsigned long long _actionTS; // +0x80
    unsigned long long _actionType; // +0x88
    NSString * _actionResult; // +0x90
    NSMutableDictionary * _actionResultDictionary; // +0x98
    long long _enterIconType; // +0xa0
    long long _curOrientation; // +0xa8
    NSString * _addata; // +0xb0
    NSString * _scenenote; // +0xb8
    unsigned long long _roleType; // +0xc0
    NSString * _requestId; // +0xc8
    NSString * _scene; // +0xd0
    NSString * _clickSubTabContextId; // +0xd8
    NSString * _channelExtra; // +0xe0
    NSString * _actionStyle; // +0xe8
    NSString * _couponId; // +0xf0
    NSMutableDictionary * _switchExtraDic; // +0xf8
}
- (id)init;
- (id)toReport;
- (unsigned int)isLiveFollow;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)liveStartTime;
- (void)setLiveStartTime:(unsigned long long)arg1;
- (id)finderFeedId;
- (void)setFinderFeedId:(id)arg1;
- (id)finderUserName;
- (void)setFinderUserName:(id)arg1;
- (id)liveTopic;
- (void)setLiveTopic:(id)arg1;
- (id)commentScene;
- (void)setCommentScene:(id)arg1;
- (BOOL)isPrivateAccount;
- (void)setIsPrivateAccount:(BOOL)arg1;
- (id)contextId;
- (void)setContextId:(id)arg1;
- (id)clickTabContextId;
- (void)setClickTabContextId:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (unsigned int)shopPermit;
- (void)setShopPermit:(unsigned int)arg1;
- (unsigned long long)enterSessionId;
- (void)setEnterSessionId:(unsigned long long)arg1;
- (unsigned long long)liveTime;
- (void)setLiveTime:(unsigned long long)arg1;
- (unsigned long long)totalFullTime;
- (void)setTotalFullTime:(unsigned long long)arg1;
- (unsigned long long)totalFloatTime;
- (void)setTotalFloatTime:(unsigned long long)arg1;
- (BOOL)liveStatus;
- (void)setLiveStatus:(BOOL)arg1;
- (unsigned long long)actionTS;
- (void)setActionTS:(unsigned long long)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (id)actionResult;
- (void)setActionResult:(id)arg1;
- (id)actionResultDictionary;
- (void)setActionResultDictionary:(id)arg1;
- (long long)enterIconType;
- (void)setEnterIconType:(long long)arg1;
- (long long)curOrientation;
- (void)setCurOrientation:(long long)arg1;
- (id)addata;
- (void)setAddata:(id)arg1;
- (id)scenenote;
- (void)setScenenote:(id)arg1;
- (unsigned long long)roleType;
- (void)setRoleType:(unsigned long long)arg1;
- (id)requestId;
- (void)setRequestId:(id)arg1;
- (id)scene;
- (void)setScene:(id)arg1;
- (id)clickSubTabContextId;
- (void)setClickSubTabContextId:(id)arg1;
- (id)channelExtra;
- (void)setChannelExtra:(id)arg1;
- (id)actionStyle;
- (void)setActionStyle:(id)arg1;
- (id)couponId;
- (void)setCouponId:(id)arg1;
- (id)switchExtraDic;
- (void)setSwitchExtraDic:(id)arg1;
- (void).cxx_destruct;
@end

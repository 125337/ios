@interface GameCenterNotifyContent : NSObject
{
    BOOL _disabledReport; // +0x8
    int _type; // +0xc
    int _msgReportType; // +0x10
    unsigned int _localId; // +0x14
    GameCenterEntranceInfo * _entranceInfo; // +0x18
    GameCenterMsgBubbleInfo * _bubbleInfo; // +0x20
    GameCenterMsgFloayLayerInfo * _floatLayerInfo; // +0x28
    GameCenterMsgBannerInfo * _bannerInfo; // +0x30
    GameLifeInfo * _gameLifeInfo; // +0x38
    GameMsgExtraData * _gameMsgExtraData; // +0x40
    GameCenterTabInfoNode * _tabInfoNode; // +0x48
    GamePreloadResourceData * _preloadResourceData; // +0x50
    NSString * _svrMsgId; // +0x58
    NSString * _appId; // +0x60
    NSString * _noticeId; // +0x68
    NSString * _originMsg; // +0x70
    NSString * _reportExtData; // +0x78
    NSString * _businessData; // +0x80
}
- (long long)entranceNotifyType;
- (long long)floatLayerType;
- (id)floatLayerUrl;
- (BOOL)isValidContent;
- (id)entranceInfo;
- (void)setEntranceInfo:(id)arg1;
- (id)bubbleInfo;
- (void)setBubbleInfo:(id)arg1;
- (id)floatLayerInfo;
- (void)setFloatLayerInfo:(id)arg1;
- (id)bannerInfo;
- (void)setBannerInfo:(id)arg1;
- (id)gameLifeInfo;
- (void)setGameLifeInfo:(id)arg1;
- (id)gameMsgExtraData;
- (void)setGameMsgExtraData:(id)arg1;
- (id)tabInfoNode;
- (void)setTabInfoNode:(id)arg1;
- (id)preloadResourceData;
- (void)setPreloadResourceData:(id)arg1;
- (int)type;
- (void)setType:(int)arg1;
- (int)msgReportType;
- (void)setMsgReportType:(int)arg1;
- (BOOL)disabledReport;
- (void)setDisabledReport:(BOOL)arg1;
- (unsigned int)localId;
- (void)setLocalId:(unsigned int)arg1;
- (id)svrMsgId;
- (void)setSvrMsgId:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)noticeId;
- (void)setNoticeId:(id)arg1;
- (id)originMsg;
- (void)setOriginMsg:(id)arg1;
- (id)reportExtData;
- (void)setReportExtData:(id)arg1;
- (id)businessData;
- (void)setBusinessData:(id)arg1;
- (void).cxx_destruct;
@end

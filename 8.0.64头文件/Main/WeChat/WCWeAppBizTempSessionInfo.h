@interface WCWeAppBizTempSessionInfo : NSObject
{
    unsigned int _appVersion; // +0x8
    NSString * _weAppID; // +0x10
    NSString * _weAppUserName; // +0x18
    NSString * _businessId; // +0x20
    NSString * _sessionFrom; // +0x28
    NSString * _pageId; // +0x30
    unsigned long long _sceneType; // +0x38
    WASessionContentSendMsgInfo * _sendMsgInfo; // +0x40
    NSData * _extInfo; // +0x48
    unsigned long long _debugModeType; // +0x50
    NSString * _sessionTitle; // +0x58
    NSString * _sessionSubTitle; // +0x60
    NSString * _customHeadImageUrl; // +0x68
}
- (id)initWithWeAppID:(id)arg1 weAppUserName:(id)arg2 businessId:(id)arg3 sessionFrom:(id)arg4 pageId:(id)arg5 sceneType:(unsigned long long)arg6 showMessageCard:(BOOL)arg7 sendMessageImg:(id)arg8 sendMessagePath:(id)arg9 sendMessageTitle:(id)arg10 extInfo:(id)arg11;
- (unsigned long long)fetchFromScene;
- (unsigned long long)fetchPageEnterScene;
- (unsigned long long)fetchPageNewEnterScene;
- (unsigned long long)fetchMsgPageEnterScene;
- (void)updateAppInfoWith:(id)arg1;
- (id)weAppID;
- (void)setWeAppID:(id)arg1;
- (id)weAppUserName;
- (void)setWeAppUserName:(id)arg1;
- (id)businessId;
- (void)setBusinessId:(id)arg1;
- (id)sessionFrom;
- (void)setSessionFrom:(id)arg1;
- (id)pageId;
- (void)setPageId:(id)arg1;
- (unsigned long long)sceneType;
- (void)setSceneType:(unsigned long long)arg1;
- (id)sendMsgInfo;
- (void)setSendMsgInfo:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (unsigned int)appVersion;
- (void)setAppVersion:(unsigned int)arg1;
- (unsigned long long)debugModeType;
- (void)setDebugModeType:(unsigned long long)arg1;
- (id)sessionTitle;
- (void)setSessionTitle:(id)arg1;
- (id)sessionSubTitle;
- (void)setSessionSubTitle:(id)arg1;
- (id)customHeadImageUrl;
- (void)setCustomHeadImageUrl:(id)arg1;
- (void).cxx_destruct;
@end

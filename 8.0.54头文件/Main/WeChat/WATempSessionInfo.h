@interface WATempSessionInfo : MMObject
{
    BOOL _isInWeAppSheetMode; // +0x8
    unsigned int _debugMode; // +0xc
    unsigned int _weappVersion; // +0x10
    NSString * _sessionFrom; // +0x18
    NSString * _appId; // +0x20
    NSString * _username; // +0x28
    NSString * _relativePath; // +0x30
    NSString * _businessUserName; // +0x38
    NSString * _headimgUrl; // +0x40
    NSString * _title; // +0x48
    NSString * _subTitle; // +0x50
    WASessionContentSendMsgInfo * _sendMsgInfo; // +0x58
    unsigned long long _newScene; // +0x60
    NSString * _sceneNote; // +0x68
    NSString * _fromAppId; // +0x70
}
- (id)sessionFrom;
- (void)setSessionFrom:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned int)debugMode;
- (void)setDebugMode:(unsigned int)arg1;
- (unsigned int)weappVersion;
- (void)setWeappVersion:(unsigned int)arg1;
- (id)relativePath;
- (void)setRelativePath:(id)arg1;
- (id)businessUserName;
- (void)setBusinessUserName:(id)arg1;
- (id)headimgUrl;
- (void)setHeadimgUrl:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (BOOL)isInWeAppSheetMode;
- (void)setIsInWeAppSheetMode:(BOOL)arg1;
- (id)sendMsgInfo;
- (void)setSendMsgInfo:(id)arg1;
- (unsigned long long)newScene;
- (void)setNewScene:(unsigned long long)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (id)fromAppId;
- (void)setFromAppId:(id)arg1;
- (void).cxx_destruct;
@end


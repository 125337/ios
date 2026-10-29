@interface WAAppTaskReferrerInfo : NSObject
{
    unsigned int _referrerType; // +0x8
    unsigned int _refererAppServiceType; // +0xc
    unsigned int _originScene; // +0x10
    unsigned int _hostVersion; // +0x14
    unsigned int _pluginSessionID; // +0x18
    NSString * _referrerAppID; // +0x20
    NSString * _agentId; // +0x28
    id _referrerData; // +0x30
    id _privateReferrerData; // +0x38
    NSString * _messageExtraData; // +0x40
    unsigned long long _operateScene; // +0x48
    NSString * _referAction; // +0x50
    NSString * _refererSessionID; // +0x58
    WAContact * _hostContact; // +0x60
    NSString * _hostUserName; // +0x68
    NSString * _gameliveInfo; // +0x70
}
- (id)description;
- (id)referrerAppID;
- (void)setReferrerAppID:(id)arg1;
- (unsigned int)referrerType;
- (void)setReferrerType:(unsigned int)arg1;
- (id)agentId;
- (void)setAgentId:(id)arg1;
- (id)referrerData;
- (void)setReferrerData:(id)arg1;
- (id)privateReferrerData;
- (void)setPrivateReferrerData:(id)arg1;
- (id)messageExtraData;
- (void)setMessageExtraData:(id)arg1;
- (unsigned long long)operateScene;
- (void)setOperateScene:(unsigned long long)arg1;
- (id)referAction;
- (void)setReferAction:(id)arg1;
- (id)refererSessionID;
- (void)setRefererSessionID:(id)arg1;
- (unsigned int)refererAppServiceType;
- (void)setRefererAppServiceType:(unsigned int)arg1;
- (unsigned int)originScene;
- (void)setOriginScene:(unsigned int)arg1;
- (id)hostContact;
- (void)setHostContact:(id)arg1;
- (id)hostUserName;
- (void)setHostUserName:(id)arg1;
- (unsigned int)hostVersion;
- (void)setHostVersion:(unsigned int)arg1;
- (unsigned int)pluginSessionID;
- (void)setPluginSessionID:(unsigned int)arg1;
- (id)gameliveInfo;
- (void)setGameliveInfo:(id)arg1;
- (void).cxx_destruct;
@end


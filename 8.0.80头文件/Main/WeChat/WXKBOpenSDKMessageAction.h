@interface WXKBOpenSDKMessageAction : WXKBMessageAction <IAppDataExt>
{
    BOOL _hasFetchedAppRegisterInfo; // +0x8
    AppCommunicateData * _communicateData; // +0x10
    OpenApiAppMsgGenerator * _messageGenerator; // +0x18
}
- (id)initWithDictionary:(id)arg1;
- (void)privatePerform;
- (id)messageGenerator;
- (long long)openSDKMessageType;
- (BOOL)precheck;
- (id)getAppId;
- (BOOL)needFetchAppRegisterInfo;
- (void)fetchAppRegisterInfo;
- (void)onFetchedAppRegisterInfoTimeOut;
- (void)onFetchedAppRegisterInfo;
- (BOOL)openMessageAtPc:(id)arg1;
- (BOOL)openMessage:(id)arg1;
- (id)generateEmoticonMessage;
- (void)OnAppInfoChanged:(id)arg1;
- (id)communicateData;
- (void)setCommunicateData:(id)arg1;
- (void)setMessageGenerator:(id)arg1;
- (BOOL)hasFetchedAppRegisterInfo;
- (void)setHasFetchedAppRegisterInfo:(BOOL)arg1;
- (void).cxx_destruct;
@end

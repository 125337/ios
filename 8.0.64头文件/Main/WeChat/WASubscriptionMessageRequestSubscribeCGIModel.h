@interface WASubscriptionMessageRequestSubscribeCGIModel : NSObject
{
    unsigned int _popupScene; // +0x8
    WASubscriptionMessagePageSheetViewModel * _viewModel; // +0x10
    NSString * _username; // +0x18
    unsigned long long _scene; // +0x20
    NSString * _appid; // +0x28
    NSString * _sessionId; // +0x30
    NSString * _extInfo; // +0x38
}
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned int)popupScene;
- (void)setPopupScene:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end

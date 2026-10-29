@interface WASubscriptionMessageRequestListByIDCGIModel : NSObject
{
    unsigned int _appType; // +0x8
    unsigned int _popupScene; // +0xc
    unsigned int _source; // +0x10
    NSArray * _templateArray; // +0x18
    NSString * _username; // +0x20
    unsigned long long _scene; // +0x28
    NSString * _appid; // +0x30
    NSString * _sessionId; // +0x38
    NSString * _extInfo; // +0x40
}
- (id)templateArray;
- (void)setTemplateArray:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (unsigned int)appType;
- (void)setAppType:(unsigned int)arg1;
- (unsigned int)popupScene;
- (void)setPopupScene:(unsigned int)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (unsigned int)source;
- (void)setSource:(unsigned int)arg1;
- (void).cxx_destruct;
@end

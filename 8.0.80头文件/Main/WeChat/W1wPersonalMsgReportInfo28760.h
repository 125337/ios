@interface W1wPersonalMsgReportInfo28760 : NSObject
{
    unsigned int _actionType; // +0x8
    unsigned int _category; // +0xc
    long long _scene; // +0x10
    NSString * _sceneNote; // +0x18
    NSString * _sessionId; // +0x20
    NSString * _pageId; // +0x28
    NSString * _boxInfo; // +0x30
    NSString * _docInfo; // +0x38
    NSString * _itemInfo; // +0x40
    NSString * _docExtInfo; // +0x48
    NSString * _boxExtInfo; // +0x50
    NSString * _extInfo; // +0x58
    unsigned long long _actionTimeStamp; // +0x60
    NSString * _liteAppVersion; // +0x68
    NSString * _appId; // +0x70
    NSString * _pageInfo; // +0x78
    unsigned long long * _StayTime; // +0x80
}
- (id)getReportString;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)sceneNote;
- (void)setSceneNote:(id)arg1;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (id)pageId;
- (void)setPageId:(id)arg1;
- (id)boxInfo;
- (void)setBoxInfo:(id)arg1;
- (id)docInfo;
- (void)setDocInfo:(id)arg1;
- (id)itemInfo;
- (void)setItemInfo:(id)arg1;
- (id)docExtInfo;
- (void)setDocExtInfo:(id)arg1;
- (id)boxExtInfo;
- (void)setBoxExtInfo:(id)arg1;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (unsigned long long)actionTimeStamp;
- (void)setActionTimeStamp:(unsigned long long)arg1;
- (id)liteAppVersion;
- (void)setLiteAppVersion:(id)arg1;
- (unsigned int)category;
- (void)setCategory:(unsigned int)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)pageInfo;
- (void)setPageInfo:(id)arg1;
- (unsigned long long *)StayTime;
- (void)setStayTime:(unsigned long long *)arg1;
- (void).cxx_destruct;
@end

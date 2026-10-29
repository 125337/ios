@interface WACgiRequest : NSObject
{
    BOOL _needSpeedyFlag; // +0x8
    BOOL _dispatchSyncToMainThread; // +0x9
    BOOL _needKeepAlive; // +0xa
    BOOL _needCgiProfile; // +0xb
    BOOL _needRouteToServiceWhenWeakNet; // +0xc
    unsigned int _uiCgi; // +0x10
    unsigned int _retryCount; // +0x14
    WXPBGeneratedMessage * _pbRequest; // +0x18
    NSObject * _oUserData; // +0x20
    NSString * _appid; // +0x28
    NSString * _username; // +0x30
    NSString * _respClass; // +0x38
}
+ (id)createWithCgi:(unsigned int)arg1 pbRequest:(id)arg2;
- (id)toProtobufCGIWrap;
- (id)initWithCgi:(unsigned int)arg1 pbRequest:(id)arg2;
- (id)init;
- (id)pbRequest;
- (void)setPbRequest:(id)arg1;
- (unsigned int)uiCgi;
- (void)setUiCgi:(unsigned int)arg1;
- (id)oUserData;
- (void)setOUserData:(id)arg1;
- (unsigned int)retryCount;
- (void)setRetryCount:(unsigned int)arg1;
- (BOOL)needSpeedyFlag;
- (void)setNeedSpeedyFlag:(BOOL)arg1;
- (BOOL)dispatchSyncToMainThread;
- (void)setDispatchSyncToMainThread:(BOOL)arg1;
- (BOOL)needKeepAlive;
- (void)setNeedKeepAlive:(BOOL)arg1;
- (BOOL)needCgiProfile;
- (void)setNeedCgiProfile:(BOOL)arg1;
- (BOOL)needRouteToServiceWhenWeakNet;
- (void)setNeedRouteToServiceWhenWeakNet:(BOOL)arg1;
- (id)appid;
- (void)setAppid:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)respClass;
- (void)setRespClass:(id)arg1;
- (void).cxx_destruct;
@end


@interface WxpayKitReportContext : NSObject <NSCopying>
{
    NSString * _sessionId; // +0x8
    NSString * _nativeSessionId; // +0x10
    unsigned long long _callId; // +0x18
    NSString * _scene; // +0x20
    NSString * _appId; // +0x28
    NSString * _appVer; // +0x30
    NSString * _baselibVer; // +0x38
    NSString * _openTraceId; // +0x40
    NSString * _parentProcessInstanceId; // +0x48
    unsigned long long _parentCallId; // +0x50
    NSString * _sourceRuntime; // +0x58
    NSString * _referrerScope; // +0x60
    long long _referrerPresent; // +0x68
    long long _referrerScene; // +0x70
    NSString * _referrerSceneId; // +0x78
    NSString * _referrerScenePath; // +0x80
}
+ (id)empty;
+ (id)contextWithSessionId:(id)arg1 nativeSessionId:(id)arg2 callId:(unsigned long long)arg3 scene:(id)arg4 appId:(id)arg5 appVer:(id)arg6 baselibVer:(id)arg7;
+ (id)openContextWithTraceId:(id)arg1 parentProcessInstanceId:(id)arg2 parentCallId:(unsigned long long)arg3 sourceRuntime:(id)arg4 referrerScope:(id)arg5 referrerPresent:(long long)arg6 referrerScene:(long long)arg7 referrerSceneId:(id)arg8 referrerScenePath:(id)arg9;
- (id)contextByAdoptingOpenContext:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)sessionId;
- (id)nativeSessionId;
- (unsigned long long)callId;
- (id)scene;
- (id)appId;
- (id)appVer;
- (id)baselibVer;
- (id)openTraceId;
- (id)parentProcessInstanceId;
- (unsigned long long)parentCallId;
- (id)sourceRuntime;
- (id)referrerScope;
- (long long)referrerPresent;
- (long long)referrerScene;
- (id)referrerSceneId;
- (id)referrerScenePath;
- (void).cxx_destruct;
@end

@interface WxpaySceneOpenContext : NSObject <NSCopying>
{
    NSString * _traceId; // +0x8
    NSString * _sourceRuntime; // +0x10
    NSString * _referrerScope; // +0x18
    NSDictionary * _referrer; // +0x20
    unsigned long long _parentCallId; // +0x28
}
+ (id)defaultContext;
+ (id)contextWithTraceId:(id)arg1 sourceRuntime:(id)arg2 referrerScope:(id)arg3 referrer:(id)arg4 parentCallId:(unsigned long long)arg5;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)traceId;
- (id)sourceRuntime;
- (id)referrerScope;
- (id)referrer;
- (unsigned long long)parentCallId;
- (void).cxx_destruct;
@end

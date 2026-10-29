@interface FBSDKBridgeAPIRequest : NSObject <FBSDKCopying>
{
    NSString * _actionID; // +0x8
    NSString * _methodName; // +0x10
    NSString * _methodVersion; // +0x18
    NSDictionary * _parameters; // +0x20
    unsigned long long _protocolType; // +0x28
    NSString * _scheme; // +0x30
    NSDictionary * _userInfo; // +0x38
    id <FBSDKBridgeAPIProtocol> _protocol; // +0x40
}
+ (id)bridgeAPIRequestWithProtocolType:(unsigned long long)arg1 scheme:(id)arg2 methodName:(id)arg3 methodVersion:(id)arg4 parameters:(id)arg5 userInfo:(id)arg6;
+ (id)protocolMap;
+ (id)_protocolForType:(unsigned long long)arg1 scheme:(id)arg2;
- (id)initWithProtocol:(id)arg1 protocolType:(unsigned long long)arg2 scheme:(id)arg3 methodName:(id)arg4 methodVersion:(id)arg5 parameters:(id)arg6 userInfo:(id)arg7;
- (id)requestURL:(id *)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)actionID;
- (id)methodName;
- (id)methodVersion;
- (id)parameters;
- (unsigned long long)protocolType;
- (id)scheme;
- (id)userInfo;
- (id)protocol;
- (void).cxx_destruct;
@end


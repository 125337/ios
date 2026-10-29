@interface FBSDKBridgeAPIProtocolWebV2 : NSObject <FBSDKBridgeAPIProtocol>
{
    FBSDKBridgeAPIProtocolNativeV1 * _nativeProtocol; // +0x8
}
- (id)init;
- (id)_redirectURLWithActionID:(id)arg1 methodName:(id)arg2 error:(id *)arg3;
- (id)_requestURLForDialogConfiguration:(id)arg1 error:(id *)arg2;
- (id)requestURLWithActionID:(id)arg1 scheme:(id)arg2 methodName:(id)arg3 methodVersion:(id)arg4 parameters:(id)arg5 error:(id *)arg6;
- (id)responseParametersForActionID:(id)arg1 queryParameters:(id)arg2 cancelled:(BOOL *)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@end

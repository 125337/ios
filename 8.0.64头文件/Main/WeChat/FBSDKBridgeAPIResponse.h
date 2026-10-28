@interface FBSDKBridgeAPIResponse : NSObject <FBSDKCopying>
{
    BOOL _cancelled; // +0x8
    NSError * _error; // +0x10
    FBSDKBridgeAPIRequest * _request; // +0x18
    NSDictionary * _responseParameters; // +0x20
}
+ (id)bridgeAPIResponseWithRequest:(id)arg1 error:(id)arg2;
+ (id)bridgeAPIResponseWithRequest:(id)arg1 responseURL:(id)arg2 sourceApplication:(id)arg3 error:(id *)arg4;
+ (id)bridgeAPIResponseCancelledWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 responseParameters:(id)arg2 cancelled:(BOOL)arg3 error:(id)arg4;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isCancelled;
- (id)error;
- (id)request;
- (id)responseParameters;
- (void).cxx_destruct;
@end

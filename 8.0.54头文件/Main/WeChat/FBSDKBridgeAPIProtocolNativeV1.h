@interface FBSDKBridgeAPIProtocolNativeV1 : NSObject <FBSDKBridgeAPIProtocol>
{
    BOOL _includeAppIcon; // +0x8
    NSString * _appScheme; // +0x10
    unsigned long long _dataLengthThreshold; // +0x18
    UIPasteboard * _pasteboard; // +0x20
}
+ (void)clearData:(id)arg1 fromPasteboardOnApplicationDidBecomeActive:(id)arg2;
- (id)initWithAppScheme:(id)arg1;
- (id)initWithAppScheme:(id)arg1 pasteboard:(id)arg2 dataLengthThreshold:(unsigned long long)arg3 includeAppIcon:(BOOL)arg4;
- (id)requestURLWithActionID:(id)arg1 scheme:(id)arg2 methodName:(id)arg3 methodVersion:(id)arg4 parameters:(id)arg5 error:(id *)arg6;
- (id)responseParametersForActionID:(id)arg1 queryParameters:(id)arg2 cancelled:(BOOL *)arg3 error:(id *)arg4;
- (id)_appIcon;
- (id)_bridgeParametersWithActionID:(id)arg1 error:(id *)arg2;
- (id)_errorWithDictionary:(id)arg1;
- (id)_JSONStringForObject:(id)arg1 enablePasteboard:(BOOL)arg2 error:(id *)arg3;
- (id)appScheme;
- (unsigned long long)dataLengthThreshold;
- (BOOL)shouldIncludeAppIcon;
- (id)pasteboard;
- (void).cxx_destruct;
@end


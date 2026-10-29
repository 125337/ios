@interface EcsMidasPayUtil : NSObject
+ (BOOL)isEnableMidasPay;
+ (id)genPayReqExtraUrl:(id)arg1;
+ (id)getSDKVersion;
+ (id)registerAppID;
+ (id)registerUniversalLink;
+ (id)genContextId:(id)arg1;
+ (unsigned int)genAutoIncreaceID;
+ (id)genWeChatUniversalLinkWithExtraUrl:(id)arg1 contextId:(id)arg2 paramsDataStr:(id)arg3;
@end

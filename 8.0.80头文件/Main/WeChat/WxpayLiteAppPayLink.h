@interface WxpayLiteAppPayLink : NSObject
+ (id)hostOf:(id)arg1;
+ (BOOL)isWxpappHost:(id)arg1;
+ (BOOL)hasWechatPayFragment:(id)arg1;
+ (BOOL)isPayScanRawUrl:(id)arg1;
+ (BOOL)isPayScanRedirect:(id)arg1 appId:(id)arg2;
+ (BOOL)isPayShortLink:(id)arg1;
+ (id)payShortLinkInDeepLink:(id)arg1;
+ (id)jsonObjectFrom:(id)arg1;
+ (id)stringIn:(id)arg1 key:(id)arg2;
+ (BOOL)boolIn:(id)arg1 key:(id)arg2;
+ (double)doubleIn:(id)arg1 key:(id)arg2;
+ (void)putQueryParametersOf:(id)arg1 into:(id)arg2;
+ (id)jsonString:(id)arg1;
+ (id)targetWithExtra:(id)arg1 query:(id)arg2;
+ (id)deepLinkTargetFromA8KeyFullUrl:(id)arg1 originalUrl:(id)arg2;
+ (id)scanTargetFromA8KeyFullUrl:(id)arg1;
+ (id)launchOptionsForTarget:(id)arg1 referrerScene:(long long)arg2;
@end

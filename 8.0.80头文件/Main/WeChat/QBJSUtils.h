@interface QBJSUtils : NSObject
+ (void)monitorJSFile;
+ (void)postJsUpdate;
+ (void)cookieJsUpdate;
+ (void)monitorErrorJsUpdate;
+ (void)formDataJsUpdate;
+ (void)fetchJsUpdate;
+ (id)WKXhrPseScript;
+ (id)WKCookieFixScript;
+ (id)WKSelectedStringScript;
+ (id)WKJSErrorMonitorScript;
+ (id)WKFDataScript;
+ (id)WKFetchMinScript;
+ (id)WKGetBaseURLScript;
@end

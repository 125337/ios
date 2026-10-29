@interface WCAdDynamicCanvasUtil : NSObject
+ (BOOL)canOpenAdDynamicCanvasPage:(id)arg1;
+ (void)tryToOpenAdDynamicCanvasPage:(id)arg1;
+ (void)tryToOpenAdDynamicCanvasPage:(id)arg1 finderJumpInfo:(id)arg2;
+ (BOOL)tryToJumpFallbackPage:(id)arg1;
+ (id)fetchLocalResourceCache:(id)arg1 url:(id)arg2;
+ (void)registerLiteAppJsApi;
+ (id)appendParamsToUrl:(id)arg1 andUpdateExtraInfo:(id)arg2 withPageInfo:(id)arg3;
+ (BOOL)jumpAdWebView:(id)arg1 pageInfo:(id)arg2 viewController:(id)arg3 jumpAnimationType:(int)arg4;
+ (id)genStatExtString:(id)arg1;
+ (id)fetchShareWebUrl:(id)arg1 pageInfo:(id)arg2;
+ (id)genShareAdXml:(id)arg1 shareWebUrl:(id)arg2;
+ (void)publishPlatformViewEvent:(id)arg1 event:(id)arg2 params:(id)arg3;
+ (id)genPageInfoFromCanvasLoadParams:(id)arg1;
+ (BOOL)isIntendingToLoadDynamicCanvas:(id)arg1;
@end


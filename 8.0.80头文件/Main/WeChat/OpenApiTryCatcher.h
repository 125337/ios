@interface OpenApiTryCatcher : NSObject
+ (void)openURL:(id)arg1 options:(id)arg2 completionHandler:(id /* block */)arg3;
+ (void)safeOpenApiOpenUrl:(id)arg1;
+ (void)safeApplicationOpenUrl:(id)arg1;
+ (void)safeOpenApiOpenUrl:(id)arg1 completion:(id /* block */)arg2;
@end

@interface WCPayMiniProgramSchemeHandler : NSObject
+ (BOOL)handleSchemeUrl:(id)arg1;
+ (id)extraParamsFromQueryItems:(id)arg1;
+ (void)openMiniProgramWithConfig:(id)arg1 extraParams:(id)arg2;
+ (id)pagePathByAppendingExtraParams:(id)arg1 toPagePath:(id)arg2;
@end

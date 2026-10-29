@interface WCFinderJumpInfoBaseModel : NSObject <WCFinderJumpInfoProtocol>
+ (BOOL)liteAppViewControllerIsHalf:(id)arg1;
+ (BOOL)getJumpInfoBindHalfScreenLifeCycle:(int)arg1;
- (BOOL)dispatchStoreInfo:(id)arg1 bindFeedId:(id)arg2 fromVC:(id)arg3 liteAppVC:(id)arg4 params:(id)arg5;
- (void)jumpFromVC:(id)arg1 withInfo:(id)arg2 params:(id)arg3;
- (void)jumpToMiniApp:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
- (void)jumpToMiniStore:(id)arg1 fromVC:(id)arg2 params:(id)arg3 productInfo:(id)arg4 widgetParameters:(id)arg5;
- (id)miniAppAlertReportDict:(id)arg1;
- (void)jumpToH5:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
- (void)jumpToNative:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
- (void)jumpToSchema:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
- (void)jumpToAppStoreWithAppStoreParams:(id)arg1 screenType:(int)arg2 fromVC:(id)arg3;
- (void)jumpToMJTemplateCollectionPage:(id)arg1 fromVC:(id)arg2;
- (void)jumpToCutSameTemplateWithTemplateInfo:(id)arg1 params:(id)arg2 fromVC:(id)arg3;
- (void)jumpToTemplateSearchPage:(id)arg1 fromVC:(id)arg2;
- (void)jumpToLiteApp:(id)arg1 fromVC:(id)arg2 params:(id)arg3;
@end


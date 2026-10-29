@interface WxaLiteAppWidgetDispatchStoreMessage : NSObject
{
    NSString * _appId; // +0x8
    NSString * _actionName; // +0x10
    NSDictionary * _params; // +0x18
}
+ (id)makeWithAppId:(id)arg1 actionName:(id)arg2 params:(id)arg3;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)actionName;
- (void)setActionName:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (void).cxx_destruct;
@end

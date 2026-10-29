@interface EcsOpenContext : NSObject
{
    id <EcsCoreEcsOpenContext_Ur> _urObject; // +0x8
}
+ (id)create:(id)arg1;
+ (id)createByUrObject:(id)arg1;
- (id)initWithUrObject:(id)arg1;
- (id)init;
- (void)setExtraData:(id)arg1;
- (id)extraData;
- (void)addOrReplaceExtraData:(id)arg1;
- (void)wxa_addOrReplaceExtraParamInfo:(id)arg1;
- (void)liteApp_addOrReplaceQuery:(id)arg1;
- (void)liteApp_addOrReplaceExtraData:(id)arg1;
- (void)mbApp_addOrReplaceExtraData:(id)arg1;
- (void)native_addOrReplaceExtraData:(id)arg1;
- (void)addOrReplaceInnerJsonParams:(id)arg1;
- (id)innerJsonParams;
- (void)setNavigationController:(id)arg1;
- (id)navigationController;
- (id)hook;
- (void)updateJsonParamWithKey:(id)arg1 value:(id)arg2;
- (id)getJsonParamByKey:(id)arg1;
- (id)jsonParamMap;
- (id)urObject;
- (id)data;
- (id /* block */)eventAction;
- (void)setEventAction:(id /* block */)arg1;
- (BOOL)callbackAsync;
- (void)setCallbackAsync:(BOOL)arg1;
- (id)iosData;
- (void).cxx_destruct;
@end

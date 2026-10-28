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
- (void)addOrReplaceExtraDataInfo:(id)arg1;
- (void)wxa_addOrReplaceExtraParamInfo:(id)arg1;
- (void)liteApp_addOrReplaceQuery:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (id)navigationController;
- (void)setOpenWeAppExtraContext:(id)arg1;
- (id)openWeAppExtraContext;
- (void)updateJsonParamWithKey:(id)arg1 value:(id)arg2;
- (id)getJsonParamByKey:(id)arg1;
- (id)jsonParamMap;
- (id)data;
- (id /* block */)eventAction;
- (void)setEventAction:(id /* block */)arg1;
- (id)iosData;
- (id)urObject;
- (void).cxx_destruct;
@end

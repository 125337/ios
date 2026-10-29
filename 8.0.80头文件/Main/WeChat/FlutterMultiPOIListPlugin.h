@interface FlutterMultiPOIListPlugin : NSObject <MMFlutterPlugin, MultiPOIListApi>
{
    MMMultiPOIFlutterViewController * _owner; // +0x8
    NSMutableSet * _fastLoadTemplateSet; // +0x10
}
- (id)init;
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)setListAtTopAtTop:(BOOL)arg1 error:(id *)arg2;
- (void)openArticleInfo:(id)arg1 error:(id *)arg2;
- (void)addToGeneralPreloadUrl:(id)arg1 openScene:(long long)arg2 completion:(id /* block */)arg3;
- (void)addToPreloadUrl:(id)arg1 itemShowType:(long long)arg2 openScene:(long long)arg3 brandUserName:(id)arg4 completion:(id /* block */)arg5;
- (id)owner;
- (void)setOwner:(id)arg1;
- (id)fastLoadTemplateSet;
- (void)setFastLoadTemplateSet:(id)arg1;
- (void).cxx_destruct;
@end

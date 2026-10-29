@interface FlutterBizPoiSelectorPlugin : NSObject <MMFlutterPlugin, BizPoiSelectorApi>
{
    id /* block */ _poiSelectFinished; // +0x8
}
- (id)init;
- (void)onAttachedToEngine:(id)arg1;
- (void)notifyBizPoiSelectResultRet:(id)arg1 completion:(id /* block */)arg2;
- (id /* block */)poiSelectFinished;
- (void)setPoiSelectFinished:(id /* block */)arg1;
- (void).cxx_destruct;
@end

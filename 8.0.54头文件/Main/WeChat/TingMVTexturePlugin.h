@interface TingMVTexturePlugin : NSObject <MMFlutterPlugin, TingMVTextureApi>
{
    NSObject<FlutterTextureRegistry> * _registry; // +0x8
    NSMutableDictionary * _textureInfoMap; // +0x10
    TingMVTextureUpdateListenerApi * _listener; // +0x18
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)disposeTaskId:(id)arg1 listendId:(id)arg2 error:(id *)arg3;
- (id)getTextureTaskId:(id)arg1 listendId:(id)arg2 error:(id *)arg3;
- (id)registry;
- (id)textureInfoMap;
- (id)listener;
- (void).cxx_destruct;
@end


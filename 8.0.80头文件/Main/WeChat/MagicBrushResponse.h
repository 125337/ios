@interface MagicBrushResponse : NSObject
{
    NSObject<FlutterBinaryMessenger> * _binaryMessenger; // +0x8
    NSString * _messageChannelSuffix; // +0x10
}
- (id)initWithBinaryMessenger:(id)arg1;
- (id)initWithBinaryMessenger:(id)arg1 messageChannelSuffix:(id)arg2;
- (void)onSubViewCreatedViewGroupId:(id)arg1 viewId:(id)arg2 completion:(id /* block */)arg3;
- (void)onViewStyleChangedViewId:(id)arg1 x:(long long)arg2 y:(long long)arg3 width:(long long)arg4 height:(long long)arg5 completion:(id /* block */)arg6;
- (void)onViewTextureReadyViewId:(id)arg1 textureId:(long long)arg2 completion:(id /* block */)arg3;
- (id)binaryMessenger;
- (void)setBinaryMessenger:(id)arg1;
- (id)messageChannelSuffix;
- (void)setMessageChannelSuffix:(id)arg1;
- (void).cxx_destruct;
@end

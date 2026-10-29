@interface SnsFlutterVisibilityShowFromCombinePluginImpl : NSObject <MMFlutterPlugin, PlatformSnsVisibilityShowFromCombineDelegate>
{
    id <SnsVisibilityShowFromCombineDelegateImplDelegate> _m_delegate; // +0x8
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onChangeVisibilityCallbackSnsVisibilityData:(id)arg1 isConfirm:(BOOL)arg2 error:(id *)arg3;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

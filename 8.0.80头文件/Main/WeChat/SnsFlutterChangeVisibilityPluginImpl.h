@interface SnsFlutterChangeVisibilityPluginImpl : NSObject <MMFlutterPlugin, PlatformSnsChangeVisibilityDelegate>
{
    id <SnsChangeVisibilityDelegateImplDelegate> _m_delegate; // +0x8
}
- (void)onAttachedToEngine:(id)arg1;
- (void)onDetachedFromEngine:(id)arg1;
- (void)onChangeSnsVisibilitySuccCallbackSnsId:(id)arg1 snsVisibilityData:(id)arg2 error:(id *)arg3;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

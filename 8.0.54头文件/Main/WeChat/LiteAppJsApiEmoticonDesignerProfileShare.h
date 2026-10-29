@interface LiteAppJsApiEmoticonDesignerProfileShare : LiteAppJsApi <StoreEmotionPageShareLogicDelegate>
{
    StoreEmotionPageShareLogic * _shareLogic; // +0x20
    PersonalDesigner * _personalDesigner; // +0x28
    NSString * _oldRedirectUrl; // +0x30
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)endWithOK;
- (id)getViewController;
- (void)onShareEnded;
- (id)shareLogic;
- (void)setShareLogic:(id)arg1;
- (id)personalDesigner;
- (void)setPersonalDesigner:(id)arg1;
- (id)oldRedirectUrl;
- (void)setOldRedirectUrl:(id)arg1;
- (void).cxx_destruct;
@end


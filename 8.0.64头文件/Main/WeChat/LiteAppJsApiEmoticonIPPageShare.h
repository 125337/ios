@interface LiteAppJsApiEmoticonIPPageShare : LiteAppJsApi <StoreEmotionPageShareLogicDelegate>
{
    StoreEmotionPageShareLogic * _shareLogic; // +0x20
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 isFromView:(BOOL)arg3;
- (void)endWithOK;
- (id)getViewController;
- (void)onShareEnded;
- (id)shareLogic;
- (void)setShareLogic:(id)arg1;
- (void).cxx_destruct;
@end

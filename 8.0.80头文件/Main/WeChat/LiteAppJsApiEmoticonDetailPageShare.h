@interface LiteAppJsApiEmoticonDetailPageShare : LiteAppJsApi <StoreEmotionPageShareLogicDelegate>
{
    StoreEmotionPageShareLogic * _shareLogic; // +0x20
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)endWithOK;
- (BOOL)hasNecessaryShareInfo:(id)arg1;
- (id)getViewController;
- (void)onShareEnded;
- (id)shareLogic;
- (void)setShareLogic:(id)arg1;
- (void).cxx_destruct;
@end

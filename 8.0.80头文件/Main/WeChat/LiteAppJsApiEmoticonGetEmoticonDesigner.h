@interface LiteAppJsApiEmoticonGetEmoticonDesigner : LiteAppJsApi <IStoreEmotionDesignerInfoMgrExt>
{
    BOOL _isFresh; // +0x20
}
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)onGetDesignerForDesignerId:(id)arg1 AndDesigner:(id)arg2;
- (BOOL)isFresh;
- (void)setIsFresh:(BOOL)arg1;
@end

@interface LiteAppJsApiOpenWeClawChatPage : LiteAppJsApi <IContactMgrExt, IStrangerContactMgrExt>
{
    BOOL _hasResponded; // +0x20
    NSString * _targetUserName; // +0x28
    NSDictionary * _params; // +0x30
}
- (void)dealloc;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (void)onModifyContact:(id)arg1;
- (void)onAddNewStrangerContact:(id)arg1;
- (void)openChatPageWithContact:(id)arg1;
- (id)targetUserName;
- (void)setTargetUserName:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (BOOL)hasResponded;
- (void)setHasResponded:(BOOL)arg1;
- (void).cxx_destruct;
@end

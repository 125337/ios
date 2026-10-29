@interface _TtC6WeChat27MagicFinderBaseEmojiService : MMUserService <MMServiceProtocol, _TtP6WeChat24IMagicFinderEmojiService_>
{
     emojiBiz; // +0x8
     delegate; // +0x10
}
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)createBizWithDelegate:(id)arg1;
- (BOOL)triggerEmojiWithScene:(long long)arg1 id:(id)arg2 handler:(id)arg3;
- (void)destroyBiz;
- (id)init;
- (void).cxx_destruct;
@end


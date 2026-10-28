@interface MessagePatternCacheMgr : NSObject <IMMLanguageMgrExt, IMMFontMgrExt>
{
    NSMutableDictionary * m_dicCache; // +0x8
    NSObject<OS_dispatch_queue> * m_worker; // +0x10
}
- (id)init;
- (void)dealloc;
- (void)ClearAllCache;
- (id)GetMsgPattern:(id)arg1 MsgWrap:(id)arg2;
- (void)SetMsgPattern:(id)arg1 MsgWrap:(id)arg2;
- (void)SaveCache:(id)arg1;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(BOOL)arg3;
- (void)oniOS7FontChange;
- (void)onLanguageChange;
- (void)onFontSizeChange;
- (void)OnMemoryWarning;
- (void).cxx_destruct;
@end

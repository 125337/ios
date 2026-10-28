@interface MMMsgLogicManager : MMUserService <MMServiceProtocol, IMMLanguageMgrExt, IMMFontMgrExt, IContactMgrExt, IMMNewSessionMgrExt>
{
    NSMutableArray * _arrLogicControllers; // +0x8
    BaseMsgContentLogicController * _topLogicController; // +0x10
    BaseMsgContentLogicController * _weixinLogicController; // +0x18
    BaseMsgContentLogicController * _roomLogicController; // +0x20
    BaseMsgContentLogicController * _lastPeekController; // +0x28
}
- (void)setArrLogicControllers:(id)arg1;
- (void)setTopLogicController:(id)arg1;
- (id)arrLogicControllers;
- (id)topLogicController;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)getTopLogicController;
- (void)cleanUp;
- (void)cleanArrLogicControllers;
- (void)cleanUpLogicByName:(id)arg1;
- (void)CheckIfTopViewControllerPoped;
- (void)onLanguageChange;
- (void)onFontSizeChange;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteSession:(unsigned int)arg1;
- (void)onPluginsChanged:(id)arg1;
- (void)onServiceMemoryWarning;
- (Class)GetLogicClassByContact:(id)arg1;
- (void)setMsgLogicToCache:(id)arg1;
- (id)GetLogicControllerFromCacheWithContact:(id)arg1;
- (id)GetReuseableLogicControllerFromCacheWithContact:(Class)arg1;
- (void)PushLogicController:(id)arg1 navigationController:(id)arg2 animated:(BOOL)arg3;
- (void)PushLogicController:(id)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)PushLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 jumpToLocationNode:(id)arg4;
- (void)ShowPageSheetLogicControllerByContact:(id)arg1 pageSheetDelegate:(id)arg2 fromViewController:(id)arg3 animated:(BOOL)arg4;
- (void)ShowPageSheetLogicControllerByContact:(id)arg1 pageSheetDelegate:(id)arg2 toMessage:(id)arg3 fromViewController:(id)arg4 animated:(BOOL)arg5 complete:(id /* block */)arg6;
- (void)ShowPageSheetLogicControllerByContact:(id)arg1 pageSheetDelegate:(id)arg2 toMessage:(id)arg3 fromViewController:(id)arg4 animated:(BOOL)arg5 extraInfo:(id)arg6 complete:(id /* block */)arg7;
- (void)ShowPageSheetLogicController:(id)arg1 pageSheetDelegate:(id)arg2 fromViewController:(id)arg3 animated:(BOOL)arg4 complete:(id /* block */)arg5;
- (void)cleanUnuseLogicController;
- (void)PushLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 jumpToLocationNode:(id)arg4 reuse:(BOOL)arg5 extraInfo:(id)arg6;
- (void)PushLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 jumpToLocationNode:(id)arg4 reuse:(BOOL)arg5 extraInfo:(id)arg6 completion:(id /* block */)arg7;
- (void)makeMsgLogicController:(id)arg1 jumpToMsg:(id)arg2 reuse:(BOOL)arg3 extraInfo:(id)arg4 callback:(id /* block */)arg5;
- (void)OpenMsgWindowByContact:(id)arg1 jumpToLocationNode:(id)arg2 reuse:(BOOL)arg3 extraInfo:(id)arg4 completion:(id /* block */)arg5;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(BOOL)arg3;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 searchScene:(unsigned long long)arg4;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 extraInfo:(id)arg4;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 searchScene:(unsigned long long)arg4 extraInfo:(id)arg5;
- (void)PushOtherBaseMsgControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 searchScene:(unsigned long long)arg4 extraInfo:(id)arg5 completion:(id /* block */)arg6;
- (id)GenOtherBaseMsgControllerByContact:(id)arg1 searchScene:(unsigned long long)arg2 extraInfo:(id)arg3;
- (void)PushSearchLogicControllerByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 animated:(BOOL)arg4 fromeScene:(unsigned long long)arg5 highlighted:(BOOL)arg6;
- (void)PushSearchLogicControllerByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 animated:(BOOL)arg4 fromeScene:(unsigned long long)arg5;
- (void)PushSearchLogicControllerByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 animated:(BOOL)arg4 fromeScene:(unsigned long long)arg5 userData:(id)arg6;
- (void)PushSearchLogicControllerByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 animated:(BOOL)arg4 fromeScene:(unsigned long long)arg5 userData:(id)arg6 highlighted:(BOOL)arg7;
- (void)PushSearchLogicControllerWithToolBarByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 ForKeywordList:(id)arg4 animated:(BOOL)arg5;
- (void)PushSearchLogicControllerWithToolBarByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 ForKeywordList:(id)arg4 highlighted:(BOOL)arg5 animated:(BOOL)arg6;
- (void)PushSearchLogicControllerWithToolBarByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 ForKeywordList:(id)arg4 highlighted:(BOOL)arg5 animated:(BOOL)arg6 extraInfo:(id)arg7;
- (void)PushSearchLogicControllerWithToolBarByContact:(id)arg1 navigationController:(id)arg2 ForMessageWrap:(id)arg3 ForKeywordList:(id)arg4 highlighted:(BOOL)arg5 animated:(BOOL)arg6 extraInfo:(id)arg7 completion:(id /* block */)arg8;
- (void)PushSpecLogicControllerByContact:(id)arg1 navigationController:(id)arg2;
- (void)PushNewLogicController:(id)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 jumpToLocationNode:(id)arg4;
- (void)PushOtherLogicController:(id)arg1 navigationController:(id)arg2 animated:(BOOL)arg3;
- (void)PushOtherLogicController:(id)arg1 fromViewController:(id)arg2 pageSheetDelegate:(id)arg3 jumpMessage:(id)arg4 animated:(BOOL)arg5 complete:(id /* block */)arg6;
- (void)MakeSureKeepOtherLogicController:(id)arg1;
- (void)PresentMultiSelectLogicControllerByContact:(id)arg1 navigationController:(id)arg2 animated:(BOOL)arg3 onComplete:(id /* block */)arg4;
- (void)PopLogicController:(id)arg1;
- (void)PopLogicController:(id)arg1 withReuse:(BOOL)arg2;
- (id)GetCurrentLogicController;
- (id)GetLogicController:(id)arg1;
- (id)logicControllerForPeekingWithContact:(id)arg1 messageWrap:(id)arg2;
- (void)finishedPeekingWithController:(id)arg1;
- (void).cxx_destruct;
@end

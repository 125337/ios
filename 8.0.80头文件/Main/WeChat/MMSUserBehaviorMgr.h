@interface MMSUserBehaviorMgr : MMUserService <MMServiceProtocol>
{
    map<int, long, std::less<int>, std::allocator<std::pair<const int, long>>> mobile_page_report_time; // +0x8
}
- (void)onServiceInit;
- (void)dealloc;
- (void)onServiceClearData;
- (void)didTakeScreenshot:(id)arg1;
- (void)reportMobilePageEvent:(int)arg1 type:(int)arg2;
- (void)didProfileTakeScreenshotVC:(id)arg1;
- (void)didWebTakeScreenshot:(id)arg1 viewController:(id)arg2;
- (void)didChatTakeScreenshot:(id)arg1;
- (void)didPaidOrderDetailTakeScreenshot:(id)arg1;
- (void)reportChatScreenshot:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

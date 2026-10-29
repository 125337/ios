@interface WSOpenWeiXinPageHandler : NSObject <CreateChatLogicDelegate>
{
    CreateChatLogic * _chatLogic; // +0x8
    MMUIViewController * _viewController; // +0x10
}
+ (id)sharedInstance;
- (void)newGroupChat:(id)arg1 completion:(id /* block */)arg2;
- (void)onCreateChatContactReturn:(id)arg1;
- (BOOL)onSelectRecommendGroupContact:(id)arg1;
- (id)chatLogic;
- (void)setChatLogic:(id)arg1;
- (id)viewController;
- (void)setViewController:(id)arg1;
- (void).cxx_destruct;
@end

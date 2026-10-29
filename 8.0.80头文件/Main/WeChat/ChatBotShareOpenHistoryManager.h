@interface ChatBotShareOpenHistoryManager : NSObject
+ (id)sharedManager;
- (void)openHistoryFromMessageWrap:(id)arg1 inViewController:(id)arg2 reportContext:(id)arg3;
- (void)openHistoryFromMessageWrap:(id)arg1 inViewController:(id)arg2 reportContext:(id)arg3 showChatWithXiaowei:(BOOL)arg4;
- (void)openHistoryFromMessageWrap:(id)arg1 inViewController:(id)arg2 reportContext:(id)arg3 showChatWithXiaowei:(BOOL)arg4 completion:(id /* block */)arg5;
@end

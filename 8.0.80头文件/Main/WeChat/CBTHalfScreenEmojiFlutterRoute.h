@interface CBTHalfScreenEmojiFlutterRoute : NSObject
+ (void)initialize;
+ (id)flutterLaunchConfigWithOptions:(id)arg1;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
+ (void)showChatEmojiFromVC:(id)arg1 xml:(id)arg2 chatId:(id)arg3 reuseKey:(id)arg4 isSend:(BOOL)arg5 isGroupChat:(BOOL)arg6 question:(id)arg7 msgTime:(unsigned int)arg8 srcInfoParams:(id)arg9 presentCallback:(id /* block */)arg10 dismissCallback:(id /* block */)arg11;
+ (void)closeEmoji;
@end

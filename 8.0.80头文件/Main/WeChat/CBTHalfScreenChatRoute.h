@interface CBTHalfScreenChatRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (BOOL)isExternalEntryEnabled;
+ (void)showFromVC:(id)arg1 chatId:(id)arg2 chatName:(id)arg3 chatType:(unsigned int)arg4 dismissCallback:(id /* block */)arg5;
+ (id)optionsWithChatId:(id)arg1 chatName:(id)arg2 chatType:(long long)arg3 srcInfoParams:(id)arg4;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
@end

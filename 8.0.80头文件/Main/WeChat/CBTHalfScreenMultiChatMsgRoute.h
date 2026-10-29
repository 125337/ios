@interface CBTHalfScreenMultiChatMsgRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (BOOL)isExternalEntryEnabled;
+ (id)optionsWithChatId:(id)arg1 msgContent:(id)arg2 localId:(unsigned int)arg3 extraParam:(id)arg4 srcInfoParams:(id)arg5;
+ (id)placeholderOptionsWithChatId:(id)arg1 localId:(unsigned int)arg2 extraParam:(id)arg3 srcInfoParams:(id)arg4;
+ (id)completeOptionsWithChatId:(id)arg1 msgContent:(id)arg2 localId:(unsigned int)arg3 extraParam:(id)arg4 srcInfoParams:(id)arg5;
+ (id)failedOptionsWithChatId:(id)arg1 localId:(unsigned int)arg2 extraParam:(id)arg3 srcInfoParams:(id)arg4;
+ (id)p_commonOptionsWithChatId:(id)arg1 extraParam:(id)arg2 srcInfoParams:(id)arg3;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
+ (void)showFromVC:(id)arg1 chatId:(id)arg2 msgContent:(id)arg3 localId:(unsigned int)arg4 extraParam:(id)arg5 dismissCallback:(id /* block */)arg6;
@end

@interface CBTHalfScreenContactAskRoute : NSObject
+ (BOOL)isChatInfoPageAskEntryEnabled;
+ (BOOL)isContactProfileAskEntryEnabled;
+ (unsigned int)commonSugGenderFromContactSex:(unsigned int)arg1;
+ (id)fallbackUpQueryForScene:(unsigned int)arg1 gender:(unsigned int)arg2;
+ (void)fetchCommonSugForScene:(unsigned int)arg1 gender:(unsigned int)arg2 completion:(id /* block */)arg3;
+ (void)showChatInfoPageAskFromVC:(id)arg1 chatId:(id)arg2 chatName:(id)arg3 chatType:(unsigned int)arg4 nickname:(id)arg5 remark:(id)arg6 wxid:(id)arg7 upQuery:(id)arg8 gender:(unsigned int)arg9 dismissCallback:(id /* block */)arg10;
+ (void)showContactProfileAskFromVC:(id)arg1 chatId:(id)arg2 chatName:(id)arg3 chatType:(unsigned int)arg4 nickname:(id)arg5 remark:(id)arg6 wxid:(id)arg7 upQuery:(id)arg8 gender:(unsigned int)arg9 dismissCallback:(id /* block */)arg10;
@end

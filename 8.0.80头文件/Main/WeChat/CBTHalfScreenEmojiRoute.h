@interface CBTHalfScreenEmojiRoute : NSObject
+ (BOOL)isEntryEnabled;
+ (BOOL)isExternalEntryEnabled;
+ (void)showFromVC:(id)arg1 emojiAskMsg:(id)arg2 recomText:(id)arg3 toUsername:(id)arg4 chatId:(id)arg5 customParams:(id)arg6 dismissCallback:(id /* block */)arg7;
+ (id)optionsWithEmojiAskMsg:(id)arg1 recomText:(id)arg2 toUsername:(id)arg3 chatId:(id)arg4 customParams:(id)arg5 srcInfoParams:(id)arg6 didAppearCallback:(id /* block */)arg7;
+ (void)showFromVC:(id)arg1 options:(id)arg2 dismissCallback:(id /* block */)arg3;
+ (void)closeEmoji;
@end

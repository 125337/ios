@interface WCFinderPostMusicStore : NSObject <WCFinderGlobalStore>
+ (long long)errCodeForLimitType:(long long)arg1;
+ (id)functionName;
+ (void)showPicker:(long long)arg1 limiter:(id)arg2 chatParams:(id)arg3 fromVC:(id)arg4 complete:(id /* block */)arg5;
+ (void)showFeedPicker:(id /* block */)arg1 limiter:(id)arg2 fromVC:(id)arg3;
+ (void)showFilePicker:(id /* block */)arg1 limiter:(id)arg2 fromVC:(id)arg3;
+ (void)showChatFilePicker:(id /* block */)arg1 params:(id)arg2 limiter:(id)arg3 fromVC:(id)arg4;
+ (void)showTypePicker:(long long)arg1 onView:(id)arg2 complete:(id /* block */)arg3;
- (id)handle:(id)arg1 storeIns:(id)arg2;
@end


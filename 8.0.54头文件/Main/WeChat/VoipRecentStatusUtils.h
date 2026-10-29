@interface VoipRecentStatusUtils : NSObject
+ (BOOL)isEnable;
+ (BOOL)isVoipAudioCallingUnFolded;
+ (BOOL)isVoipVideoCallingUnFolded;
+ (BOOL)isVoipVideoTalkingEnable;
+ (BOOL)isLegalWithModel:(id)arg1;
+ (id)recentStatusCardViewWithUserName:(id)arg1 model:(id)arg2 didOpenPageButtonCallback:(id /* block */)arg3 isCloseButtonHidden:(BOOL)arg4 didClickCloseButtonCallback:(id /* block */)arg5 isSoundButtonHidden:(BOOL)arg6 didClickSoundButtonCallback:(id /* block */)arg7;
+ (void)log24183WithModel:(id)arg1 actionType:(unsigned long long)arg2;
@end


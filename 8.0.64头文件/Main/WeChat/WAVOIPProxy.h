@interface WAVOIPProxy : NSObject <IWAVOIPService>
+ (BOOL)isVoipWorking;
+ (BOOL)isVoipChattingForAppid:(id)arg1;
+ (BOOL)isVoipChattingMicroPhoneMuteForAppid:(id)arg1;
+ (void)exitVoipChatting;
+ (void)exitVoipChattingByCloseMinimizationWindow;
+ (void)pauseVoipChattingCamera;
+ (void)resumeVoipChattingCamera;
@end

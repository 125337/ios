@interface WXKeyBoardTipsUtil : NSObject
+ (id)tipsItemWithScene:(unsigned int)arg1;
+ (void)onDidSendVoiceTransText:(id)arg1;
+ (void)tryReportKeyboardTipsMsg:(id)arg1;
+ (id)getTipsWithScene:(unsigned int)arg1;
+ (id)getTipsWithScene:(unsigned int)arg1 forReport:(BOOL)arg2;
+ (id)jumpPluginInfoWithScene:(unsigned int)arg1;
+ (BOOL)canShowKeyBoardTips:(unsigned int)arg1;
+ (void)onExposeKeyboardTips:(unsigned int)arg1;
+ (void)onClickKeyboardTips:(unsigned int)arg1;
+ (void)handleJumpPlugin:(id)arg1 scene:(unsigned int)arg2;
@end

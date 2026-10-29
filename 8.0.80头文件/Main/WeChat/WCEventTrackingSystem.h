@interface WCEventTrackingSystem : NSObject <ClickStatSwizzleExt>
+ (void)trackEvent:(id)arg1;
+ (void)trackSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
+ (void)trackUIButton:(id)arg1;
+ (void)trackRichTextView:(id)arg1;
+ (void)trackCell:(id)arg1;
+ (void)trackSwitch:(id)arg1 action:(SEL)arg2 to:(id)arg3 from:(id)arg4;
+ (BOOL)isPrivacy:(id)arg1;
+ (id)getCellLog:(id)arg1;
+ (BOOL)openTrackingSystem;
+ (id)currentConfig;
+ (void)onSendEvent:(id)arg1;
+ (void)onSendAction:(SEL)arg1 to:(id)arg2 from:(id)arg3 forEvent:(id)arg4;
@end

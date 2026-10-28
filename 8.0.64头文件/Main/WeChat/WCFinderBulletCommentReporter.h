@interface WCFinderBulletCommentReporter : NSObject
+ (void)enabledEventWithEnabled:(BOOL)arg1 isLandscape:(BOOL)arg2 commentScene:(int)arg3 contentVM:(id)arg4;
+ (void)popUpMenuWithEvent:(id)arg1 isLandscape:(BOOL)arg2 action:(unsigned long long)arg3 bulletItem:(id)arg4 commentScene:(int)arg5 contentVM:(id)arg6;
+ (id)_generalParametersWithContentVM:(id)arg1 isLandscape:(BOOL)arg2;
+ (id)_actionOptionsStringWithAction:(unsigned long long)arg1;
+ (double)_playPercentForContentVM:(id)arg1;
@end

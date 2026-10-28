@interface WCFinderSeeLaterHelper : NSObject
+ (void)didDelete:(id)arg1 commentScene:(int)arg2;
+ (void)confirmToDeleteSeeLaterFeed:(id)arg1 view:(id)arg2 commentScene:(int)arg3;
+ (void)reportSeeLaterDeleteConfirmElementWithEventType:(long long)arg1 feedID:(id)arg2 commentScene:(int)arg3;
+ (void)reportSeeLaterCardEventType:(long long)arg1 contentVM:(id)arg2 commentScene:(int)arg3 showWord:(id)arg4;
+ (void)reportAllSeeLaterHeaderEventType:(long long)arg1 commentScene:(int)arg2;
@end

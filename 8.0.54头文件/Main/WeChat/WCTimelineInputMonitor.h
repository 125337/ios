@interface WCTimelineInputMonitor : NSObject
+ (BOOL)input:(id)arg1 didChange:(id)arg2 withMarkedLength:(long long)arg3;
+ (void)input:(id)arg1 didCommit:(id)arg2 withPastedText:(id)arg3;
+ (long long)getMarkedLengthFromTextView:(id)arg1;
@end


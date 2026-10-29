@interface BoxEnterUnreadStatusInfo : NSObject
{
    long long _timelineUnreadMsgCount; // +0x8
}
+ (id)makeWithTimelineUnreadMsgCount:(long long)arg1;
+ (id)fromList:(id)arg1;
+ (id)nullableFromList:(id)arg1;
- (id)toList;
- (long long)timelineUnreadMsgCount;
- (void)setTimelineUnreadMsgCount:(long long)arg1;
@end

@interface WCStoryReportUtil : NSObject
{
    unsigned long long _storyEntranceExposeTimeStamp; // +0x8
}
- (void)genStoryEntranceExposeTime;
- (id)reportEntranceExposeWithHeadImageArray:(id)arg1 unreadCount:(unsigned long long)arg2 unreadRelatedCommentCount:(unsigned long long)arg3;
- (unsigned long long)storyEntranceExposeTimeStamp;
- (void)setStoryEntranceExposeTimeStamp:(unsigned long long)arg1;
@end


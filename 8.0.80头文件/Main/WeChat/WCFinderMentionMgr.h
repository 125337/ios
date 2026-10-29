@interface WCFinderMentionMgr : NSObject
{
    NSMutableSet * _followingContactSet; // +0x8
}
- (BOOL)contactFollowingWithMention:(id)arg1;
- (void)startToFollowMentionContact:(id)arg1;
- (void)endMentionContactFollow:(id)arg1;
- (id)followingContactSet;
- (void)setFollowingContactSet:(id)arg1;
- (void).cxx_destruct;
@end

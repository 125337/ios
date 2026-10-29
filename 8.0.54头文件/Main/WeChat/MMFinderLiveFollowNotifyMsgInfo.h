@interface MMFinderLiveFollowNotifyMsgInfo : NSObject
{
    NSOrderedSet * _followContactSet; // +0x8
}
+ (id)createNotifyMsgInfoWithFollowContactOrderSet:(id)arg1;
- (id)description;
- (id)followContactSet;
- (void)setFollowContactSet:(id)arg1;
- (void).cxx_destruct;
@end


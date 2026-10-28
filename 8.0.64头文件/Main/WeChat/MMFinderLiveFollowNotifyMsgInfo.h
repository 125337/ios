@interface MMFinderLiveFollowNotifyMsgInfo : NSObject
{
    FinderLiveFollowContact * _followContact; // +0x8
    NSString * _followNotifyWording; // +0x10
}
+ (id)createNotifyMsgInfoWithFollowContact:(id)arg1 followInfo:(id)arg2;
- (id)description;
- (id)followContact;
- (void)setFollowContact:(id)arg1;
- (id)followNotifyWording;
- (void)setFollowNotifyWording:(id)arg1;
- (void).cxx_destruct;
@end

@interface MMFinderLiveRealNameFriendLikeNotificationMsg : NSObject
{
    NSArray * _likeList; // +0x8
    NSString * _content; // +0x10
}
+ (id)notificationMsgWithSvrMsg:(id)arg1;
- (id)likeList;
- (void)setLikeList:(id)arg1;
- (id)content;
- (void)setContent:(id)arg1;
- (void).cxx_destruct;
@end


@interface MMFinderLiveAnchorRealNameLikeNotificationMsg : NSObject
{
    NSArray * _likeList; // +0x8
    unsigned long long _realnameLikeCount; // +0x10
}
+ (id)notificationMsgWithSvrInfo:(id)arg1;
- (id)displayLikeList;
- (id)likeList;
- (void)setLikeList:(id)arg1;
- (unsigned long long)realnameLikeCount;
- (void)setRealnameLikeCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

@interface WCStoryMessageUnit : NSObject
{
    unsigned int _lastCommentTime; // +0x8
    NSString * _username; // +0x10
    NSMutableArray * _dataItems; // +0x18
    NSString * _lastCommentTid; // +0x20
    NSString * _lastCommentId; // +0x28
    long long _unreadCommentCount; // +0x30
}
- (id)username;
- (void)setUsername:(id)arg1;
- (id)dataItems;
- (void)setDataItems:(id)arg1;
- (unsigned int)lastCommentTime;
- (void)setLastCommentTime:(unsigned int)arg1;
- (id)lastCommentTid;
- (void)setLastCommentTid:(id)arg1;
- (id)lastCommentId;
- (void)setLastCommentId:(id)arg1;
- (long long)unreadCommentCount;
- (void)setUnreadCommentCount:(long long)arg1;
- (void).cxx_destruct;
@end


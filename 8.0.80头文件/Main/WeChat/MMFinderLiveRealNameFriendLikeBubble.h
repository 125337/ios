@interface MMFinderLiveRealNameFriendLikeBubble : NSObject
{
    unsigned long long _disappearMsAfterLike; // +0x8
    unsigned long long _disappearMsWithoutAction; // +0x10
    unsigned long long _sendReason; // +0x18
}
+ (id)bubbleWithSvrInfo:(id)arg1;
- (unsigned long long)disappearMsAfterLike;
- (void)setDisappearMsAfterLike:(unsigned long long)arg1;
- (unsigned long long)disappearMsWithoutAction;
- (void)setDisappearMsWithoutAction:(unsigned long long)arg1;
- (unsigned long long)sendReason;
- (void)setSendReason:(unsigned long long)arg1;
@end

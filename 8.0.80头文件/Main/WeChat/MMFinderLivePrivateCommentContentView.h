@interface MMFinderLivePrivateCommentContentView : MMFinderLiveCommentContentView
{
    BOOL _hasDisplayPrivateCommentTipMsg; // +0x8
    BOOL _hasDisplayInLiveFriendCntTipMsg; // +0x9
}
- (BOOL)hasDisplayPrivateCommentTipMsg;
- (void)setHasDisplayPrivateCommentTipMsg:(BOOL)arg1;
- (BOOL)hasDisplayInLiveFriendCntTipMsg;
- (void)setHasDisplayInLiveFriendCntTipMsg:(BOOL)arg1;
@end

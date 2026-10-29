@interface WCFinderLiveCommentButton : WCLiveBottomTextButton
{
    BOOL _isSynchronizeLayout; // +0x8
    UILabel * _commentBadgeLabel; // +0x10
    id /* block */ _onCommentPrivateMsgAreaTapCallback; // +0x18
    unsigned long long _unReadAtMeMsgCount; // +0x20
    unsigned long long _unReadFriendReplyMeMsgCount; // +0x28
    unsigned long long _unReadFriendMsgCount; // +0x30
    long long _currentBadgeNum; // +0x38
}
- (void)layoutUI;
- (void)layoutBackView;
- (void)layoutCommentBadgeLabel;
- (void)udpateCommentBadgeLabelOrigin;
- (void)clearUnReadCount;
- (void)handleUnReadCountChanged;
- (id)getBadgeStr:(long long)arg1;
- (void)udpateCommentBadgeLabelHidden;
- (id)getBlurButtonBackView;
- (id)commentBlurBackView;
- (void)updateCommentBadgeNum:(long long)arg1;
- (void)displayPrivateMsgEntrance;
- (void)hidePrivateMsgEntrance;
- (void)displayPrivateMsgEnranceSwitch:(double)arg1;
- (void)addUnReadAtMeMsg:(unsigned long long)arg1 unReadFriendReplyMeMsg:(unsigned long long)arg2 friendMsgCount:(unsigned long long)arg3;
- (void)forceLayoutIfNeed;
- (void)handleCommentPrivateMsgAreaTap:(id)arg1;
- (id)commentBadgeLabel;
- (void)setCommentBadgeLabel:(id)arg1;
- (id /* block */)onCommentPrivateMsgAreaTapCallback;
- (void)setOnCommentPrivateMsgAreaTapCallback:(id /* block */)arg1;
- (unsigned long long)unReadAtMeMsgCount;
- (void)setUnReadAtMeMsgCount:(unsigned long long)arg1;
- (unsigned long long)unReadFriendReplyMeMsgCount;
- (void)setUnReadFriendReplyMeMsgCount:(unsigned long long)arg1;
- (unsigned long long)unReadFriendMsgCount;
- (void)setUnReadFriendMsgCount:(unsigned long long)arg1;
- (long long)currentBadgeNum;
- (void)setCurrentBadgeNum:(long long)arg1;
- (BOOL)isSynchronizeLayout;
- (void)setIsSynchronizeLayout:(BOOL)arg1;
- (void).cxx_destruct;
@end


@interface WCFinderTLUnreadModel : NSObject <WCFinderRedDotNotifyExt>
{
    BOOL _hiddenAllBubble; // +0x8
    BOOL _showPrivateMSGTips; // +0x9
    double _topBlankHeight; // +0x10
    long long _unReadMSGCount; // +0x18
}
- (id)init;
- (void)setUnReadMSGCount:(long long)arg1;
- (void)setShowPrivateMSGTips:(BOOL)arg1;
- (void)setTopBlankHeight:(double)arg1;
- (void)setHiddenAllBubble:(BOOL)arg1;
- (id)getCurMsgBubbleShowStateInfo;
- (id)getCurCommentFailTidArray;
- (void)onFinderNotifyWechatUnreadMentionCountNeedReload;
- (void)onFinderNotifyPrivateMsgTipsChange;
- (double)topBlankHeight;
- (BOOL)hiddenAllBubble;
- (long long)unReadMSGCount;
- (BOOL)showPrivateMSGTips;
@end

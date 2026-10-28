@interface WCFinderMsgBubbleMgrPanelView : UIView <WCFinderTimelineUnreadNewMsgBubbleViewProtocol, WCFinderTimelinePrivateMsgBubbleViewDelegate, WCFinderPostingCommentFailBubbleViewDelegate>
{
    id <WCFinderMsgBubbleMgrPanelViewDelegate> _delegate; // +0x8
    NSMutableArray * _bubbleViewArray; // +0x10
    WCFinderMsgBubbleShowStateInfo * _bubbleShowStateInfo; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 bubbleShowStateInfo:(id)arg2;
- (void)updateBubbleMgePanelViewWithBubbleShowStateInfo:(id)arg1;
- (id)getMaxWidthBubbleView;
- (void)updateAllBubbleViewLayout;
- (id)createUnreadNewMsgBubbleViewWithUnreadMsdgCount:(unsigned long long)arg1;
- (id)createPrivateMsgBubbleView;
- (id)createPostingCommentFailBubbleViewWithCommentFailiInfo:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onClickNotificationMsgBtn;
- (void)onClickFinderPrivateMsgNotify;
- (void)finderPostingCommentFailTableViewCellDidClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)bubbleViewArray;
- (void)setBubbleViewArray:(id)arg1;
- (id)bubbleShowStateInfo;
- (void)setBubbleShowStateInfo:(id)arg1;
- (void).cxx_destruct;
@end

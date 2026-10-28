@interface MsgRecordBaseNodeView : FavRecordBaseNodeView <MessageNodeViewDelegate>
{
    BaseMessageCellView * _cellView; // +0x50
}
+ (BOOL)useMsgStyle:(int)arg1;
- (void)addContentSubView;
- (void)onClickAsRefer;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (id)accessibilityCustomActions;
- (id)getViewController;
- (BOOL)isMsgCanRevoke:(id)arg1;
- (void)tapImage_NodeView:(id)arg1 needEditImage:(BOOL)arg2;
- (void)tapLocation_NodeView:(id)arg1;
- (void)tapFriendCard_NodeView:(id)arg1 WithContact:(id)arg2 WithMsg:(id)arg3;
- (void)PlayVideo:(id)arg1 soundable:(BOOL)arg2;
- (void)tapAppNodeView:(id)arg1;
- (BOOL)tryHandleMenu:(long long)arg1 withViewModel:(id)arg2;
- (id)cellView;
- (void)setCellView:(id)arg1;
- (void).cxx_destruct;
@end

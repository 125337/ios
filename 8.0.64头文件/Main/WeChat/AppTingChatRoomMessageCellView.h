@interface AppTingChatRoomMessageCellView : CommonMessageCellView
{
    TingSharedChatRoomView * _chatRoomContentView; // +0xb0
    long long _closedState; // +0xb8
}
- (void)prepareForReuse;
- (void)layoutContentView;
- (void)onThumbImageCompleted:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)chatRoomContentView;
- (id)categoryItem;
- (id)listenItem;
- (id)operationMenuItems;
- (void)onForward:(id)arg1;
- (BOOL)canShowFavoriteMenuItem;
- (void)onFavorite:(id)arg1;
- (void)onAppear;
- (void)tryUpdateChatroomInfo;
- (void)onTouchUpInside;
- (void)onClickAsRefer;
- (void)setChatRoomContentView:(id)arg1;
- (long long)closedState;
- (void)setClosedState:(long long)arg1;
- (void).cxx_destruct;
@end

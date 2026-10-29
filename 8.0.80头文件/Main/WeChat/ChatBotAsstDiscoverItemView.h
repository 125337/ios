@interface ChatBotAsstDiscoverItemView : UIView <ChatBotRoomHeadComponentViewDelegate>
{
    id <ChatBotAsstDiscoverItemDelegate> _delegate; // +0x8
    ChatBotVoIPRoomInfo * _roomInfo; // +0x10
    ChatBotRoomHeadComponentView * _headComponentView; // +0x18
    ChatBotBubbleView * _tipsView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 RoomInfo:(id)arg2;
- (void)layoutContentViews;
- (void)layoutSubviews;
- (void)layoutHeadComponentView;
- (void)layoutTipsView;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onHeadComponentViewClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)roomInfo;
- (void)setRoomInfo:(id)arg1;
- (id)headComponentView;
- (void)setHeadComponentView:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (void).cxx_destruct;
@end

@interface ChatBotAsstDiscoverViewController : MMUIViewController <ChatBotAsstDiscoverItemDelegate>
{
    unsigned int _curPage; // +0x70
    id <ChatBotAsstDiscoverViewDelegate> _delegate; // +0x78
    UIImageView * _backgroundView; // +0x80
    MMUIButton * _backBtn; // +0x88
    MMUIButton * _updateDataBtn; // +0x90
    NSMutableArray * _roomInfoList; // +0x98
    NSMutableArray * _headComponentList; // +0xa0
    ChatBotAsstDiscoverItemView * _activeDiscoverItem; // +0xa8
    MMUIButton * _joinRoomBtn; // +0xb0
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)interruptAISpeaking;
- (void)updateData;
- (void)layoutUpdateDataBtn;
- (void)onUpdateDataBtnClick;
- (void)relayoutRooms;
- (void)viewDidLayoutSubviews;
- (void)initNavigationItems;
- (void)layoutBackground;
- (void)onBackgroundView;
- (void)showSocialHistory;
- (void)layoutBackBtn;
- (void)layoutRooms;
- (void)layoutJoinRoomBtn;
- (void)onJoinRoomBtnClick;
- (void)exitPage;
- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (BOOL)shouldInteractivePop;
- (BOOL)shouldNavigationBarAccessibilityHidden;
- (void)disableItemView:(id)arg1 disable:(BOOL)arg2;
- (void)updateActiveDiscoverItemView:(id)arg1;
- (void)onDiscoverItemClick:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)backBtn;
- (void)setBackBtn:(id)arg1;
- (id)updateDataBtn;
- (void)setUpdateDataBtn:(id)arg1;
- (id)roomInfoList;
- (void)setRoomInfoList:(id)arg1;
- (id)headComponentList;
- (void)setHeadComponentList:(id)arg1;
- (id)activeDiscoverItem;
- (void)setActiveDiscoverItem:(id)arg1;
- (id)joinRoomBtn;
- (void)setJoinRoomBtn:(id)arg1;
- (unsigned int)curPage;
- (void)setCurPage:(unsigned int)arg1;
- (void).cxx_destruct;
@end

@interface GCMultiMessageViewModel : NSObject <GCMultiMessageViewModelProtocol, GCMessageViewModeUnreadCntProtocol>
{
    BOOL _hasBtmTip; // +0x8
    GCMultiMessageViewModelConfig * _viewModelConfig; // +0x10
    unsigned long long _currentIndex; // +0x18
    GCMultiChannelContainerView * _multiChannelView; // +0x20
    NSMutableArray * _msgViewModelArray; // +0x28
    unsigned long long _unreadCnt; // +0x30
    GCTipLabel * _unreadCntView; // +0x38
    GCTipLabel * _bottomTip; // +0x40
}
- (long long)currentChannelId;
- (void)exitViewModel;
- (void)handleReceiveNewMsg:(id)arg1;
- (void)handleChatRoomMsg:(id)arg1;
- (void)onInputViewAdjustMessageView:(BOOL)arg1 topYOfInputView:(double)arg2;
- (void)reconfigChatCellForUserName:(id)arg1 relayout:(BOOL)arg2;
- (void)reloadCellModelInNextLoop:(id)arg1;
- (void)setDisableChildViewEvent:(BOOL)arg1;
- (void)updatCellModel:(id)arg1 withResponse:(id)arg2;
- (void)updateCellModel:(id)arg1 messageSendStatus:(unsigned long long)arg2;
- (void)updateNoticeBarView:(id)arg1;
- (void)updateUserDataCell:(id)arg1;
- (void)jumpToChannelId:(long long)arg1 seq:(unsigned long long)arg2;
- (id)bindViewModelConfig;
- (void)loadCachedMsgDataIfNeed;
- (void)loadFirstPageIfNeed;
- (void)onUserDataDictUpdate:(id)arg1;
- (void)showBtmTipWithText:(id)arg1 handleBlock:(id /* block */)arg2;
- (id)viewModelOfChannelId:(long long)arg1;
- (void)selectChannelId:(long long)arg1;
- (void)removeBtmTip;
- (void)updateMoreMessageReceived:(unsigned long long)arg1;
- (void)clearUnreadCnt;
- (id)createUnReadCountLabel;
- (id)createUnReadCountStr;
- (void)updateUnreadCntImage;
- (void)updateUnReadCntText;
- (void)udpateUnreadCntViewShow;
- (void)onUnreadCntViewTaped;
- (id)initWithMultiMessageViewModelConfig:(id)arg1;
- (unsigned long long)indexOfChannelId:(long long)arg1;
- (void)bindMessageView:(id)arg1;
- (id)currentMessageViewModel;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (id)viewModelConfig;
- (void)setViewModelConfig:(id)arg1;
- (unsigned long long)currentIndex;
- (void)setCurrentIndex:(unsigned long long)arg1;
- (id)multiChannelView;
- (void)setMultiChannelView:(id)arg1;
- (id)msgViewModelArray;
- (void)setMsgViewModelArray:(id)arg1;
- (unsigned long long)unreadCnt;
- (void)setUnreadCnt:(unsigned long long)arg1;
- (id)unreadCntView;
- (void)setUnreadCntView:(id)arg1;
- (id)bottomTip;
- (void)setBottomTip:(id)arg1;
- (BOOL)hasBtmTip;
- (void)setHasBtmTip:(BOOL)arg1;
- (void).cxx_destruct;
@end

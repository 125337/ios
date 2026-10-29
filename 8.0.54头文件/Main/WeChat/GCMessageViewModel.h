@interface GCMessageViewModel : NSObject <GCMessageViewModelProtocol, GCLoadMoreProtocol, GCClvManagerProtocol>
{
    BOOL _isSelected; // +0x8
    BOOL _isReused; // +0x9
    BOOL _hasLoadFirstPage; // +0xa
    BOOL _hasLoadCachedMsg; // +0xb
    BOOL _isAtStatus; // +0xc
    BOOL _hasReceiveFirstPage; // +0xd
    BOOL _isFirstPageLayouted; // +0xe
    BOOL _isWaitAtFirstPageLayout; // +0xf
    BOOL _isChosenChannel; // +0x10
    BOOL _isAllChannel; // +0x11
    long long _channelId; // +0x18
    GCMessageViewModelConfig * _viewModelConfig; // +0x20
    GCMessageView * _messageView; // +0x28
    id <GCMessageViewModelDelegate> _viewModelDelgate; // +0x30
    GCCollectionViewManager * _messageCollectionViewManager; // +0x38
    GCLoadingMoreCellModel * _atLoadMore; // +0x40
    GameChatRoomDataSource * _atDataSource; // +0x48
    GameChatRoomDataSource * _normalDataSource; // +0x50
    GCTipLabel * _atTipView; // +0x58
    NSMutableDictionary * _cellModelDict; // +0x60
    NoticeMsg * _curShowNotice; // +0x68
    NSMutableDictionary * _noticeDict; // +0x70
    NSMutableArray * _noticeMsgList; // +0x78
    GCMessageRequestServer * _normalRequestServer; // +0x80
    GCMessageRequestServer * _atServer; // +0x88
    double _notificationBarBtm; // +0x90
    NSMutableDictionary * _lockLoadMoreDict; // +0x98
}
- (void)reportWithUiArea:(unsigned long long)arg1 positionId:(unsigned long long)arg2 op:(unsigned long long)arg3;
- (void)checkShowNextNotice;
- (void)updateAtTipTopOffset;
- (void)atTipTaped;
- (void)jumpToTargetSeq:(unsigned long long)arg1;
- (BOOL)switchAndScrollToTargetSeq:(unsigned long long)arg1;
- (BOOL)changeToAtStatusWithMsgArray:(id)arg1 noticeSeq:(unsigned long long)arg2;
- (void)scrollToTargetNoticeSeq:(unsigned long long)arg1;
- (void)playHighlightAnimationForCellModel:(id)arg1;
- (void)checkShowNotice:(id)arg1 showNextNotice:(BOOL)arg2 addtionSeq:(unsigned long long)arg3;
- (void)removeNoticeForSeq:(unsigned long long)arg1;
- (void)clearCurShowNotice;
- (void)checkShowNotice:(id)arg1;
- (id)noticeLog:(id)arg1;
- (void)hightLightVisibleNoticeCellWithForceClearSeq:(unsigned long long)arg1;
- (long long)currentChannelId;
- (void)exitViewModel;
- (void)handleReceiveNewMsg:(id)arg1;
- (void)handleNotice:(id)arg1;
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
- (void)perfromLoadFirstPage:(id)arg1;
- (void)handleRefreshList:(id)arg1 andInvisibleList:(id)arg2;
- (void)saveMsgIfNeed;
- (id)initWithViewModelConfig:(id)arg1;
- (id)description;
- (void)invalidAllModelCacheLayout;
- (void)configureViewModelConfig:(id)arg1;
- (BOOL)hasLockLoadMoreReason;
- (void)markLoadMoreLockForReason:(id)arg1;
- (void)removeLoadMoreLockForReason:(id)arg1;
- (void)logLoadMoreLockForReason:(id)arg1 isAdd:(BOOL)arg2;
- (void)refreshWithCellModelArray:(id)arg1 andInvisibleList:(id)arg2;
- (id)getNewDataSource;
- (void)logStr:(id)arg1;
- (void)logWithFormat:(id)arg1;
- (void)bindMessageView:(id)arg1;
- (void)onLoadMorePreviousMessage;
- (void)switchToAtStatus:(BOOL)arg1;
- (void)switchToAtStatus:(BOOL)arg1 force:(BOOL)arg2;
- (id)currentDataSource;
- (id)otherDataSource;
- (id)currentServer;
- (id)chatCellModelForIndexPath:(id)arg1;
- (void)onLoadMoreData;
- (void)onLastItemVisible:(id)arg1;
- (BOOL)supportUnReadCnt;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)clearUnreadCntIfSupport;
- (void)updateMoreMessageReceived:(unsigned long long)arg1;
- (void)scrollToBottomWithAnimation;
- (void)scrollToBottom:(BOOL)arg1;
- (id)lastTickleMeHandleSeqKey;
- (void)filterRelatedTickleMsg:(id)arg1 shouldImmediately:(BOOL)arg2;
- (void)notifySomeoneTickleAtMeBy:(id)arg1;
- (id)cellModelArrayFromChatRoomMessageArray:(id)arg1 isFromCache:(BOOL)arg2;
- (id)cellModelFromChatroomMessage:(id)arg1 isFromCache:(BOOL)arg2;
- (void)addReportInfo:(id)arg1;
- (BOOL)ownCurChatBaseCellModel:(id)arg1;
- (void)recordNewChatBaseCellModel:(id)arg1;
- (void)contactDidUpdate:(id)arg1;
- (void)commonConfigData:(id)arg1 uiArea:(unsigned long long)arg2 positionId:(unsigned long long)arg3 op:(unsigned long long)arg4;
- (id)noticeMsgWithSeq:(unsigned long long)arg1;
- (id)chatRoomServer;
- (long long)channelId;
- (void)setChannelId:(long long)arg1;
- (id)viewModelConfig;
- (void)setViewModelConfig:(id)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (BOOL)isReused;
- (void)setIsReused:(BOOL)arg1;
- (BOOL)hasLoadFirstPage;
- (void)setHasLoadFirstPage:(BOOL)arg1;
- (BOOL)hasLoadCachedMsg;
- (void)setHasLoadCachedMsg:(BOOL)arg1;
- (id)messageView;
- (void)setMessageView:(id)arg1;
- (id)viewModelDelgate;
- (void)setViewModelDelgate:(id)arg1;
- (id)messageCollectionViewManager;
- (void)setMessageCollectionViewManager:(id)arg1;
- (BOOL)isAtStatus;
- (void)setIsAtStatus:(BOOL)arg1;
- (id)atLoadMore;
- (void)setAtLoadMore:(id)arg1;
- (id)atDataSource;
- (void)setAtDataSource:(id)arg1;
- (id)normalDataSource;
- (void)setNormalDataSource:(id)arg1;
- (id)atTipView;
- (void)setAtTipView:(id)arg1;
- (id)cellModelDict;
- (void)setCellModelDict:(id)arg1;
- (id)curShowNotice;
- (void)setCurShowNotice:(id)arg1;
- (id)noticeDict;
- (void)setNoticeDict:(id)arg1;
- (id)noticeMsgList;
- (void)setNoticeMsgList:(id)arg1;
- (BOOL)hasReceiveFirstPage;
- (void)setHasReceiveFirstPage:(BOOL)arg1;
- (BOOL)isFirstPageLayouted;
- (void)setIsFirstPageLayouted:(BOOL)arg1;
- (BOOL)isWaitAtFirstPageLayout;
- (void)setIsWaitAtFirstPageLayout:(BOOL)arg1;
- (id)normalRequestServer;
- (void)setNormalRequestServer:(id)arg1;
- (id)atServer;
- (void)setAtServer:(id)arg1;
- (double)notificationBarBtm;
- (void)setNotificationBarBtm:(double)arg1;
- (BOOL)isChosenChannel;
- (void)setIsChosenChannel:(BOOL)arg1;
- (BOOL)isAllChannel;
- (void)setIsAllChannel:(BOOL)arg1;
- (id)lockLoadMoreDict;
- (void)setLockLoadMoreDict:(id)arg1;
- (void).cxx_destruct;
@end


@interface GameChatNoticeAndMessageView : UIView <GameLifeConversationCellDataSourceDelegate>
{
    BOOL _onlyPersonMessage; // +0x8
    unsigned int _sourceScene; // +0xc
    NSDictionary * _extReportInfoDic; // +0x10
    GCCollectionViewManager * _messageManager; // +0x18
    GameCenterMessageRedPointInfo * _redPointInfo; // +0x20
    GameChatMessageCellModel * _interActModel; // +0x28
    GameChatMessageCellModel * _noticeModel; // +0x30
    GameLifeConversationCellDataSource * _cellDataSource; // +0x38
    NSArray * _chatModelArray; // +0x40
    UILabel * _allLabel; // +0x48
    UILabel * _emptyLabel; // +0x50
}
+ (double)dynamicMessageViewHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubViews;
- (void)setNoticeAndInteractMoelReport:(id)arg1 withPostion:(unsigned int)arg2;
- (void)loadAllUnreadAndMinCntContact;
- (void)onAllLabelTaped;
- (void)updateChatMessageModel;
- (id)getReportVc;
- (void)reportFixItem12909:(id)arg1 withPositionId:(unsigned int)arg2 iActionId:(long long)arg3;
- (id)getGameChatMessageModelArray;
- (BOOL)updateInteractNoticeRedPoint:(BOOL)arg1;
- (void)updateNoticeInterActModelUpdateTime:(id)arg1;
- (void)reportCellModel:(id)arg1 actionId:(int)arg2;
- (void)reportConversationUIExposure;
- (void)onGameLifeConversationLoadResultChanged:(unsigned long long)arg1 hasMore:(BOOL)arg2;
- (void)onGameLifeConversationLoadResultError;
- (void)onGameLifeConversationLoadMoreResultChanged:(BOOL)arg1;
- (void)onGameLifeConversationLoadMoreResultError;
- (void)onGameCenterMessageRedPointInfoChange:(id)arg1;
- (void)onConversationUpdated;
- (void)dealloc;
- (void)unregisterExtension;
- (unsigned int)sourceScene;
- (void)setSourceScene:(unsigned int)arg1;
- (id)extReportInfoDic;
- (void)setExtReportInfoDic:(id)arg1;
- (BOOL)onlyPersonMessage;
- (void)setOnlyPersonMessage:(BOOL)arg1;
- (id)messageManager;
- (void)setMessageManager:(id)arg1;
- (id)redPointInfo;
- (void)setRedPointInfo:(id)arg1;
- (id)interActModel;
- (void)setInterActModel:(id)arg1;
- (id)noticeModel;
- (void)setNoticeModel:(id)arg1;
- (id)cellDataSource;
- (void)setCellDataSource:(id)arg1;
- (id)chatModelArray;
- (void)setChatModelArray:(id)arg1;
- (id)allLabel;
- (void)setAllLabel:(id)arg1;
- (id)emptyLabel;
- (void)setEmptyLabel:(id)arg1;
- (void).cxx_destruct;
@end

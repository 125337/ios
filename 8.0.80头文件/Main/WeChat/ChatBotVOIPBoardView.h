@interface ChatBotVOIPBoardView : UIView <UITableViewDelegate, UITableViewDataSource, IChatBotVoipMsgExt, IChatBotVoIPSessionDelegate, ChatBotStreamTextDelegate, IChatBotExt>
{
    BOOL _isShowBoard; // +0x8
    BOOL _isAnimating; // +0x9
    BOOL _canProcessWeApp; // +0xa
    unsigned int _roomType; // +0xc
    int _openScene; // +0x10
    ChatBotVoIPReportData * _reportData; // +0x18
    ChatBotVoIPReportDataPB * _baseReportDataPB; // +0x20
    id <ChatBotVOIPBoardViewDelegate> _delegate; // +0x28
    ChatBotVoIPRoomInfo * _roomInfo; // +0x30
    UIVisualEffectView * _boardView; // +0x38
    UIView * _shadowView; // +0x40
    ChatBotVOIPBoardViewQuestionView * _questionView; // +0x48
    QuestionInfo * _questionInfo; // +0x50
    ChatBotVOIPBoardViewWeAppProcessView * _weAppProcessView; // +0x58
    ChatBotVOIPBoardViewStreamTextCell * _curStreamTextCell; // +0x60
    UITableView * _tableView; // +0x68
    NSMutableArray * _messageArray; // +0x70
    NSMutableArray * _cellHeightArr; // +0x78
    UIView * _sendButton; // +0x80
    UIViewPropertyAnimator * _animator; // +0x88
    NSMutableSet * _completedProcessWeAppSessionIdSet; // +0x90
    UIView * _videoView; // +0x98
    UIView * _weAppContainerView; // +0xa0
    CGRect _circlrFrame; // +0xa8
}
- (id)initWithFrame:(CGRect)arg1 roomInfo:(id)arg2 openScene:(int)arg3;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)getDisplayMsgList;
- (void)initView;
- (void)layoutBoardView;
- (void)layoutTableView;
- (void)layoutSendButton;
- (void)layoutQuestionView;
- (void)layoutWeAppProcessView;
- (void)removeWeAppProcessViewAndRecord;
- (BOOL)isNeedHideSendToMe:(id)arg1;
- (void)onTapFlipCamera;
- (void)onTapSendToMe;
- (void)layoutWeAppContainerView;
- (void)showQuestionViewStart;
- (void)showQuestionViewNext;
- (void)showQuestionViewEnd;
- (void)stopProcessWeApp:(BOOL)arg1;
- (void)setCanProcessWeApp;
- (void)startCircleAnimation;
- (void)stopCircleAnimation;
- (void)runScaleAnimation;
- (void)showBoardAnimation:(BOOL)arg1;
- (void)clearMessageTable;
- (void)hideBoardAnimation;
- (void)layoutVideoView;
- (void)removeVideoView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)onStreamTextHeightChange:(double)arg1;
- (void)onRecvMsgInfo:(id)arg1;
- (void)onRecvStreamText:(id)arg1 textSeq:(int)arg2 textOutputSource:(int)arg3 identifier:(id)arg4 traceMsgid:(id)arg5 appTraceId:(id)arg6;
- (void)onRecvWeAppProccessMsg:(id)arg1;
- (void)onRecvQuestionInfo:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)onChatBotVoipNotifyToMinimize;
- (void)onChatBotVoipNotifyToStopWeAppProcess:(BOOL)arg1;
- (void)onUserSendMsgToChatBot:(id)arg1 needLaunchVoIP:(BOOL)arg2;
- (void)onTTSBegin:(id)arg1;
- (void)onChatBotLocationGet:(CLLocationCoordinate2D)arg1 posTitle:(id)arg2 isSuccess:(BOOL)arg3 needAuth:(BOOL)arg4 callId:(id)arg5 context:(id)arg6 voipSessionID:(id)arg7;
- (id)reportData;
- (void)setReportData:(id)arg1;
- (id)baseReportDataPB;
- (void)setBaseReportDataPB:(id)arg1;
- (unsigned int)roomType;
- (void)setRoomType:(unsigned int)arg1;
- (id)delegate;
- (BOOL)isShowBoard;
- (void)setIsShowBoard:(BOOL)arg1;
- (id)roomInfo;
- (void)setRoomInfo:(id)arg1;
- (id)boardView;
- (void)setBoardView:(id)arg1;
- (id)shadowView;
- (void)setShadowView:(id)arg1;
- (id)questionView;
- (void)setQuestionView:(id)arg1;
- (id)questionInfo;
- (void)setQuestionInfo:(id)arg1;
- (id)weAppProcessView;
- (void)setWeAppProcessView:(id)arg1;
- (id)curStreamTextCell;
- (void)setCurStreamTextCell:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)messageArray;
- (void)setMessageArray:(id)arg1;
- (id)cellHeightArr;
- (void)setCellHeightArr:(id)arg1;
- (CGRect)circlrFrame;
- (void)setCirclrFrame:(CGRect)arg1;
- (id)sendButton;
- (void)setSendButton:(id)arg1;
- (BOOL)isAnimating;
- (void)setIsAnimating:(BOOL)arg1;
- (id)animator;
- (void)setAnimator:(id)arg1;
- (BOOL)canProcessWeApp;
- (void)setCanProcessWeApp:(BOOL)arg1;
- (id)completedProcessWeAppSessionIdSet;
- (void)setCompletedProcessWeAppSessionIdSet:(id)arg1;
- (id)videoView;
- (void)setVideoView:(id)arg1;
- (id)weAppContainerView;
- (void)setWeAppContainerView:(id)arg1;
- (int)openScene;
- (void)setOpenScene:(int)arg1;
- (void).cxx_destruct;
@end

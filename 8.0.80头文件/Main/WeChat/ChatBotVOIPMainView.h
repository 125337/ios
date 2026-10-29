@interface ChatBotVOIPMainView : UIView <ChatBotDiscoverDelegate, MMTransparentButtonDelegate, PBMessageObserverDelegate, MultiTalkMgrExt, AVAudioPlayerDelegate, ChatBotVOIPBoardViewDelegate, IChatBotVoipMsgExt, IChatBotVoIPSessionDelegate>
{
    BOOL _isSpeakerReady; // +0x8
    BOOL _bShowVideo; // +0x9
    BOOL _isChatBotMicOpen; // +0xa
    BOOL _isRequestReleaseMicrophone; // +0xb
    unsigned int _animationState; // +0xc
    unsigned int _curQuestionId; // +0x10
    ChatBotVoIPRoomInfo * _roomInfo; // +0x18
    MMUIButton * _chatBotHangUpBtn; // +0x20
    UIView * _chatBotVoiceInputBtn; // +0x28
    UIImageView * _chatBotVoiceInputBtnIcon; // +0x30
    UIView * _chatBotVoiceInputBtnCover; // +0x38
    UIVisualEffectView * _chatBotVoiceInputBtnBlurView; // +0x40
    UIView * _chatBotVideoBtn; // +0x48
    UIImageView * _chatBotVideoBtnIcon; // +0x50
    UIView * _chatBotVideoBtnCover; // +0x58
    UIVisualEffectView * _chatBotVideoBtnBlurView; // +0x60
    UILabel * _chatBotStatusLabel; // +0x68
    ChatBotDiscoverView * _chatBotDiscoverView; // +0x70
    MMUIButton * _enlargeContentBtn; // +0x78
    MMUIButton * _discoverMoreChatBotBtn; // +0x80
    UILabel * _m_remoteNameLabel; // +0x88
    MMHeadImageView * _m_remoteHeadImageView; // +0x90
    UILabel * _separatorLabel; // +0x98
    UILabel * _roomMemberCountLabel; // +0xa0
    MMTransparentButton * _chatBotVoiceInputCircleBtn; // +0xa8
    VoipDescriptionButton * _preQuestionBtn; // +0xb0
    VoipDescriptionButton * _nextQuestionBtn; // +0xb8
    double _scaleFactor; // +0xc0
    MMUIButton * _m_minimizeButton; // +0xc8
    id <ChatBotVOIPMainViewelegate> _m_delegate; // +0xd0
    UIImageView * _m_backgroundView; // +0xd8
    MMTimerLabel * _m_timer; // +0xe0
    unsigned long long _lastVoiceInputBtnPressTime; // +0xe8
    NSString * _curMsgId; // +0xf0
    ChatBotVOIPBoardView * _boardView; // +0xf8
    NSArray * _transferBoardMsgList; // +0x100
    ChatBotMultiHeadImageRowView * _multiHeadImageRowView; // +0x108
    NSMutableArray * _multiChatBotList; // +0x110
    AVAudioPlayer * _player; // +0x118
}
- (id)initWithFrame:(CGRect)arg1 contact:(id)arg2 delegate:(id)arg3 minimizeButton:(id)arg4;
- (id)initWithFrame:(CGRect)arg1 roomInfo:(id)arg2 delegate:(id)arg3 minimizeButton:(id)arg4;
- (void)handleRightEdgePan:(id)arg1;
- (BOOL)isOnSpeaker;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (id)getRoomInfo;
- (id)getTalkingChatBotID;
- (void)updateCurMsgId;
- (BOOL)isMultiTalk;
- (BOOL)isNewsRoom;
- (unsigned int)getRoomMemberCount;
- (void)setIsSpeakerReady:(BOOL)arg1;
- (void)initView;
- (void)layoutBackground;
- (void)layoutHeadView;
- (void)layoutMultiChatBotHeadView;
- (void)layoutBoardView;
- (void)layoutRoomMemberCountLabel;
- (void)updateMemberCountLabel:(unsigned int)arg1;
- (void)layoutChatBotHangupBtn;
- (void)layoutChatBotVoiceInputCircleBtn;
- (void)layoutPreQuestionBtn;
- (void)layoutNextQuestionBtn;
- (void)layoutChatBotVideoBtn;
- (void)layoutChatBotVoiceInputBtn;
- (void)addLongPressGesToVoiceInputBtn;
- (void)addTapGesToStopBtn;
- (BOOL)enableShowDiscoverView;
- (void)layoutChatBotDiscoverView;
- (void)layoutEnlargeContentBtn;
- (void)layoutDiscoverMoreChatBotBtn;
- (void)layoutChatBotVoiceInputCover:(BOOL)arg1;
- (void)layoutChatBotVideoInputCover:(BOOL)arg1;
- (BOOL)isNeedShowCameraBtn;
- (void)onClickPreQuestionBtn;
- (void)onClickNextQuestionBtn;
- (void)requestQuestionAndCheck;
- (void)requestQuestion:(int)arg1;
- (void)shrinkContentView;
- (void)shrinkContentViewWithCompleteHandle:(id /* block */)arg1;
- (void)enlargeContentView;
- (void)enlargeContentViewWithCompleteHandle:(id /* block */)arg1;
- (void)doCloseMic;
- (void)doOpenMic;
- (void)doHangup;
- (id)genPlaygroundCardInfoWithMsg:(id)arg1;
- (id)genTransferBoardData;
- (void)updateStatusLabelWithText:(id)arg1;
- (void)playSound:(id)arg1 OfType:(id)arg2 numberOfLoops:(long long)arg3;
- (void)tryToOpenClientMicrophone;
- (void)realOpenClientMicrophone;
- (void)tryToCloseClientMicrophone;
- (void)realCloseClientMicrophone;
- (void)onClickMinimize;
- (void)holdMicrophoneLock;
- (void)releaseMicroPhoneLock;
- (void)requestMicChubbyLockWithOptCode:(int)arg1;
- (void)handleChubbyLockResp:(id)arg1 Event:(unsigned int)arg2;
- (id)getBaseReportData;
- (void)reportRequestMicResult:(BOOL)arg1;
- (void)transSendMsgToBoardEventAndReport:(id)arg1 isLaunchScene:(BOOL)arg2;
- (void)onMultiTalkReady;
- (void)MMTransparentButton_touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)MMTransparentButton_touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)onClickVideoBtn;
- (void)onClickStopWeAppProcess;
- (void)onClickHandup;
- (void)onVoiceInputShouldBegin;
- (void)onVoiceInputShouldEnd;
- (CGRect)getRecommendationListFrameForDisplayStatus:(BOOL)arg1;
- (void)onSwitchContact:(id /* block */)arg1;
- (void)onFlipCamera;
- (id)getVideoPreviewView;
- (BOOL)needShowBoardBackgroundView;
- (void)notifyToMinimize;
- (void)onChangeMainBtn:(BOOL)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onUserSendMsgToChatBot:(id)arg1 needLaunchVoIP:(BOOL)arg2;
- (void)onTalkSucc;
- (BOOL)isSpeakerReady;
- (id)roomInfo;
- (void)setRoomInfo:(id)arg1;
- (id)chatBotHangUpBtn;
- (void)setChatBotHangUpBtn:(id)arg1;
- (id)chatBotVoiceInputBtn;
- (void)setChatBotVoiceInputBtn:(id)arg1;
- (id)chatBotVoiceInputBtnIcon;
- (void)setChatBotVoiceInputBtnIcon:(id)arg1;
- (id)chatBotVoiceInputBtnCover;
- (void)setChatBotVoiceInputBtnCover:(id)arg1;
- (id)chatBotVoiceInputBtnBlurView;
- (void)setChatBotVoiceInputBtnBlurView:(id)arg1;
- (id)chatBotVideoBtn;
- (void)setChatBotVideoBtn:(id)arg1;
- (id)chatBotVideoBtnIcon;
- (void)setChatBotVideoBtnIcon:(id)arg1;
- (id)chatBotVideoBtnCover;
- (void)setChatBotVideoBtnCover:(id)arg1;
- (id)chatBotVideoBtnBlurView;
- (void)setChatBotVideoBtnBlurView:(id)arg1;
- (BOOL)bShowVideo;
- (void)setBShowVideo:(BOOL)arg1;
- (id)chatBotStatusLabel;
- (void)setChatBotStatusLabel:(id)arg1;
- (id)chatBotDiscoverView;
- (void)setChatBotDiscoverView:(id)arg1;
- (id)enlargeContentBtn;
- (void)setEnlargeContentBtn:(id)arg1;
- (id)discoverMoreChatBotBtn;
- (void)setDiscoverMoreChatBotBtn:(id)arg1;
- (unsigned int)animationState;
- (void)setAnimationState:(unsigned int)arg1;
- (id)m_remoteNameLabel;
- (void)setM_remoteNameLabel:(id)arg1;
- (id)m_remoteHeadImageView;
- (void)setM_remoteHeadImageView:(id)arg1;
- (id)separatorLabel;
- (void)setSeparatorLabel:(id)arg1;
- (id)roomMemberCountLabel;
- (void)setRoomMemberCountLabel:(id)arg1;
- (id)chatBotVoiceInputCircleBtn;
- (void)setChatBotVoiceInputCircleBtn:(id)arg1;
- (id)preQuestionBtn;
- (void)setPreQuestionBtn:(id)arg1;
- (id)nextQuestionBtn;
- (void)setNextQuestionBtn:(id)arg1;
- (unsigned int)curQuestionId;
- (void)setCurQuestionId:(unsigned int)arg1;
- (BOOL)isChatBotMicOpen;
- (void)setIsChatBotMicOpen:(BOOL)arg1;
- (double)scaleFactor;
- (void)setScaleFactor:(double)arg1;
- (id)m_minimizeButton;
- (void)setM_minimizeButton:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_backgroundView;
- (void)setM_backgroundView:(id)arg1;
- (id)m_timer;
- (void)setM_timer:(id)arg1;
- (unsigned long long)lastVoiceInputBtnPressTime;
- (void)setLastVoiceInputBtnPressTime:(unsigned long long)arg1;
- (id)curMsgId;
- (void)setCurMsgId:(id)arg1;
- (id)boardView;
- (void)setBoardView:(id)arg1;
- (id)transferBoardMsgList;
- (void)setTransferBoardMsgList:(id)arg1;
- (id)multiHeadImageRowView;
- (void)setMultiHeadImageRowView:(id)arg1;
- (id)multiChatBotList;
- (void)setMultiChatBotList:(id)arg1;
- (BOOL)isRequestReleaseMicrophone;
- (void)setIsRequestReleaseMicrophone:(BOOL)arg1;
- (id)player;
- (void)setPlayer:(id)arg1;
- (void).cxx_destruct;
@end

@interface ChatBotBrandVoIPTalkingView : UIView <ChatBotVoIPBottomPanelDelegate, ChatBotVOIPBoardViewDelegate, ChatBotVoIPModeSelectViewDelegate, IChatBotBrandPCMDataExt, ChatBotBrandVoiceInputButtonDelegate, IChatBotVoIPSessionDelegate>
{
    BOOL _disableWelcomeEvent; // +0x8
    BOOL _isMicOpen; // +0x9
    BOOL _isAiJoinRoomSuccess; // +0xa
    unsigned int _viewStatus; // +0xc
    id <ChatBotBrandVoIPTalkingViewDeleget> _delegate; // +0x10
    ChatBotBrandDataReporter * _dataReporter; // +0x18
    MMUIButton * _backBtn; // +0x20
    ChatBotBrandHeadImageView * _headImageView; // +0x28
    MMUILabel * _roomNameLabel; // +0x30
    ChatBotVoIPRoomInfo * _roomInfo; // +0x38
    ReportAiChatExtInfo * _reportAiChatExtInfo; // +0x40
    MMUILabel * _roomConnectStateLabel; // +0x48
    ChatBotBrandVoiceInputButton * _voiceButton; // +0x50
    UIImageView * _aiImageView; // +0x58
    ChatBotBrandPCMVolumeDetector * _volumeDetector; // +0x60
    NSTimer * _connectStateTimer; // +0x68
    long long _connectStateDotCount; // +0x70
}
- (id)initWithFrame:(CGRect)arg1 roomInfo:(id)arg2 reportAiChatExtInfo:(id)arg3 delegate:(id)arg4;
- (id)initWithFrame:(CGRect)arg1 roomInfo:(id)arg2 delegate:(id)arg3;
- (void)dealloc;
- (id)sessionId;
- (void)updateRoomInfo:(id)arg1;
- (void)layoutSubviews;
- (void)layoutContentViews;
- (void)layoutLeftTopBackBtn;
- (void)close;
- (void)layoutHeadImageView;
- (void)layoutRoomNameLabel;
- (void)layoutRoomConnectStateLabel;
- (void)startConnectStateAnimation;
- (void)updateConnectStateLabelText;
- (void)setConnectTimeOut;
- (void)stopConnectStateAnimation;
- (void)layoutAIImageView;
- (void)layoutVioceButton;
- (void)updateViewStatus:(unsigned int)arg1;
- (id)genTransferBoardData;
- (void)openMic;
- (void)closeMic;
- (void)interruptAISpeaking;
- (void)onTalkSucc;
- (void)onTTSBegin:(id)arg1;
- (void)onTTSEnd:(id)arg1;
- (void)voiceRecordingDidBegin;
- (void)voiceRecordingDidCancel;
- (void)onChangeSpecialModel:(id)arg1 modelName:(id)arg2;
- (BOOL)isMicrophoneOpen;
- (void)setImageWithUrlStr:(id)arg1;
- (void)performProgressBarStartAnimation;
- (void)performProgressBarStopAnimation;
- (void)inputPCMData:(char *)arg1 length:(unsigned int)arg2;
- (void)initVolumeDetector;
- (void)impactVibration;
- (void)willMoveToSuperview:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)disableWelcomeEvent;
- (void)setDisableWelcomeEvent:(BOOL)arg1;
- (id)dataReporter;
- (void)setDataReporter:(id)arg1;
- (id)backBtn;
- (void)setBackBtn:(id)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)roomNameLabel;
- (void)setRoomNameLabel:(id)arg1;
- (id)roomInfo;
- (void)setRoomInfo:(id)arg1;
- (id)reportAiChatExtInfo;
- (void)setReportAiChatExtInfo:(id)arg1;
- (unsigned int)viewStatus;
- (void)setViewStatus:(unsigned int)arg1;
- (BOOL)isMicOpen;
- (void)setIsMicOpen:(BOOL)arg1;
- (BOOL)isAiJoinRoomSuccess;
- (void)setIsAiJoinRoomSuccess:(BOOL)arg1;
- (id)roomConnectStateLabel;
- (void)setRoomConnectStateLabel:(id)arg1;
- (id)voiceButton;
- (void)setVoiceButton:(id)arg1;
- (id)aiImageView;
- (void)setAiImageView:(id)arg1;
- (id)volumeDetector;
- (void)setVolumeDetector:(id)arg1;
- (id)connectStateTimer;
- (void)setConnectStateTimer:(id)arg1;
- (long long)connectStateDotCount;
- (void)setConnectStateDotCount:(long long)arg1;
- (void).cxx_destruct;
@end

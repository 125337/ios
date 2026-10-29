@interface MMLiveGameJoinTeamView : MMPageSheetBaseView <UIGestureRecognizerDelegate, WCFinderLiveExt, MMWebImageViewDelegate, MMLiveJoinGameAudiencePaymentViewDelegate, ILinkEventExt, WCCoinBuyCoinLogicDelegate>
{
    BOOL _paidForNextRound; // +0x8
    BOOL _isShow; // +0x9
    BOOL _shouldReport; // +0xa
    unsigned int _curJoinTeamMode; // +0xc
    id <MMLiveGameJoinTeamViewDelegate> _operationDelegate; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    UIView * _contentView; // +0x20
    MMUIButton * _closeBtn; // +0x28
    MMLiveGameJoinTeamShowGiftView * _showGiftBtn; // +0x30
    MMUILabel * _titleLabel; // +0x38
    MMUILabel * _rankDescLabel; // +0x40
    MMUILabel * _teamupMemberDescLabel; // +0x48
    MMUIButton * _teamupStartButton; // +0x50
    RichTextView * _explainDescLabel; // +0x58
    MMFinderLiveGameTeamInfo * _gameTeamInfo; // +0x60
    UIButton * _anchorView; // +0x68
    MMUIView * _topSepratorLine; // +0x70
    MMUIView * _downSepratorLine; // +0x78
    MMWebImageView * _rankIcon; // +0x80
    NSString * _rankIconUrl; // +0x88
    MMUILabel * _rankScoreDescLabel; // +0x90
    MMUILabel * _otherDescLabel; // +0x98
    UIImageView * _arrowImageView; // +0xa0
    MMLiveJoinGameAudiencePaymentView * _paymentView; // +0xa8
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (void)showWithAnimated:(BOOL)arg1;
- (void)pageSheetDidAppear;
- (void)dismissWithAnimated:(BOOL)arg1;
- (void)updatePanelInfo;
- (void)fetchGameTeamInfo;
- (id)liveTask;
- (void)updateWithGameTeamInfo:(id)arg1;
- (void)handlePaymentTitle:(unsigned long long)arg1;
- (id)getJoinGameTeamButtonText:(unsigned int)arg1 gameTeamInfo:(id)arg2;
- (unsigned long long)getJoinTeamExposureAction:(unsigned int)arg1;
- (unsigned long long)getJoinTeamAction:(unsigned int)arg1;
- (id)secondaryPaymentView;
- (void)onClickCloseButton;
- (void)onClickShowGiftButtonDown;
- (void)onClickShowGiftButton;
- (void)onTeamUpStartButtonClicked;
- (void)onTeamUpBookNextButtonClick;
- (void)onTeamUpPayButtonClicked;
- (BOOL)checkJumpInfoValid;
- (void)tapArrow;
- (void)onMMLiveJoinGameAudiencePaymentViewClickPayButton;
- (void)onMMLiveJoinGameAudiencePaymentViewClickCoinButton;
- (void)buyCoinCancel:(id)arg1;
- (void)buyCoinFail:(id)arg1;
- (void)buyCoinSuccess:(id)arg1;
- (void)onGetFinderLiveGameLiveTeamUpInfoWithTaskId:(id)arg1 appMsgGameTeamInfo:(id)arg2;
- (void)onGetFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(BOOL)arg7 liveClosed:(BOOL)arg8 liveExtFlag:(unsigned int)arg9 onlineViewCount:(unsigned int)arg10 ktvPlayerCount:(unsigned int)arg11 nextRequestInterval:(unsigned int)arg12 currentLikeCount:(unsigned long long)arg13 extraClientConfigUpdated:(BOOL)arg14 liveGameData:(id)arg15 respContext:(id)arg16;
- (BOOL)isFollowState;
- (void)onLoadImageOK:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)audienceLogReporter;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)paidForNextRound;
- (void)setPaidForNextRound:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)showGiftBtn;
- (void)setShowGiftBtn:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)rankDescLabel;
- (void)setRankDescLabel:(id)arg1;
- (id)teamupMemberDescLabel;
- (void)setTeamupMemberDescLabel:(id)arg1;
- (id)teamupStartButton;
- (void)setTeamupStartButton:(id)arg1;
- (id)explainDescLabel;
- (void)setExplainDescLabel:(id)arg1;
- (id)gameTeamInfo;
- (void)setGameTeamInfo:(id)arg1;
- (unsigned int)curJoinTeamMode;
- (void)setCurJoinTeamMode:(unsigned int)arg1;
- (id)anchorView;
- (void)setAnchorView:(id)arg1;
- (id)topSepratorLine;
- (void)setTopSepratorLine:(id)arg1;
- (id)downSepratorLine;
- (void)setDownSepratorLine:(id)arg1;
- (id)rankIcon;
- (void)setRankIcon:(id)arg1;
- (id)rankIconUrl;
- (void)setRankIconUrl:(id)arg1;
- (id)rankScoreDescLabel;
- (void)setRankScoreDescLabel:(id)arg1;
- (id)otherDescLabel;
- (void)setOtherDescLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)paymentView;
- (void)setPaymentView:(id)arg1;
- (BOOL)isShow;
- (void)setIsShow:(BOOL)arg1;
- (BOOL)shouldReport;
- (void)setShouldReport:(BOOL)arg1;
- (void).cxx_destruct;
@end

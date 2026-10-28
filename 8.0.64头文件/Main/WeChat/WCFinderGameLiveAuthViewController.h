@interface WCFinderGameLiveAuthViewController : MMCPUIViewController <MMAcceptAgreementResultViewControllerDelegate, ILinkEventExt>
{
    unsigned int _platformId; // +0x70
    MMUILabel * _titleLabel; // +0x78
    UIView * _anchorInfoView; // +0x80
    MMWebImageView * _anchorAvatarView; // +0x88
    MMUILabel * _anchorNameLabel; // +0x90
    MMUILabel * _anchorDescLabel; // +0x98
    UIButton * _cancelButton; // +0xa0
    MMUIButton * _okButton; // +0xa8
    NSString * _appId; // +0xb0
    NSString * _gameUserId; // +0xb8
    unsigned long long _authResultAction; // +0xc0
    NSString * _finderUsername; // +0xc8
    NSString * _ticket; // +0xd0
    NSString * _gameAuthTicket; // +0xd8
    unsigned long long _scene; // +0xe0
    long long _gameLiveEntryScene; // +0xe8
    unsigned long long _expiredTime; // +0xf0
    MMAcceptAgreementCommonHeadView * _authExpiredView; // +0xf8
    UIButton * _authExpiredButton; // +0x100
    WCFinderAuthInfoIconView * _authIconView; // +0x108
    long long _authScene; // +0x110
}
- (id)initWithAuthInfos:(id)arg1;
- (id)initWithAppId:(id)arg1 ticket:(id)arg2;
- (id)initWithGameLiveAuthTicket:(id)arg1 expiredTime:(unsigned long long)arg2 authScene:(long long)arg3;
- (void)viewDidLoad;
- (void)layoutUI;
- (id)navigationBarBackgroundColor;
- (void)layoutAnchorInfoView;
- (void)layoutAuthExpiredView;
- (id)titleLabel;
- (id)anchorAvatarView;
- (id)authIconView;
- (id)anchorNameLabel;
- (id)anchorDescLabel;
- (id)cancelButton;
- (id)okButton;
- (void)onClickCancelButton:(id)arg1;
- (void)handleCancelAuth;
- (void)onClickOkButton:(id)arg1;
- (void)handleAuthSuccessWith:(id)arg1 authCode:(id)arg2;
- (id /* block */)launchGameAppCallbackHandler;
- (void)handleAuthFailedWithType:(int)arg1;
- (id)getHeadTitleByErrorType:(int)arg1;
- (id)getHeadSubTitleByErrorType:(int)arg1;
- (void)startGameLive;
- (void)onClickDismissButton;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)setTitleLabel:(id)arg1;
- (id)anchorInfoView;
- (void)setAnchorInfoView:(id)arg1;
- (void)setAnchorAvatarView:(id)arg1;
- (void)setAnchorNameLabel:(id)arg1;
- (void)setAnchorDescLabel:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setOkButton:(id)arg1;
- (id)appId;
- (void)setAppId:(id)arg1;
- (id)gameUserId;
- (void)setGameUserId:(id)arg1;
- (unsigned int)platformId;
- (void)setPlatformId:(unsigned int)arg1;
- (unsigned long long)authResultAction;
- (void)setAuthResultAction:(unsigned long long)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (id)gameAuthTicket;
- (void)setGameAuthTicket:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (long long)gameLiveEntryScene;
- (void)setGameLiveEntryScene:(long long)arg1;
- (unsigned long long)expiredTime;
- (void)setExpiredTime:(unsigned long long)arg1;
- (id)authExpiredView;
- (void)setAuthExpiredView:(id)arg1;
- (id)authExpiredButton;
- (void)setAuthExpiredButton:(id)arg1;
- (void)setAuthIconView:(id)arg1;
- (long long)authScene;
- (void)setAuthScene:(long long)arg1;
- (void).cxx_destruct;
@end

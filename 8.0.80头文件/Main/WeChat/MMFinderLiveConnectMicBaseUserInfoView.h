@interface MMFinderLiveConnectMicBaseUserInfoView : UIView
{
    BOOL _configureLiveDirtyHandle; // +0x8
    BOOL _disableHeadImageAutoUpdate; // +0x9
    BOOL _isHiddenSmallWidgets; // +0xa
    BOOL _shouldAdjustHitTest; // +0xb
    BOOL _headImageViewUserInteractionEnabled; // +0xc
    id <MMFinderLiveConnectMicBaseUserInfoViewDelegate> _actionDelegate; // +0x10
    id <WCFinderHeadImageViewDelegate> _headImageViewDelegate; // +0x18
    MMFinderLiveTaskId * _finderLiveTaskId; // +0x20
    MMFinderLiveConnectMicUser * _connectMicUserInfo; // +0x28
    WCFinderHeadImageView * _headImageView; // +0x30
    UILabel * _nicknameLabel; // +0x38
    MMUIImageView * _roleIconImageView; // +0x40
    MMUIButton * _micMutedButton; // +0x48
    MMFinderLiveGlobalRankSignView * _globalRankSignView; // +0x50
    MMFinderLiveLiveRoleSignView * _anonymousSignView; // +0x58
    CGRect _displayNormalizedFrame; // +0x60
}
- (id)initWithFrame:(CGRect)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)setDisplayNormalizedFrame:(CGRect)arg1;
- (void)setHeadImageViewUserInteractionEnabled:(BOOL)arg1;
- (unsigned long long)viewType;
- (double)getHeadImageViewNormalizedCornerRadius;
- (void)show;
- (void)dealloc;
- (void)clearAndHide;
- (void)layoutUI;
- (void)updateHeadImageViewSize;
- (void)configHeadImageView;
- (void)createHeadImageView;
- (void)createNickNameLabel;
- (id)roleIconImageView;
- (void)configNicknameLabel;
- (void)setConnectMicUserInfo:(id)arg1;
- (void)onConnectMicUserHasChanged;
- (void)createMicMutedButton;
- (void)onClickMicMutedButton;
- (void)configMicMutedButton;
- (void)updateMicMutedButtonAppearance;
- (void)updateMicMutedButtonFrame:(CGRect)arg1;
- (void)configGlobalRankSignView;
- (void)finderNicknameLabelDidClick;
- (BOOL)needDisplayGlobalRankSignView;
- (BOOL)needDisplayAnonymousSignView;
- (void)configAnonymousSignView;
- (unsigned int)getGlobalRank;
- (BOOL)updateConnectMicUserGlobalBadgeLevel:(unsigned int)arg1;
- (void)updateSmallWidgetsHidden:(BOOL)arg1;
- (BOOL)isTouchPointInsideHeatValueLabel:(CGPoint)arg1;
- (void)handleHeatValueLabelTap;
- (double)trailingWidthAfterNicknameLabelForLikeButton;
- (BOOL)isTouchPointInsideHeadImageView:(CGPoint)arg1;
- (id)actionDelegate;
- (void)setActionDelegate:(id)arg1;
- (id)headImageViewDelegate;
- (void)setHeadImageViewDelegate:(id)arg1;
- (id)finderLiveTaskId;
- (void)setFinderLiveTaskId:(id)arg1;
- (id)connectMicUserInfo;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (void)setRoleIconImageView:(id)arg1;
- (id)micMutedButton;
- (void)setMicMutedButton:(id)arg1;
- (CGRect)displayNormalizedFrame;
- (BOOL)configureLiveDirtyHandle;
- (void)setConfigureLiveDirtyHandle:(BOOL)arg1;
- (BOOL)disableHeadImageAutoUpdate;
- (void)setDisableHeadImageAutoUpdate:(BOOL)arg1;
- (BOOL)isHiddenSmallWidgets;
- (void)setIsHiddenSmallWidgets:(BOOL)arg1;
- (BOOL)shouldAdjustHitTest;
- (void)setShouldAdjustHitTest:(BOOL)arg1;
- (BOOL)headImageViewUserInteractionEnabled;
- (id)globalRankSignView;
- (void)setGlobalRankSignView:(id)arg1;
- (id)anonymousSignView;
- (void)setAnonymousSignView:(id)arg1;
- (void).cxx_destruct;
@end

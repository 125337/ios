@interface MMLiveOperationView : MMLiveBaseComponentView <IMMFontMgrExt, MMLiveOnlineStateViewDelegate, MMLiveCommentViewDelegate>
{
    BOOL _isLiveNameEdited; // +0x8
    BOOL _isAnchor; // +0x9
    BOOL _connectMicButtonShowRedDot; // +0xa
    BOOL _shouldShowHeatValue; // +0xb
    BOOL _liveRewardEnabled; // +0xc
    BOOL _shouldIgnoreBackViewTapped; // +0xd
    BOOL _isShouldShowNewHeatValueStyle; // +0xe
    MMLiveCommentView * _commentView; // +0x10
    MMLiveOnlineStateView * _onlineStateView; // +0x18
    NSString * _liveTitle; // +0x20
    long long _roleType; // +0x28
    id <MMLiveOperationViewUIDelegate> _uiDelegate; // +0x30
    id <MMLiveOperationViewDelegate> _operationDelegate; // +0x38
    id <MMUIViewControllerDelegate> _vcDelegate; // +0x40
    unsigned long long _connectMicButtonState; // +0x48
    MMLiveConnectedMicAudienceView * _connectedMicAudienceView; // +0x50
    MMLiveGradientView * _topShadowView; // +0x58
    MMLiveGradientView * _bottomShadowView; // +0x60
    unsigned long long _topShadowForbidOptionFlag; // +0x68
    unsigned long long _bottomShadowForbidOptionFlag; // +0x70
}
- (id)initWithTaskId:(id)arg1;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)layoutUI;
- (void)layoutShadowView;
- (void)forceLayoutForOrientationChanged;
- (void)hideAllContents;
- (void)showAllContentsForAudience;
- (void)showAllContentsForAnchor;
- (void)checkAndShowAllContents;
- (void)checkAndHideAllContents;
- (void)updateOnlineUserCnt:(unsigned long long)arg1;
- (void)updateOnlineUserCnt:(unsigned long long)arg1 withOnlineViewCnt:(unsigned long long)arg2;
- (void)updateRewardWecoinCnt:(unsigned long long)arg1;
- (void)updateRewardTotalAmountInHeat:(unsigned long long)arg1;
- (void)updateHeatValue:(unsigned long long)arg1;
- (id)getConnectMicOperationPanel;
- (id)getConnectMicVideoPreviewPanel;
- (void)showShadowView;
- (void)hideShadowView;
- (void)setTopShadowShowForbidOption:(long long)arg1;
- (void)clearTopShadowShowForbidOption:(long long)arg1;
- (void)onTopShadowForbidOptionFlagChanged;
- (void)setBottomShadowShowForbidOption:(long long)arg1;
- (void)clearBottomShadowShowForbidOption:(long long)arg1;
- (void)onBottomShadowForbidOptionFlagChanged;
- (void)showTopShadowView;
- (id)minimizeSrcView;
- (void)clearOrRecoverScreen;
- (void)operationPermissionChanged;
- (void)onAnchorStartLiveFinished;
- (void)onAnchorPayGameSettedValueChanged;
- (void)extraOperationInfoUpdated;
- (void)refreshWidgetsForFontSizeChange;
- (id)extractBottomShadowView;
- (void)reLoadBottomShadowView;
- (void)onFontSizeChange;
- (id)commentView;
- (void)setCommentView:(id)arg1;
- (id)onlineStateView;
- (void)setOnlineStateView:(id)arg1;
- (id)liveTitle;
- (void)setLiveTitle:(id)arg1;
- (BOOL)isLiveNameEdited;
- (void)setIsLiveNameEdited:(BOOL)arg1;
- (long long)roleType;
- (void)setRoleType:(long long)arg1;
- (BOOL)isAnchor;
- (id)uiDelegate;
- (void)setUiDelegate:(id)arg1;
- (id)operationDelegate;
- (void)setOperationDelegate:(id)arg1;
- (id)vcDelegate;
- (void)setVcDelegate:(id)arg1;
- (unsigned long long)connectMicButtonState;
- (void)setConnectMicButtonState:(unsigned long long)arg1;
- (BOOL)connectMicButtonShowRedDot;
- (void)setConnectMicButtonShowRedDot:(BOOL)arg1;
- (id)connectedMicAudienceView;
- (void)setConnectedMicAudienceView:(id)arg1;
- (BOOL)shouldShowHeatValue;
- (void)setShouldShowHeatValue:(BOOL)arg1;
- (BOOL)liveRewardEnabled;
- (void)setLiveRewardEnabled:(BOOL)arg1;
- (BOOL)shouldIgnoreBackViewTapped;
- (void)setShouldIgnoreBackViewTapped:(BOOL)arg1;
- (BOOL)isShouldShowNewHeatValueStyle;
- (void)setIsShouldShowNewHeatValueStyle:(BOOL)arg1;
- (id)topShadowView;
- (void)setTopShadowView:(id)arg1;
- (id)bottomShadowView;
- (void)setBottomShadowView:(id)arg1;
- (unsigned long long)topShadowForbidOptionFlag;
- (void)setTopShadowForbidOptionFlag:(unsigned long long)arg1;
- (unsigned long long)bottomShadowForbidOptionFlag;
- (void)setBottomShadowForbidOptionFlag:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


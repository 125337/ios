@interface WCPayRecepictReaderMessageCellView : ReaderMessageCellView <WATemplateMsgManagerExt, WAAppDetailInfoManagerExtension, IMMTemplateMsgAuthServiceExt, MMTipsViewControllerDelegate, IStrangerBrandContactHeadImageExt>
{
    MMBrandHeadImageView * m_headerView; // +0x48
    UILabel * m_nickNameLabel; // +0x50
    MMUILabel * m_muteSloganView; // +0x58
    MMUILabel * m_muteTitleSloganView; // +0x60
    UILabel * m_weAppMsgOpTitleLabel; // +0x68
    UIButton * m_msgOpButton; // +0x70
    MMUIButton * m_headerMenuButton; // +0x78
    BOOL m_isMuted; // +0x80
    BOOL m_needGetOrFetchRecvSwitch; // +0x81
    WAContactGetter * m_contactGetter; // +0x88
    BrandTemplateMsgAuthMessageBubbleModel * _messageBubbleModel; // +0x90
    UIImageView * _audioIconView; // +0x98
    WCSubscriptionNotifyActionHeaderView_ * _actionSheetIconView; // +0xa0
}
- (BOOL)canBeReused;
- (id)initWithViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)getOrFetchRecvSwitch;
- (id)headerView;
- (void)onAppear;
- (void)getAndDisplayAvatarUrlWithCompleteAction:(id /* block */)arg1;
- (void)onStrangerBrandHeadImageURLChange:(id)arg1;
- (void)oldMsgGetOrFetchAndDisplayRecvSwitch;
- (void)newMsgGetAndDisplayRecvSwitch;
- (void)newMsgFetchRecvSwitchFromSvr;
- (void)oldMsgUpdateGlobalSwitchOff;
- (void)newMsgUpdateScopeSwitch:(BOOL)arg1 acceptAudio:(BOOL)arg2;
- (void)banListStatusChanged:(id)arg1;
- (void)onWeAppReceiveMsgStatusChangedSuccess:(BOOL)arg1 WeAppUserName:(id)arg2;
- (void)onUpdateScopeGlobalRecv:(BOOL)arg1 forUser:(id)arg2;
- (void)onUpdateScopeList:(id)arg1 forUser:(id)arg2;
- (void)onOldMsgButtonClicked:(id)arg1;
- (void)tryAcceptNewSubscriptionNotifyScope;
- (void)showAlertViewWhenOpenGlobalRecv:(id)arg1;
- (void)layoutContentView;
- (void)tryPreloadWeAppTaskIfNeeded;
- (void)addCornerToContentView;
- (void)onGotoPayDetail:(id)arg1;
- (void)layoutNickNameLabel;
- (double)layoutScheduleContentView:(id)arg1 originY:(double)arg2 withAccessbilityElementsArray:(id)arg3;
- (void)onHeadObjectClick:(id)arg1;
- (void)onFinderFeedClick;
- (void)onHeadImageClick;
- (BOOL)isForbidJumpProfileWhenClickAvatar;
- (void)onOPButtonHighlightBegan:(id)arg1;
- (void)onOPButtonHighlightEnded:(id)arg1;
- (void)onOPButtonClicked:(id)arg1;
- (void)onClicked;
- (void)jumpWeappOpWrap:(id)arg1;
- (void)jumpScheduleOpWrap:(id)arg1;
- (void)jumpAdvertiseOpWrap:(id)arg1;
- (void)jumpOpItem:(id)arg1;
- (void)jumpFinderFeedOpWrap:(id)arg1;
- (void)jumpFinderLiveOpWrap:(id)arg1;
- (void)jumpFinderGameLiveOpWrap:(id)arg1;
- (void)forwardMessage;
- (void)addFavorite;
- (void)onDelete:(id)arg1;
- (BOOL)isNeedHeaderMenuButton;
- (BOOL)isNeedHeaderMuteLabel;
- (BOOL)isSubscrMsg;
- (BOOL)isOldSubscrMsg;
- (BOOL)isNewSubscrMsg;
- (void)layoutHeaderMenuButtonIfNeedOnCenterY:(double)arg1;
- (void)layoutHeaderMuteSloganLabelIfNeedOnCenterY:(double)arg1;
- (void)layoutTitleMuteSloganLabelIfNeed;
- (void)layoutJumpWeappOpButton:(id)arg1 withWeappUsername:(id)arg2;
- (void)onMoreButton:(id)arg1;
- (void)showAcceptNotifyAndAudioNotifySecondSonfirmView;
- (void)showAcceptAudioNotifySecondSonfirmView;
- (void)showRejectAudioNotifySecondSonfirmView;
- (void)getWeappContactForUsername:(id)arg1 handler:(id /* block */)arg2;
- (void)onExpose;
- (void)updateMuteState:(BOOL)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (id)operationMenuItems;
- (BOOL)hasMoneyUnit:(id)arg1;
- (id)replaceWithOneByteUnit:(id)arg1;
- (void)fillMessageBubbleModelBaseInfo;
- (void)fillMessageBubbleModelBottomBtnInfo:(id)arg1;
- (void)reportMessageBubbleOperationType:(unsigned long long)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isAccessibilityElement;
- (void)reportReaderTemplateMsgFold:(long long)arg1;
- (id)actionSheetIconView;
- (void)setActionSheetIconView:(id)arg1;
- (void).cxx_destruct;
@end

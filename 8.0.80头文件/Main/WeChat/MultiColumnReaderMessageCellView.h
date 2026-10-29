@interface MultiColumnReaderMessageCellView : ReaderMessageCellView <WATemplateMsgManagerExt, WAAppDetailInfoManagerExtension, IMMTemplateMsgAuthServiceExt, MMTipsViewControllerDelegate, IStrangerBrandContactHeadImageExt, ILinkEventExt, WCActionSheetDelegate>
{
    MMBrandHeadImageView * m_headerView; // +0x48
    UILabel * m_nickNameLabel; // +0x50
    MMUILabel * m_muteSloganView; // +0x58
    MMUILabel * m_titleSloganView; // +0x60
    UIImageView * m_muteIconView; // +0x68
    MMUIButton * m_muteIconHitAreaBtn; // +0x70
    UILabel * m_weAppMsgOpTitleLabel; // +0x78
    UIButton * m_msgOpButton; // +0x80
    MMUIButton * m_headerMenuButton; // +0x88
    BOOL m_isMuted; // +0x90
    BOOL m_isAcceptedWithForceNotify; // +0x91
    BOOL m_isAcceptedWithNotify; // +0x92
    BOOL m_needGetOrFetchRecvSwitch; // +0x93
    WAContactGetter * m_contactGetter; // +0x98
    BrandTemplateMsgAuthMessageBubbleModel * _messageBubbleModel; // +0xa0
    BrandPluginTemplateMsgReportModel * _pluginMsgReportModel; // +0xa8
    UIImageView * _audioIconView; // +0xb0
    MultiColumnReaderMessageCellMainContentView * m_mainContentView; // +0xb8
    MMWebImageView * m_rightCoverImageView; // +0xc0
    RichTextView * m_footerLabel; // +0xc8
    MMHeadImageView * m_headImageView; // +0xd0
    YYAsyncImageView * m_bgImageView; // +0xd8
    BOOL _voipSubIdStatus; // +0xe0
    WCSubscriptionNotifyActionHeaderView * _actionSheetIconView; // +0xe8
}
- (BOOL)canBeReused;
- (id)initWithViewModel:(id)arg1;
- (void)setViewModel:(id)arg1;
- (void)getOrFetchRecvSwitch;
- (id)headerView;
- (void)onAppear;
- (void)updateReportContainerType;
- (void)getAndDisplayAvatarUrlWithCompleteAction:(id /* block */)arg1;
- (void)onStrangerBrandHeadImageURLChange:(id)arg1;
- (void)oldMsgGetOrFetchAndDisplayRecvSwitch;
- (void)newMsgGetAndDisplayRecvSwitch;
- (void)newMsgFetchRecvSwitchFromSvr;
- (void)oldMsgUpdateGlobalSwitchOff;
- (void)newMsgUpdateScopeSwitch:(id)arg1 acceptAudio:(id)arg2 acceptForceNotify:(id)arg3 acceptNotify:(id)arg4;
- (void)updateVoipCallSubIdStatus;
- (void)getAndFetchVoipCallSubIdStatus;
- (void)onUpdateVoipCallSubIdStatus:(BOOL)arg1 subId:(id)arg2;
- (void)banListStatusChanged:(id)arg1;
- (void)onWeAppReceiveMsgStatusChangedSuccess:(BOOL)arg1 WeAppUserName:(id)arg2;
- (void)onUpdateScopeGlobalRecv:(BOOL)arg1 forUser:(id)arg2;
- (void)onUpdateScopeList:(id)arg1 forUser:(id)arg2;
- (void)tryAcceptNewSubscriptionNotifyScope;
- (void)showAlertViewWhenOpenGlobalRecv:(id)arg1;
- (void)layoutInternal;
- (void)layoutContentView;
- (void)tryPreloadWeAppTaskIfNeeded;
- (void)addCornerToContentView;
- (void)layoutNickNameLabel;
- (double)layoutScheduleContentView:(id)arg1 originY:(double)arg2;
- (void)onHeadObjectClick:(id)arg1;
- (void)onFinderFeedClick;
- (void)onHeadImageClick;
- (BOOL)isForbidJumpProfileWhenClickAvatar;
- (void)onOPButtonClicked:(id)arg1;
- (void)onClicked;
- (void)jumpScheduleOpWrap:(id)arg1;
- (void)jumpRemindAgain:(id)arg1;
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
- (BOOL)isVoipCallMsg;
- (BOOL)isNewSubscrMsg;
- (BOOL)isBizTemplateMsg;
- (void)layoutHeaderMenuButtonIfNeedOnCenterY:(double)arg1 parent:(id)arg2;
- (void)layoutHeaderMuteSloganLabelIfNeedOnCenterY:(double)arg1;
- (void)layoutTitleSloganLabelIfNeed;
- (void)updateTitleSloganLabelWithText:(id)arg1;
- (void)layoutMuteIconViewIfNeeded:(BOOL)arg1;
- (void)onMuteIconClicked;
- (void)layoutJumpWeappOpButton:(id)arg1 withWeappUsername:(id)arg2;
- (void)layoutEcsKfTempleteMsgOrderInfoWithReaderWrap:(id)arg1 mainContentOriginY:(double *)arg2;
- (void)showToast:(id)arg1;
- (void)onMoreButton:(id)arg1;
- (void)showAcceptNotifyAndAudioNotifySecondSonfirmView;
- (void)showAcceptAudioNotifySecondSonfirmView;
- (void)showRejectAudioNotifySecondSonfirmView;
- (void)getWeappContactForUsername:(id)arg1 handler:(id /* block */)arg2;
- (void)onExpose;
- (void)ecsPreloadIfNeeded;
- (void)updateMuteState:(BOOL)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (id)operationMenuItems;
- (BOOL)canShowMoreMenuItem;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (BOOL)hasMoneyUnit:(id)arg1;
- (id)replaceWithOneByteUnit:(id)arg1;
- (void)fillMessageBubbleModelBaseInfo;
- (void)fillMessageBubbleModelBottomBtnInfo:(id)arg1;
- (void)reportMessageBubbleOperationType:(unsigned long long)arg1;
- (id)getMessageBubbleModel;
- (void)setContainerType:(unsigned long long)arg1;
- (void)setOpTypeNote:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isAccessibilityElement;
- (void)initHeadImageView;
- (void)onHeadImageClicked:(id)arg1;
- (void)onHeadImageLongPressed:(id)arg1;
- (void)initBgImageView;
- (void)traitCollectionDidChange:(id)arg1;
- (void)reportReaderTemplateMsgFold:(long long)arg1;
- (void)fillBrandPluginTemplateMsgReportBaseInfo;
- (void)fillBrandPluginTemplateMsgReportBottomBtnInfo:(id)arg1;
- (void)reportBrandPluginTemplateMsgOp:(unsigned int)arg1;
- (id)actionSheetIconView;
- (void)setActionSheetIconView:(id)arg1;
- (BOOL)voipSubIdStatus;
- (void)setVoipSubIdStatus:(BOOL)arg1;
- (void).cxx_destruct;
@end

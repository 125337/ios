@interface MainFrameItemView : UIView <MMLiveMgrExt, WCTextStateDBExt, MsgPlayingFacadeExt>
{
    MainFrameCellData * m_cellData; // +0x8
    MMHeadImageView * m_frameHeadView; // +0x10
    MMBadgeView * m_unreadCountView; // +0x18
    MMCPLabel * m_nameLabel; // +0x20
    MMCPLabel * m_descPostfix; // +0x28
    UIImageView * m_namePostIconView; // +0x30
    TextStateItemView * m_textStateView; // +0x38
    UILabel * m_timeLabel; // +0x40
    MainFrameItemRedTipsLabel * m_greenLabel; // +0x48
    UIImageView * m_statusView; // +0x50
    MMCPLabel * m_messageLabel; // +0x58
    MMCPLabel * m_msgPostfixLabel; // +0x60
    UIImageView * m_chatNotPushView; // +0x68
    UIImageView * m_trackRoomTipsView; // +0x70
    UIImageView * m_multiTalkIconView; // +0x78
    UIImageView * m_multiTalkingView; // +0x80
    UIImageView * m_starView; // +0x88
    UIImageView * m_strongNotifactionIconView; // +0x90
    UIImageView * m_groupLiveIconView; // +0x98
    MMGroupView * m_groupView; // +0xa0
    VoicePlayingView * m_msgPlayingIconView; // +0xa8
    BOOL _ignoreDraftMsg; // +0xb0
    UIImageView * _m_liveStatusView; // +0xb8
}
- (id)initWithCellData:(id)arg1 frame:(CGRect)arg2;
- (void)initNameLabel;
- (void)initDescLabel;
- (void)initNamePostIconView;
- (void)initGroupView;
- (void)initTextStateView;
- (void)initSubview;
- (void)layoutSubviews;
- (void)setIgnoreDraftMsg:(BOOL)arg1;
- (void)updateTimeForTimer;
- (void)updateTimeLabel;
- (id)getLabelNameColor;
- (void)updateNameLabel;
- (void)updateGroupView:(BOOL)arg1;
- (BOOL)shouldHideGroupLiveIcon:(BOOL)arg1;
- (void)quoteMessageLable:(id)arg1 prefixText:(id)arg2;
- (void)removeQuoteMessageLabel;
- (void)updateNoneVoiceGreenLabelAndMsgLabel;
- (void)updateMessageLabel;
- (void)updateMessageForChatRoom;
- (void)updateMessageForSingle;
- (id)attrDigestForSessionInfo:(id)arg1;
- (id)highlightPatDigestForSessionInfo:(id)arg1;
- (void)updateMessageForBrandHolder;
- (void)updateMessageForBrandServiceHolderWithStrX:(double)arg1;
- (void)updateStarView;
- (id)brandNotifyPrefixForCount:(unsigned long long)arg1;
- (BOOL)shouldShowLivingDotForNotifyMsg;
- (void)updateLiveStatusView;
- (void)updateTextStateView;
- (void)quoteMessageLable:(id)arg1 prefixText:(id)arg2 hasStar:(BOOL)arg3 hasLiveStatus:(BOOL)arg4 prefixColor:(id)arg5;
- (void)updateHeadView;
- (void)updateUnreadCountView;
- (BOOL)isShowPluginStatus;
- (void)updateStatusView;
- (void)updateBackgroundColor;
- (void)updateWithCellData:(id)arg1;
- (void)setLabelHighlighted:(BOOL)arg1;
- (void)onTextStateRead:(id)arg1 username:(id)arg2;
- (void)onBeginPlayingMsg:(id)arg1 autoPlayEnabled:(BOOL)arg2;
- (void)onEndPlayingMsg:(id)arg1 autoPlayEnabled:(BOOL)arg2;
- (void)onAutoPlayEndWithMsg:(id)arg1;
- (id)m_frameHeadView;
- (void)setM_frameHeadView:(id)arg1;
- (id)m_unreadCountView;
- (void)setM_unreadCountView:(id)arg1;
- (id)m_nameLabel;
- (void)setM_nameLabel:(id)arg1;
- (id)m_greenLabel;
- (void)setM_greenLabel:(id)arg1;
- (id)m_timeLabel;
- (void)setM_timeLabel:(id)arg1;
- (id)m_messageLabel;
- (void)setM_messageLabel:(id)arg1;
- (id)m_msgPostfixLabel;
- (void)setM_msgPostfixLabel:(id)arg1;
- (id)m_cellData;
- (void)setM_cellData:(id)arg1;
- (id)m_statusView;
- (void)setM_statusView:(id)arg1;
- (id)m_liveStatusView;
- (void)setM_liveStatusView:(id)arg1;
- (BOOL)ignoreDraftMsg;
- (void).cxx_destruct;
@end

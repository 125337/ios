@interface CBTAsstBoardSendConfirmCellView : CBTAsstBoardBaseCellView
{
    UIView * _providerRowView; // +0x8
    MMHeadImageView * _providerAvatarView; // +0x10
    UILabel * _providerNameLabel; // +0x18
    UIView * _contactRowView; // +0x20
    RichTextView * _messageTextView; // +0x28
    UILabel * _providerLabel; // +0x30
    MMHeadImageView * _contactAvatarView; // +0x38
    UILabel * _contactNameLabel; // +0x40
    UIView * _separatorLine; // +0x48
    UIView * _cardContainerView; // +0x50
    UIView * _cardPreviewView; // +0x58
    UIButton * _sendButton; // +0x60
    UIButton * _editButton; // +0x68
    CMessageWrap * _currentMsgWrap; // +0x70
    BaseMessageViewModel * _currentCardViewModel; // +0x78
    UIImageView * _simpleImageView; // +0x80
    id <NSObject> _notificationToken; // +0x88
    CBTAsstBoardBaseViewModel * _lastReportVM; // +0x90
    UIView * _assistantAvatarRowView; // +0x98
    UIView * _selfAssistantColumnView; // +0xa0
    UIView * _selfAssistantBadgeView; // +0xa8
    UIImageView * _selfAssistantBadgeIconView; // +0xb0
    MMHeadImageView * _selfAssistantAvatarView; // +0xb8
    UILabel * _selfAssistantNameLabel; // +0xc0
    UIImageView * _arrowImageView; // +0xc8
    UIView * _contactAssistantColumnView; // +0xd0
    UIView * _contactAssistantBadgeView; // +0xd8
    UIImageView * _contactAssistantBadgeIconView; // +0xe0
    MMHeadImageView * _contactAssistantAvatarView; // +0xe8
    UILabel * _contactAssistantNameLabel; // +0xf0
    UIView * _resultLabelContainer; // +0xf8
    UIView * _resultLeftLine; // +0x100
    UIView * _resultRightLine; // +0x108
    UILabel * _resultConfirmedLabel; // +0x110
    UIImageView * _contactAvatarBadgeView; // +0x118
}
- (id)menuAnchorView;
- (void)clearSubviewsBackgroundColor:(id)arg1;
- (void)prepareForReuse;
- (BOOL)isAssistantCard;
- (void)setupUI;
- (void)layoutSubviews;
- (void)dealloc;
- (void)parseData;
- (void)layoutContainerView;
- (void)layoutProviderRow;
- (void)layoutContactRow;
- (void)layoutAssistantAvatarRow;
- (void)ensureAssistantBadgeForSelfInColumn:(id)arg1 userName:(id)arg2;
- (void)ensureAssistantBadgeForContactInColumn:(id)arg1 userName:(id)arg2;
- (void)layoutTextMessage;
- (void)layoutSeparatorLine;
- (CGRect)getBubbleFrame;
- (BOOL)needsBubbleBackground;
- (id)getCellReuseId;
- (void)refreshTheme;
- (void)traitCollectionDidChange:(id)arg1;
- (void)triggerSendMessageWithChatId:(id)arg1 content:(id)arg2;
- (double)messagePreviewReferenceWidth;
- (void)layoutCardPreview;
- (void)layoutSendButton;
- (void)layoutResultLabelWithY:(double)arg1;
- (void)applyImageToSimpleImageView:(id)arg1;
- (void)relayoutContainerAfterImageLoaded;
- (void)updateCardPreviewCover;
- (id)resultLabelText;
- (BOOL)isResultLabelMuted;
- (void)ensureEditButton;
- (void)updateEditButtonStyle;
- (id)editedTextBypassForm;
- (id)editedTextExtraSaveInfo;
- (unsigned long long)hostReportPageId;
- (void)editButtonTapped:(id)arg1;
- (void)updateSendButtonStyle;
- (void)sendButtonTouchDown:(id)arg1;
- (void)sendButtonTouchCancelled:(id)arg1;
- (void)sendButtonTapped:(id)arg1;
- (void)performSendConfirmWithReportViewClk:(BOOL)arg1;
- (id)createMessageWrapFromXml:(id)arg1 messageType:(id)arg2;
- (id)currentViewController;
- (void)downloadImageFromXml:(id)arg1 completion:(id /* block */)arg2;
- (void)downloadImageFromUrl:(id)arg1 completion:(id /* block */)arg2;
- (id)extractValueFromXml:(id)arg1 attribute:(id)arg2;
- (void)setupAmoebaViewReportingWithViewModel:(id)arg1;
- (id)networkConfirmCardParamsWithViewModel:(id)arg1;
- (void)viewStateChangedNotification:(id)arg1;
- (id)providerRowView;
- (void)setProviderRowView:(id)arg1;
- (id)providerAvatarView;
- (void)setProviderAvatarView:(id)arg1;
- (id)providerNameLabel;
- (void)setProviderNameLabel:(id)arg1;
- (id)contactRowView;
- (void)setContactRowView:(id)arg1;
- (id)messageTextView;
- (void)setMessageTextView:(id)arg1;
- (id)providerLabel;
- (void)setProviderLabel:(id)arg1;
- (id)contactAvatarView;
- (void)setContactAvatarView:(id)arg1;
- (id)contactNameLabel;
- (void)setContactNameLabel:(id)arg1;
- (id)separatorLine;
- (void)setSeparatorLine:(id)arg1;
- (id)cardContainerView;
- (void)setCardContainerView:(id)arg1;
- (id)cardPreviewView;
- (void)setCardPreviewView:(id)arg1;
- (id)sendButton;
- (void)setSendButton:(id)arg1;
- (id)editButton;
- (void)setEditButton:(id)arg1;
- (id)currentMsgWrap;
- (void)setCurrentMsgWrap:(id)arg1;
- (id)currentCardViewModel;
- (void)setCurrentCardViewModel:(id)arg1;
- (id)simpleImageView;
- (void)setSimpleImageView:(id)arg1;
- (id)notificationToken;
- (void)setNotificationToken:(id)arg1;
- (id)lastReportVM;
- (void)setLastReportVM:(id)arg1;
- (id)assistantAvatarRowView;
- (void)setAssistantAvatarRowView:(id)arg1;
- (id)selfAssistantColumnView;
- (void)setSelfAssistantColumnView:(id)arg1;
- (id)selfAssistantBadgeView;
- (void)setSelfAssistantBadgeView:(id)arg1;
- (id)selfAssistantBadgeIconView;
- (void)setSelfAssistantBadgeIconView:(id)arg1;
- (id)selfAssistantAvatarView;
- (void)setSelfAssistantAvatarView:(id)arg1;
- (id)selfAssistantNameLabel;
- (void)setSelfAssistantNameLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)contactAssistantColumnView;
- (void)setContactAssistantColumnView:(id)arg1;
- (id)contactAssistantBadgeView;
- (void)setContactAssistantBadgeView:(id)arg1;
- (id)contactAssistantBadgeIconView;
- (void)setContactAssistantBadgeIconView:(id)arg1;
- (id)contactAssistantAvatarView;
- (void)setContactAssistantAvatarView:(id)arg1;
- (id)contactAssistantNameLabel;
- (void)setContactAssistantNameLabel:(id)arg1;
- (id)resultLabelContainer;
- (void)setResultLabelContainer:(id)arg1;
- (id)resultLeftLine;
- (void)setResultLeftLine:(id)arg1;
- (id)resultRightLine;
- (void)setResultRightLine:(id)arg1;
- (id)resultConfirmedLabel;
- (void)setResultConfirmedLabel:(id)arg1;
- (id)contactAvatarBadgeView;
- (void)setContactAvatarBadgeView:(id)arg1;
- (void).cxx_destruct;
@end

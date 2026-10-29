@interface MMBaseSessionCellData : NSObject
{
    MMBaseSessionInfo * m_baseSessionInfo; // +0x8
    NSString * m_textForTimeLabel; // +0x10
    NSString * m_textForNameLabel; // +0x18
    NSString * m_textForMsgLabel; // +0x20
    NSString * m_userName; // +0x28
    NSString * m_headImgUrl; // +0x30
    unsigned int m_unreadCount; // +0x38
    unsigned int m_msgStatus; // +0x3c
    unsigned int m_updateTime; // +0x40
    BOOL m_isMoreThanAWeek; // +0x44
    BOOL m_isSentFromSelf; // +0x45
    BOOL m_isHasDraft; // +0x46
    BOOL _isSubscribeBrandContact; // +0x47
    BOOL _isBrandServiceContact; // +0x48
    BOOL _isContentOriginal; // +0x49
    BOOL _forceHiddenChatNotPushIcon; // +0x4a
    BOOL _forceCloseChatStatusNotify; // +0x4b
    BOOL _hideMsgLabelWhenMsgIsEmpty; // +0x4c
    int _badgeUnreadMaxCount; // +0x50
    NSString * m_textForNameDescLabel; // +0x58
    NSString * m_fromBusinessNameLabel; // +0x60
    UIImage * _headImage; // +0x68
    NSString * _senderDisplayName; // +0x70
    UIImage * _namePostIconImage; // +0x78
    NSString * _accessibilityForTimeLabel; // +0x80
}
- (id)initWithBaseSessionInfo:(id)arg1;
- (void)dealloc;
- (void)updateWithBaseSessionInfo:(id)arg1;
- (id)userName;
- (BOOL)isChatStatusNotifyOpen;
- (unsigned int)sessionUpdateTime;
- (void)updateNameLabelText:(id)arg1;
- (void)updateTimeLabel;
- (void)updateUnreadCount;
- (void)updateMsgStatus:(id)arg1;
- (void)updateMsgLabelTextForWeixinUsr:(id)arg1;
- (void)forceUpdateUnreadCount:(unsigned int)arg1;
- (void)updateFromBusinessNameLabelWithContact:(id)arg1;
- (id)textForMsgLabelWithSender:(id)arg1 messageWrap:(id)arg2;
- (id)textForTimeLabel;
- (id)textForNameLabel;
- (id)textForMsgLabel;
- (id)textForNameDescLabel;
- (id)headImgUrl;
- (unsigned int)unreadCount;
- (BOOL)isSentFromSelf;
- (unsigned int)msgStatus;
- (BOOL)isHasDraft;
- (id)sessionInfo;
- (id)fromBusinessNameLabel;
- (BOOL)isContentOriginal;
- (int)badgeUnreadMaxCount;
- (void)setBadgeUnreadMaxCount:(int)arg1;
- (id)headImage;
- (void)setHeadImage:(id)arg1;
- (id)senderDisplayName;
- (void)setSenderDisplayName:(id)arg1;
- (BOOL)forceHiddenChatNotPushIcon;
- (void)setForceHiddenChatNotPushIcon:(BOOL)arg1;
- (BOOL)forceCloseChatStatusNotify;
- (void)setForceCloseChatStatusNotify:(BOOL)arg1;
- (BOOL)hideMsgLabelWhenMsgIsEmpty;
- (void)setHideMsgLabelWhenMsgIsEmpty:(BOOL)arg1;
- (id)namePostIconImage;
- (void)setNamePostIconImage:(id)arg1;
- (id)accessibilityForTimeLabel;
- (void)setAccessibilityForTimeLabel:(id)arg1;
- (void).cxx_destruct;
@end


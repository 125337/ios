@interface NotifyMsgItem : NSObject
{
    BOOL _bExposed; // +0x8
    BOOL _bLiveEnd; // +0x9
    BOOL _bRejected; // +0xa
    BOOL _showLivingDot; // +0xb
    BOOL _isLiveAutoPlaying; // +0xc
    BOOL _useCustomNotifySetting; // +0xd
    unsigned int _nextRefreshTime; // +0x10
    unsigned int _ctrlType; // +0x14
    unsigned int _deliveryTime; // +0x18
    unsigned int _msgType; // +0x1c
    unsigned int _identityType; // +0x20
    unsigned int _noticeType; // +0x24
    NSString * _templateID; // +0x28
    NSString * _avatarUrl; // +0x30
    NSString * _nickName; // +0x38
    NSString * _authIconUrl; // +0x40
    NSString * _thumbImageUrl; // +0x48
    NSString * _header; // +0x50
    NSArray * _displayList; // +0x58
    NSArray * _extDisplayList; // +0x60
    NSString * _tail; // +0x68
    NSString * _feedID; // +0x70
    NSString * _tipsID; // +0x78
    NSString * _liveID; // +0x80
    NSString * _nonceID; // +0x88
    NSString * _noticeID; // +0x90
    NSString * _byPassInfo; // +0x98
    NSString * _revokeID; // +0xa0
    unsigned long long _controlFlag; // +0xa8
    NSString * _reportExtInfo; // +0xb0
    NSString * _sessionBuffer; // +0xb8
    NSString * _pForcePushInfo; // +0xc0
    NSString * _previewTitle; // +0xc8
    NSString * _finderUsername; // +0xd0
    NSString * _bizUsername; // +0xd8
    NSString * _liveAudiencePlayUrl; // +0xe0
    NSString * _liveDescription; // +0xe8
    NSString * _xml; // +0xf0
    NSString * _rejectWording; // +0xf8
    NSString * _recoverWording; // +0x100
    NSString * _rejectStatusWording; // +0x108
}
- (id)copyWithZone:(_NSZone *)arg1;
- (id)genStatExtXml;
- (void)parseStateWithXmlReader:(XmlReaderNode_t *)arg1;
- (BOOL)parseExtInfoWithXmlContent:(id)arg1;
- (BOOL)updateExtInfoAttrKey:(id)arg1 value:(id)arg2 toXml:(id)arg3;
- (void)parseExtInfoWithXmlNode:(XmlReaderNode_t *)arg1 content:(id)arg2;
- (BOOL)disableReplace;
- (BOOL)disableBlackNoticeButton;
- (void)setDisableBlackNoticeButton:(BOOL)arg1;
- (BOOL)disableComplaintEntry;
- (BOOL)forceShowLivePush;
- (BOOL)isSubscribe;
- (BOOL)shouldUseDynamicReason;
- (BOOL)shouldRefreshNotifySubscribeStatus;
- (BOOL)bExposed;
- (void)setBExposed:(BOOL)arg1;
- (BOOL)bLiveEnd;
- (void)setBLiveEnd:(BOOL)arg1;
- (BOOL)bRejected;
- (void)setBRejected:(BOOL)arg1;
- (unsigned int)nextRefreshTime;
- (void)setNextRefreshTime:(unsigned int)arg1;
- (id)templateID;
- (void)setTemplateID:(id)arg1;
- (id)avatarUrl;
- (void)setAvatarUrl:(id)arg1;
- (id)nickName;
- (void)setNickName:(id)arg1;
- (id)authIconUrl;
- (void)setAuthIconUrl:(id)arg1;
- (id)thumbImageUrl;
- (void)setThumbImageUrl:(id)arg1;
- (id)header;
- (void)setHeader:(id)arg1;
- (id)displayList;
- (void)setDisplayList:(id)arg1;
- (id)extDisplayList;
- (void)setExtDisplayList:(id)arg1;
- (id)tail;
- (void)setTail:(id)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)tipsID;
- (void)setTipsID:(id)arg1;
- (id)liveID;
- (void)setLiveID:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)noticeID;
- (void)setNoticeID:(id)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (id)revokeID;
- (void)setRevokeID:(id)arg1;
- (unsigned int)ctrlType;
- (void)setCtrlType:(unsigned int)arg1;
- (unsigned int)deliveryTime;
- (void)setDeliveryTime:(unsigned int)arg1;
- (unsigned long long)controlFlag;
- (void)setControlFlag:(unsigned long long)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (id)reportExtInfo;
- (void)setReportExtInfo:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)pForcePushInfo;
- (void)setPForcePushInfo:(id)arg1;
- (id)previewTitle;
- (void)setPreviewTitle:(id)arg1;
- (BOOL)showLivingDot;
- (void)setShowLivingDot:(BOOL)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (unsigned int)identityType;
- (void)setIdentityType:(unsigned int)arg1;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (id)liveAudiencePlayUrl;
- (void)setLiveAudiencePlayUrl:(id)arg1;
- (id)liveDescription;
- (void)setLiveDescription:(id)arg1;
- (BOOL)isLiveAutoPlaying;
- (void)setIsLiveAutoPlaying:(BOOL)arg1;
- (id)xml;
- (void)setXml:(id)arg1;
- (id)rejectWording;
- (void)setRejectWording:(id)arg1;
- (id)recoverWording;
- (void)setRecoverWording:(id)arg1;
- (id)rejectStatusWording;
- (void)setRejectStatusWording:(id)arg1;
- (unsigned int)noticeType;
- (void)setNoticeType:(unsigned int)arg1;
- (BOOL)useCustomNotifySetting;
- (void)setUseCustomNotifySetting:(BOOL)arg1;
- (void).cxx_destruct;
@end

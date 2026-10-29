@interface CExtendInfoOfAPP : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    NSString * m_nsAppID; // +0x8
    unsigned int m_uiApiSDKVersion; // +0x10
    NSString * m_nsTitle; // +0x18
    NSString * m_nsDesc; // +0x20
    NSString * m_nsUsername; // +0x28
    NSString * m_nsAppAction; // +0x30
    unsigned int m_uiAppMsgInnerType; // +0x38
    unsigned int m_uiShowType; // +0x3c
    NSString * m_nsAppContent; // +0x40
    NSString * m_nsAppMediaUrl; // +0x48
    NSString * m_nsAppMediaLowUrl; // +0x50
    NSString * m_nsAppMediaDataUrl; // +0x58
    NSString * m_nsAppMediaLowBandDataUrl; // +0x60
    unsigned int m_uiAppDataSize; // +0x68
    NSString * m_nsAppAttachID; // +0x70
    unsigned int m_fullXmlLength; // +0x78
    unsigned int m_realInnerType; // +0x7c
    NSString * m_mediaId; // +0x80
    NSString * m_clientAppDataId; // +0x88
    NSString * m_nsAppFileExt; // +0x90
    NSString * m_nsMsgAttachUrl; // +0x98
    unsigned int m_uiAppVersion; // +0xa0
    unsigned int m_uiAppExtShowType; // +0xa4
    NSString * m_nsAppExtInfo; // +0xa8
    NSString * m_nsSourceUsername; // +0xb0
    NSString * m_nsSourceDisplayname; // +0xb8
    NSString * m_nsMsgFileUploadToken; // +0xc0
    long long m_overwriteNewMsgId; // +0xc8
    unsigned int m_uiRemindTime; // +0xd0
    unsigned int m_uiRemindId; // +0xd4
    NSString * m_nsRemindAttachId; // +0xd8
    unsigned int m_uiRemindAttachTotalLen; // +0xe0
    unsigned int m_uiRemindFormat; // +0xe4
    unsigned int m_uiOriginFormat; // +0xe8
    unsigned int m_uiOriginMsgSvrId; // +0xec
    NSString * m_nsThumbUrl; // +0xf0
    NSString * m_nsAppName; // +0xf8
    NSArray * m_arrReaderWaps; // +0x100
    unsigned int m_mmreaderSubType; // +0x108
    unsigned int m_uiEncryVer; // +0x10c
    NSString * m_nsImgSrc; // +0x110
    NSString * m_nsAppMediaTagName; // +0x118
    NSString * m_nsTemplateId; // +0x120
    unsigned int m_uiTemplateType; // +0x128
    MMTemplateMsg3rdAppShowItem * m_oTemplateMsg3rdAppShowItem; // +0x130
    BOOL m_bForbidJumpProfileWhenClickAvatar; // +0x138
    AppProductItem * m_oAppProductItem; // +0x140
    MallProductItem * m_oMallProductItem; // +0x148
    CardTicketItem * m_oCardTicketItem; // +0x150
    GiftCardItem * m_oGiftCardItem; // +0x158
    EmoticonSharedItem * m_oEmoticonSharedItem; // +0x160
    EmotionDesignerSharedItem * m_oEmotionDesignerSharedItem; // +0x168
    EmotionPageSharedItem * m_oEmotionPageShareItem; // +0x170
    AppTVItem * m_oAppTVItem; // +0x178
    FavoritesItem * m_oRecordItem; // +0x180
    HardWareItem * m_oHardWareItem; // +0x188
    WCPayInfoItem * m_oWCPayInfoItem; // +0x190
    EmoticonAppMsgItem * m_oEmoticonAppMsgItem; // +0x198
    iWatchAppMsgItem * m_oiWatchMsgItem; // +0x1a0
    WCCanvasPageItem * m_oCanvasPageItem; // +0x1a8
    OpenSDKAppBrandItem * m_openSDKAppBrandItem; // +0x1b0
    WebviewSharedItem * m_oWebviewSharedItem; // +0x1b8
    MpShareTraceItem * m_oMpShareTraceItem; // +0x1c0
    WAAppMsgItem * m_oWAAppItem; // +0x1c8
    NSString * m_nsAppMessageExt; // +0x1d0
    NSString * m_nsAppMessageAction; // +0x1d8
    NSString * m_nsStreamVideoUrl; // +0x1e0
    unsigned int m_uiStreamVideoTime; // +0x1e8
    NSString * m_nsStreamVideoTitle; // +0x1f0
    NSString * m_nsStreamVideoWording; // +0x1f8
    NSString * m_nsStreamVideoWebUrl; // +0x200
    NSString * m_nsStreamVideoThumbUrl; // +0x208
    NSString * m_nsStreamVideoPublishId; // +0x210
    NSString * m_nsStreamVideoAdUxInfo; // +0x218
    NSString * m_nsMsgThumbUrl; // +0x220
    NSString * m_nsMsgThumbMd5; // +0x228
    NSString * m_nsMsgThumbAesKey; // +0x230
    unsigned int m_uiMsgThumbSize; // +0x238
    unsigned int m_uiMsgThumbWidth; // +0x23c
    unsigned int m_uiMsgThumbHeight; // +0x240
    NSString * m_nsEmoticonMD5; // +0x248
    NSString * m_nsAesKey; // +0x250
    BOOL m_bIsForceUpdate; // +0x258
    NSString * m_nsStatExtStr; // +0x260
    MessageExpItem * m_oMsgExpItem; // +0x268
    NSString * m_authkey; // +0x270
    int m_nDownloadLimit; // +0x278
    unsigned int m_uiDownloadPercent; // +0x27c
    WSVideoModel * m_videoFlowInfo; // +0x280
    NSString * m_nsAttachFileKey; // +0x288
    unsigned int m_uiContinueUploadCount; // +0x290
    AppMsgShareItem * m_nsShareItem; // +0x298
    unsigned int m_subscrMsgScopeType; // +0x2a0
    unsigned int m_templateMsgBusinessType; // +0x2a4
    BrandMpVideoItem * m_brandMpVideoItem; // +0x2a8
    NSString * m_nsSongAlbumUrl; // +0x2b0
    NSString * m_nsSongLyric; // +0x2b8
    NSString * m_nsSolitaireXml; // +0x2c0
    NSString * m_nsOriginTitle; // +0x2c8
    WCFinderMessageShareNameCard * m_finderShareNameCard; // +0x2d0
    MMLiveAppMsgInnerItem * liveAppMsgInnerItem; // +0x2d8
    PatMessageWrap * patMessageWrap; // +0x2e0
    GameShareNameCard * m_gameShareNameCard; // +0x2e8
    GameLifeItem * m_gameLifeItem; // +0x2f0
    LiteAppSharedItem * m_liteAppSharedItem; // +0x2f8
    GameShareCardItem * m_gameShareCardItem; // +0x300
    WxGameCardItem * m_wxGameCardItem; // +0x308
    NSString * m_nsGuardianTicket; // +0x310
    NSString * m_nsTempAccessBizKey; // +0x318
    unsigned int m_uiTempAccessBizType; // +0x320
    unsigned int m_uiTempAccessAgreenTime; // +0x324
    NSString * m_platformSignature; // +0x328
    NSString * m_thumbDataHash; // +0x330
    NSString * m_hdAlbumThumbFileHash; // +0x338
    WASourceWeappInfo * m_sourceWeappInfo; // +0x340
    BOOL m_isDirectSend; // +0x348
    BOOL m_bAppAttachExistInSvr; // +0x349
    BOOL m_isReaderForbidForward; // +0x34a
    BOOL m_isHideHead; // +0x34b
    BOOL roomToolsFlag; // +0x34c
    BOOL bAppMsgCompleteFlag; // +0x34d
    unsigned int m_uiWeAppState; // +0x350
    unsigned int m_uiWeAppVersion; // +0x354
    unsigned int m_isAudioTemplate; // +0x358
    unsigned int m_isAcceptWithForcePush; // +0x35c
    unsigned int m_uiDirectShare; // +0x360
    unsigned int m_forwardFlag; // +0x364
    int realTimeUploadStatus; // +0x368
    unsigned int _m_referFromScene; // +0x36c
    unsigned int _guardianBindScene; // +0x370
    CMessageWrap * m_refMessageWrap; // +0x378
    EmotionPageSharedItem * m_oEmotionPageSharedItem; // +0x380
    NSString * m_nsShareOriginUrl; // +0x388
    NSString * m_nsShareOpenUrl; // +0x390
    NSMutableDictionary * m_dicStatParas; // +0x398
    NSString * m_nsMsgMd5; // +0x3a0
    NSString * m_audioTemplateUrl; // +0x3a8
    WCPayExtensionInfo * m_payExtensionInfo; // +0x3b0
    NSString * m_forcePushInfo; // +0x3b8
    AppMMScheduleItem * m_scheduleItem; // +0x3c0
    ScanCodeHistoryItem * m_scanHistoryItem; // +0x3c8
    WCPayThirdInfo * m_thirdC2CInfo; // +0x3d0
    CMessageWrap * referingMessageWrap; // +0x3d8
    NSString * referMessageSenderUsrname; // +0x3e0
    NSString * referMessageSenderDisplayName; // +0x3e8
    WCFinderContentColumnSharedItem * finderContentColumnSharedItem; // +0x3f0
    NSString * lanTransferInfo; // +0x3f8
    NSString * syncRecordCtx; // +0x400
    WXSecretMsgItem * m_secretMsgItem; // +0x408
    NSString * _m_nsEmojiInfoBase64; // +0x410
    VoiceAppMsgItem * _m_oVoiceAppMsgItem; // +0x418
    WCFinderMessageVerifyItem * _finderVerifyItem; // +0x420
    WCFinderShareToMomentsItem * _finderShareItem; // +0x428
    WCMegaVideoShareItem * _finderLongVideoShareItem; // +0x430
    WCFinderTopicShareItem * _finderTopicShareItem; // +0x438
    WCFinderShareItemContainer * _finderShareItemContainer; // +0x440
    WCFinderLiveShareItem * _finderLiveShareItem; // +0x448
    WCFinderThemeLiveStreamShareItem * _finderThemeLiveShareItem; // +0x450
    WCFinderMessageGuaranteeItem * _finderGuarantee; // +0x458
    WCFinderLiveProductShareItem * _finderLiveProductShareItem; // +0x460
    WCFinderOrderShareItem * _finderOrderShareItem; // +0x468
    MMFinderLiveLotteryReqInfo * _lotteryReqInfo; // +0x470
    NSString * _tip; // +0x478
    WCFinderLiveShopWindowShareItem * _finderShopWindowShare; // +0x480
    MMMusicShareItem * _m_musicShareItem; // +0x488
    WCPayPocketMoneyMsgItem * _m_payPocketMoneyItem; // +0x490
    EcsGiftMsgItem * _m_ecsGiftMsgItem; // +0x498
    TingShareListenItem * _tingListenItem; // +0x4a0
    TingShareCategoryItem * _tingCategoryItem; // +0x4a8
    TingShareLyricsItem * _tingLyricsItem; // +0x4b0
    NotifyMsgItem * _m_notifyMsgItem; // +0x4b8
    ServiceNotifyMessageItem * _m_serviceNotifyMsgItem; // +0x4c0
    NSString * _teenagerAuthorizationTitle; // +0x4c8
    NSString * _teenagerAuthorizationContent; // +0x4d0
    NSString * _teenagerAuthorizationAgreeDesc; // +0x4d8
    GroupNoticeItem * _groupNoticeItem; // +0x4e0
    NSString * _announcementId; // +0x4e8
    WeChatIntroductionItem * _introductionItem; // +0x4f0
}
+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
- (void)ChangeForReader;
- (void)ChangeForAppMsgState;
- (void)appendToString:(id)arg1 withTagName:(id)arg2 value:(id)arg3;
- (id)GetAppMsgAttachContent;
- (id)init;
- (void)dealloc;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)ChangeForDisplay;
- (void)ChangeForSolitaireNode:(XmlReaderNode_t *)arg1;
- (void)parseStreamVideoNode:(XmlReaderNode_t *)arg1;
- (id)xmlOfStreamVideo;
- (id)GetContent;
- (id)GetBufferUploadContent;
- (void)UpdateContent:(id)arg1;
- (id)getFileExt;
- (unsigned int)GetPreviewType;
- (BOOL)isShowAppBottomButton;
- (BOOL)isShowAppMessageBlockButton;
- (BOOL)GetDownloadThumbStatus:(unsigned int *)arg1;
- (id)GetThumbPath;
- (id)GetDownloadThumbPath;
- (id)m_nsAttachFileKey;
- (id)m_nsMsgThumbUrl;
- (id)m_nsThumbUrl;
- (unsigned int)m_uiMsgThumbWidth;
- (unsigned int)m_uiMsgThumbHeight;
- (id)messageFTSTextForDisplay;
- (id)getTiTleOrDesc;
- (BOOL)canNotUsingDesc;
- (id)messageFTSText;
- (id)getAppMessageFTSText;
- (void)parseFromReferMsgXMLNode:(XmlReaderNode_t *)arg1;
- (void)parseFavWeAppPushMessage:(id)arg1;
- (id)msgReferSummaryAndReplace:(BOOL)arg1;
- (id)genReferIconWithName:(id)arg1 useCustomBkg:(BOOL)arg2;
- (id)m_nsAesKey;
- (void)setM_nsAesKey:(id)arg1;
- (id)m_nsAppAction;
- (void)setM_nsAppAction:(id)arg1;
- (id)m_nsAppAttachID;
- (void)setM_nsAppAttachID:(id)arg1;
- (id)m_nsAppContent;
- (void)setM_nsAppContent:(id)arg1;
- (id)m_nsUsername;
- (void)setM_nsUsername:(id)arg1;
- (id)m_nsAppExtInfo;
- (void)setM_nsAppExtInfo:(id)arg1;
- (id)m_nsAppFileExt;
- (void)setM_nsAppFileExt:(id)arg1;
- (id)m_nsAppID;
- (void)setM_nsAppID:(id)arg1;
- (id)m_nsAppMediaDataUrl;
- (void)setM_nsAppMediaDataUrl:(id)arg1;
- (id)m_nsAppMediaLowBandDataUrl;
- (void)setM_nsAppMediaLowBandDataUrl:(id)arg1;
- (id)m_nsAppMediaLowUrl;
- (void)setM_nsAppMediaLowUrl:(id)arg1;
- (id)m_nsAppMediaUrl;
- (void)setM_nsAppMediaUrl:(id)arg1;
- (id)m_nsAppName;
- (void)setM_nsAppName:(id)arg1;
- (id)m_nsDesc;
- (void)setM_nsDesc:(id)arg1;
- (id)m_nsEmoticonMD5;
- (void)setM_nsEmoticonMD5:(id)arg1;
- (id)m_nsMsgAttachUrl;
- (void)setM_nsMsgAttachUrl:(id)arg1;
- (id)m_nsMsgThumbAesKey;
- (void)setM_nsMsgThumbAesKey:(id)arg1;
- (void)setM_nsMsgThumbUrl:(id)arg1;
- (id)m_nsMsgThumbMd5;
- (void)setM_nsMsgThumbMd5:(id)arg1;
- (id)m_oMsgExpItem;
- (void)setM_oMsgExpItem:(id)arg1;
- (id)m_nsRemindAttachId;
- (void)setM_nsRemindAttachId:(id)arg1;
- (id)m_nsSourceDisplayname;
- (void)setM_nsSourceDisplayname:(id)arg1;
- (id)m_nsSourceUsername;
- (void)setM_nsSourceUsername:(id)arg1;
- (void)setM_nsThumbUrl:(id)arg1;
- (id)m_nsTitle;
- (void)setM_nsTitle:(id)arg1;
- (unsigned int)m_uiApiSDKVersion;
- (void)setM_uiApiSDKVersion:(unsigned int)arg1;
- (unsigned int)m_fullXmlLength;
- (void)setM_fullXmlLength:(unsigned int)arg1;
- (unsigned int)m_realInnerType;
- (void)setM_realInnerType:(unsigned int)arg1;
- (id)m_mediaId;
- (void)setM_mediaId:(id)arg1;
- (id)m_clientAppDataId;
- (void)setM_clientAppDataId:(id)arg1;
- (unsigned int)m_uiAppDataSize;
- (void)setM_uiAppDataSize:(unsigned int)arg1;
- (unsigned int)m_uiAppExtShowType;
- (void)setM_uiAppExtShowType:(unsigned int)arg1;
- (unsigned int)m_uiAppMsgInnerType;
- (void)setM_uiAppMsgInnerType:(unsigned int)arg1;
- (unsigned int)m_uiAppVersion;
- (void)setM_uiAppVersion:(unsigned int)arg1;
- (unsigned int)m_uiEncryVer;
- (void)setM_uiEncryVer:(unsigned int)arg1;
- (void)setM_uiMsgThumbHeight:(unsigned int)arg1;
- (unsigned int)m_uiMsgThumbSize;
- (void)setM_uiMsgThumbSize:(unsigned int)arg1;
- (void)setM_uiMsgThumbWidth:(unsigned int)arg1;
- (unsigned int)m_uiOriginFormat;
- (void)setM_uiOriginFormat:(unsigned int)arg1;
- (unsigned int)m_uiOriginMsgSvrId;
- (void)setM_uiOriginMsgSvrId:(unsigned int)arg1;
- (unsigned int)m_uiRemindAttachTotalLen;
- (void)setM_uiRemindAttachTotalLen:(unsigned int)arg1;
- (unsigned int)m_uiRemindFormat;
- (void)setM_uiRemindFormat:(unsigned int)arg1;
- (unsigned int)m_uiRemindId;
- (void)setM_uiRemindId:(unsigned int)arg1;
- (unsigned int)m_uiRemindTime;
- (void)setM_uiRemindTime:(unsigned int)arg1;
- (unsigned int)m_uiShowType;
- (void)setM_uiShowType:(unsigned int)arg1;
- (id)m_arrReaderWaps;
- (void)setM_arrReaderWaps:(id)arg1;
- (unsigned int)m_mmreaderSubType;
- (void)setM_mmreaderSubType:(unsigned int)arg1;
- (id)m_refMessageWrap;
- (void)setM_refMessageWrap:(id)arg1;
- (id)m_nsImgSrc;
- (void)setM_nsImgSrc:(id)arg1;
- (id)m_nsAppMediaTagName;
- (void)setM_nsAppMediaTagName:(id)arg1;
- (id)m_oMallProductItem;
- (void)setM_oMallProductItem:(id)arg1;
- (id)m_oAppProductItem;
- (void)setM_oAppProductItem:(id)arg1;
- (id)m_oCardTicketItem;
- (void)setM_oCardTicketItem:(id)arg1;
- (id)m_oEmoticonSharedItem;
- (void)setM_oEmoticonSharedItem:(id)arg1;
- (id)m_oEmotionDesignerSharedItem;
- (void)setM_oEmotionDesignerSharedItem:(id)arg1;
- (id)m_oEmotionPageSharedItem;
- (void)setM_oEmotionPageSharedItem:(id)arg1;
- (id)m_oAppTVItem;
- (void)setM_oAppTVItem:(id)arg1;
- (id)m_oRecordItem;
- (void)setM_oRecordItem:(id)arg1;
- (id)m_oHardWareItem;
- (void)setM_oHardWareItem:(id)arg1;
- (id)m_oWCPayInfoItem;
- (void)setM_oWCPayInfoItem:(id)arg1;
- (id)m_oiWatchMsgItem;
- (void)setM_oiWatchMsgItem:(id)arg1;
- (id)m_nsAppMessageExt;
- (void)setM_nsAppMessageExt:(id)arg1;
- (id)m_nsAppMessageAction;
- (void)setM_nsAppMessageAction:(id)arg1;
- (BOOL)m_bIsForceUpdate;
- (void)setM_bIsForceUpdate:(BOOL)arg1;
- (BOOL)m_isDirectSend;
- (void)setM_isDirectSend:(BOOL)arg1;
- (id)m_oWebviewSharedItem;
- (void)setM_oWebviewSharedItem:(id)arg1;
- (id)m_oMpShareTraceItem;
- (void)setM_oMpShareTraceItem:(id)arg1;
- (id)m_nsTemplateId;
- (void)setM_nsTemplateId:(id)arg1;
- (id)m_nsShareOriginUrl;
- (void)setM_nsShareOriginUrl:(id)arg1;
- (id)m_nsShareOpenUrl;
- (void)setM_nsShareOpenUrl:(id)arg1;
- (id)m_dicStatParas;
- (void)setM_dicStatParas:(id)arg1;
- (BOOL)m_bAppAttachExistInSvr;
- (void)setM_bAppAttachExistInSvr:(BOOL)arg1;
- (id)m_nsMsgMd5;
- (void)setM_nsMsgMd5:(id)arg1;
- (BOOL)m_isReaderForbidForward;
- (void)setM_isReaderForbidForward:(BOOL)arg1;
- (BOOL)m_isHideHead;
- (void)setM_isHideHead:(BOOL)arg1;
- (id)m_nsStreamVideoUrl;
- (void)setM_nsStreamVideoUrl:(id)arg1;
- (unsigned int)m_uiStreamVideoTime;
- (void)setM_uiStreamVideoTime:(unsigned int)arg1;
- (id)m_nsStreamVideoTitle;
- (void)setM_nsStreamVideoTitle:(id)arg1;
- (id)m_nsStreamVideoWording;
- (void)setM_nsStreamVideoWording:(id)arg1;
- (id)m_nsStreamVideoWebUrl;
- (void)setM_nsStreamVideoWebUrl:(id)arg1;
- (id)m_nsStreamVideoThumbUrl;
- (void)setM_nsStreamVideoThumbUrl:(id)arg1;
- (id)m_nsStreamVideoPublishId;
- (void)setM_nsStreamVideoPublishId:(id)arg1;
- (id)m_nsStreamVideoAdUxInfo;
- (void)setM_nsStreamVideoAdUxInfo:(id)arg1;
- (id)m_nsStatExtStr;
- (void)setM_nsStatExtStr:(id)arg1;
- (int)m_nDownloadLimit;
- (void)setM_nDownloadLimit:(int)arg1;
- (id)m_openSDKAppBrandItem;
- (void)setM_openSDKAppBrandItem:(id)arg1;
- (id)m_oCanvasPageItem;
- (void)setM_oCanvasPageItem:(id)arg1;
- (unsigned int)m_uiDownloadPercent;
- (void)setM_uiDownloadPercent:(unsigned int)arg1;
- (id)m_oWAAppItem;
- (void)setM_oWAAppItem:(id)arg1;
- (unsigned int)m_uiWeAppState;
- (void)setM_uiWeAppState:(unsigned int)arg1;
- (unsigned int)m_uiWeAppVersion;
- (void)setM_uiWeAppVersion:(unsigned int)arg1;
- (id)m_audioTemplateUrl;
- (void)setM_audioTemplateUrl:(id)arg1;
- (unsigned int)m_isAudioTemplate;
- (void)setM_isAudioTemplate:(unsigned int)arg1;
- (id)m_payExtensionInfo;
- (void)setM_payExtensionInfo:(id)arg1;
- (unsigned int)m_isAcceptWithForcePush;
- (void)setM_isAcceptWithForcePush:(unsigned int)arg1;
- (id)m_forcePushInfo;
- (void)setM_forcePushInfo:(id)arg1;
- (unsigned int)m_uiTemplateType;
- (void)setM_uiTemplateType:(unsigned int)arg1;
- (id)m_oTemplateMsg3rdAppShowItem;
- (void)setM_oTemplateMsg3rdAppShowItem:(id)arg1;
- (BOOL)m_bForbidJumpProfileWhenClickAvatar;
- (void)setM_bForbidJumpProfileWhenClickAvatar:(BOOL)arg1;
- (id)m_videoFlowInfo;
- (void)setM_videoFlowInfo:(id)arg1;
- (id)m_scheduleItem;
- (void)setM_scheduleItem:(id)arg1;
- (id)m_scanHistoryItem;
- (void)setM_scanHistoryItem:(id)arg1;
- (id)m_thirdC2CInfo;
- (void)setM_thirdC2CInfo:(id)arg1;
- (void)setM_nsAttachFileKey:(id)arg1;
- (unsigned int)m_uiContinueUploadCount;
- (void)setM_uiContinueUploadCount:(unsigned int)arg1;
- (id)m_authkey;
- (void)setM_authkey:(id)arg1;
- (id)m_nsShareItem;
- (void)setM_nsShareItem:(id)arg1;
- (unsigned int)m_subscrMsgScopeType;
- (void)setM_subscrMsgScopeType:(unsigned int)arg1;
- (unsigned int)m_templateMsgBusinessType;
- (void)setM_templateMsgBusinessType:(unsigned int)arg1;
- (id)m_brandMpVideoItem;
- (void)setM_brandMpVideoItem:(id)arg1;
- (id)m_oEmoticonAppMsgItem;
- (void)setM_oEmoticonAppMsgItem:(id)arg1;
- (id)m_nsSongAlbumUrl;
- (void)setM_nsSongAlbumUrl:(id)arg1;
- (id)m_nsSongLyric;
- (void)setM_nsSongLyric:(id)arg1;
- (id)m_nsSolitaireXml;
- (void)setM_nsSolitaireXml:(id)arg1;
- (id)m_nsOriginTitle;
- (void)setM_nsOriginTitle:(id)arg1;
- (unsigned int)m_uiDirectShare;
- (void)setM_uiDirectShare:(unsigned int)arg1;
- (id)m_finderShareNameCard;
- (void)setM_finderShareNameCard:(id)arg1;
- (id)liveAppMsgInnerItem;
- (void)setLiveAppMsgInnerItem:(id)arg1;
- (id)patMessageWrap;
- (void)setPatMessageWrap:(id)arg1;
- (id)referingMessageWrap;
- (void)setReferingMessageWrap:(id)arg1;
- (id)referMessageSenderUsrname;
- (void)setReferMessageSenderUsrname:(id)arg1;
- (id)referMessageSenderDisplayName;
- (void)setReferMessageSenderDisplayName:(id)arg1;
- (BOOL)roomToolsFlag;
- (void)setRoomToolsFlag:(BOOL)arg1;
- (id)m_gameShareNameCard;
- (void)setM_gameShareNameCard:(id)arg1;
- (id)m_gameLifeItem;
- (void)setM_gameLifeItem:(id)arg1;
- (id)finderContentColumnSharedItem;
- (void)setFinderContentColumnSharedItem:(id)arg1;
- (id)m_liteAppSharedItem;
- (void)setM_liteAppSharedItem:(id)arg1;
- (id)m_gameShareCardItem;
- (void)setM_gameShareCardItem:(id)arg1;
- (id)m_wxGameCardItem;
- (void)setM_wxGameCardItem:(id)arg1;
- (BOOL)bAppMsgCompleteFlag;
- (void)setBAppMsgCompleteFlag:(BOOL)arg1;
- (id)m_nsMsgFileUploadToken;
- (void)setM_nsMsgFileUploadToken:(id)arg1;
- (long long)m_overwriteNewMsgId;
- (void)setM_overwriteNewMsgId:(long long)arg1;
- (id)lanTransferInfo;
- (void)setLanTransferInfo:(id)arg1;
- (id)syncRecordCtx;
- (void)setSyncRecordCtx:(id)arg1;
- (unsigned int)m_forwardFlag;
- (void)setM_forwardFlag:(unsigned int)arg1;
- (id)m_secretMsgItem;
- (void)setM_secretMsgItem:(id)arg1;
- (int)realTimeUploadStatus;
- (void)setRealTimeUploadStatus:(int)arg1;
- (id)m_oGiftCardItem;
- (void)setM_oGiftCardItem:(id)arg1;
- (id)m_nsGuardianTicket;
- (void)setM_nsGuardianTicket:(id)arg1;
- (id)m_nsTempAccessBizKey;
- (void)setM_nsTempAccessBizKey:(id)arg1;
- (unsigned int)m_uiTempAccessBizType;
- (void)setM_uiTempAccessBizType:(unsigned int)arg1;
- (unsigned int)m_uiTempAccessAgreenTime;
- (void)setM_uiTempAccessAgreenTime:(unsigned int)arg1;
- (id)m_platformSignature;
- (void)setM_platformSignature:(id)arg1;
- (id)m_thumbDataHash;
- (void)setM_thumbDataHash:(id)arg1;
- (id)m_hdAlbumThumbFileHash;
- (void)setM_hdAlbumThumbFileHash:(id)arg1;
- (id)m_sourceWeappInfo;
- (void)setM_sourceWeappInfo:(id)arg1;
- (id)m_nsEmojiInfoBase64;
- (void)setM_nsEmojiInfoBase64:(id)arg1;
- (id)m_oVoiceAppMsgItem;
- (void)setM_oVoiceAppMsgItem:(id)arg1;
- (id)finderVerifyItem;
- (void)setFinderVerifyItem:(id)arg1;
- (id)finderShareItem;
- (void)setFinderShareItem:(id)arg1;
- (id)finderLongVideoShareItem;
- (void)setFinderLongVideoShareItem:(id)arg1;
- (id)finderTopicShareItem;
- (void)setFinderTopicShareItem:(id)arg1;
- (id)finderShareItemContainer;
- (void)setFinderShareItemContainer:(id)arg1;
- (id)finderLiveShareItem;
- (void)setFinderLiveShareItem:(id)arg1;
- (id)finderThemeLiveShareItem;
- (void)setFinderThemeLiveShareItem:(id)arg1;
- (id)finderGuarantee;
- (void)setFinderGuarantee:(id)arg1;
- (id)finderLiveProductShareItem;
- (void)setFinderLiveProductShareItem:(id)arg1;
- (id)finderOrderShareItem;
- (void)setFinderOrderShareItem:(id)arg1;
- (id)lotteryReqInfo;
- (void)setLotteryReqInfo:(id)arg1;
- (id)tip;
- (void)setTip:(id)arg1;
- (id)finderShopWindowShare;
- (void)setFinderShopWindowShare:(id)arg1;
- (unsigned int)m_referFromScene;
- (void)setM_referFromScene:(unsigned int)arg1;
- (id)m_musicShareItem;
- (void)setM_musicShareItem:(id)arg1;
- (id)m_payPocketMoneyItem;
- (void)setM_payPocketMoneyItem:(id)arg1;
- (id)m_ecsGiftMsgItem;
- (void)setM_ecsGiftMsgItem:(id)arg1;
- (id)tingListenItem;
- (void)setTingListenItem:(id)arg1;
- (id)tingCategoryItem;
- (void)setTingCategoryItem:(id)arg1;
- (id)tingLyricsItem;
- (void)setTingLyricsItem:(id)arg1;
- (id)m_notifyMsgItem;
- (void)setM_notifyMsgItem:(id)arg1;
- (id)m_serviceNotifyMsgItem;
- (void)setM_serviceNotifyMsgItem:(id)arg1;
- (unsigned int)guardianBindScene;
- (void)setGuardianBindScene:(unsigned int)arg1;
- (id)teenagerAuthorizationTitle;
- (void)setTeenagerAuthorizationTitle:(id)arg1;
- (id)teenagerAuthorizationContent;
- (void)setTeenagerAuthorizationContent:(id)arg1;
- (id)teenagerAuthorizationAgreeDesc;
- (void)setTeenagerAuthorizationAgreeDesc:(id)arg1;
- (id)groupNoticeItem;
- (void)setGroupNoticeItem:(id)arg1;
- (id)announcementId;
- (void)setAnnouncementId:(id)arg1;
- (id)introductionItem;
- (void)setIntroductionItem:(id)arg1;
- (void).cxx_destruct;
@end


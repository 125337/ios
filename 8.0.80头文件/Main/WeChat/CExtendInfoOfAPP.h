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
    unsigned long long m_uiAppDataSize; // +0x68
    NSString * m_nsAppAttachID; // +0x70
    unsigned int m_fullXmlLength; // +0x78
    unsigned int m_realInnerType; // +0x7c
    NSString * m_mediaId; // +0x80
    NSString * m_clientAppDataId; // +0x88
    NSString * m_nsAppFileExt; // +0x90
    NSString * m_nsAppFileName; // +0x98
    NSString * m_nsMsgAttachUrl; // +0xa0
    unsigned int m_uiAppVersion; // +0xa8
    unsigned int m_uiAppExtShowType; // +0xac
    NSString * m_nsAppExtInfo; // +0xb0
    NSString * m_nsSourceUsername; // +0xb8
    NSString * m_nsSourceDisplayname; // +0xc0
    NSString * m_nsMsgFileUploadToken; // +0xc8
    long long m_overwriteNewMsgId; // +0xd0
    unsigned int m_uiRemindTime; // +0xd8
    unsigned int m_uiRemindId; // +0xdc
    NSString * m_nsRemindAttachId; // +0xe0
    unsigned int m_uiRemindAttachTotalLen; // +0xe8
    unsigned int m_uiRemindFormat; // +0xec
    unsigned int m_uiOriginFormat; // +0xf0
    unsigned int m_uiOriginMsgSvrId; // +0xf4
    NSString * m_nsThumbUrl; // +0xf8
    NSString * m_nsAppName; // +0x100
    NSArray * m_arrReaderWaps; // +0x108
    NSArray * m_mergeArrReaderWaps; // +0x110
    unsigned int m_mmreaderSubType; // +0x118
    unsigned int m_uiEncryVer; // +0x11c
    NSString * m_nsImgSrc; // +0x120
    NSString * m_nsAppMediaTagName; // +0x128
    NSString * m_nsTemplateId; // +0x130
    unsigned int m_uiTemplateType; // +0x138
    MMTemplateMsg3rdAppShowItem * m_oTemplateMsg3rdAppShowItem; // +0x140
    BOOL m_bForbidJumpProfileWhenClickAvatar; // +0x148
    AppProductItem * m_oAppProductItem; // +0x150
    MallProductItem * m_oMallProductItem; // +0x158
    CardTicketItem * m_oCardTicketItem; // +0x160
    GiftCardItem * m_oGiftCardItem; // +0x168
    EmoticonSharedItem * m_oEmoticonSharedItem; // +0x170
    EmotionDesignerSharedItem * m_oEmotionDesignerSharedItem; // +0x178
    EmotionPageSharedItem * m_oEmotionPageShareItem; // +0x180
    AppTVItem * m_oAppTVItem; // +0x188
    FavoritesItem * m_oRecordItem; // +0x190
    HardWareItem * m_oHardWareItem; // +0x198
    WCPayInfoItem * m_oWCPayInfoItem; // +0x1a0
    EmoticonAppMsgItem * m_oEmoticonAppMsgItem; // +0x1a8
    iWatchAppMsgItem * m_oiWatchMsgItem; // +0x1b0
    WCCanvasPageItem * m_oCanvasPageItem; // +0x1b8
    OpenSDKAppBrandItem * m_openSDKAppBrandItem; // +0x1c0
    WebviewSharedItem * m_oWebviewSharedItem; // +0x1c8
    MpShareTraceItem * m_oMpShareTraceItem; // +0x1d0
    WAAppMsgItem * m_oWAAppItem; // +0x1d8
    NSString * m_nsAppMessageExt; // +0x1e0
    NSString * m_nsAppMessageAction; // +0x1e8
    NSString * m_nsStreamVideoUrl; // +0x1f0
    unsigned int m_uiStreamVideoTime; // +0x1f8
    NSString * m_nsStreamVideoTitle; // +0x200
    NSString * m_nsStreamVideoWording; // +0x208
    NSString * m_nsStreamVideoWebUrl; // +0x210
    NSString * m_nsStreamVideoThumbUrl; // +0x218
    NSString * m_nsStreamVideoPublishId; // +0x220
    NSString * m_nsStreamVideoAdUxInfo; // +0x228
    NSString * m_nsMsgThumbUrl; // +0x230
    NSString * m_nsMsgThumbMd5; // +0x238
    NSString * m_nsMsgThumbAesKey; // +0x240
    unsigned int m_uiMsgThumbSize; // +0x248
    unsigned int m_uiMsgThumbWidth; // +0x24c
    unsigned int m_uiMsgThumbHeight; // +0x250
    NSString * m_nsEmoticonMD5; // +0x258
    NSString * m_nsAesKey; // +0x260
    BOOL m_bIsForceUpdate; // +0x268
    NSString * m_nsStatExtStr; // +0x270
    MessageExpItem * m_oMsgExpItem; // +0x278
    NSString * m_authkey; // +0x280
    int m_nDownloadLimit; // +0x288
    unsigned int m_uiDownloadPercent; // +0x28c
    WSVideoModel * m_videoFlowInfo; // +0x290
    NSString * m_nsAttachFileKey; // +0x298
    unsigned int m_uiContinueUploadCount; // +0x2a0
    AppMsgShareItem * m_nsShareItem; // +0x2a8
    unsigned int m_subscrMsgScopeType; // +0x2b0
    unsigned int m_templateMsgBusinessType; // +0x2b4
    BrandMpVideoItem * m_brandMpVideoItem; // +0x2b8
    NSString * m_nsSongAlbumUrl; // +0x2c0
    NSString * m_nsSongLyric; // +0x2c8
    NSString * m_nsSolitaireXml; // +0x2d0
    NSString * m_nsOriginTitle; // +0x2d8
    WCFinderMessageShareNameCard * m_finderShareNameCard; // +0x2e0
    PhotoAccountShareNameCard * m_photoAccountShareNameCard; // +0x2e8
    FavoritePhotoAccountNameCard * m_favPhotoAccountShareNameCard; // +0x2f0
    PatMessageWrap * patMessageWrap; // +0x2f8
    GameShareNameCard * m_gameShareNameCard; // +0x300
    GameLifeItem * m_gameLifeItem; // +0x308
    LiteAppSharedItem * m_liteAppSharedItem; // +0x310
    GameShareCardItem * m_gameShareCardItem; // +0x318
    WxGameCardItem * m_wxGameCardItem; // +0x320
    EcsKFMsgItem * m_ecsKFMsgItem; // +0x328
    NSString * m_nsGuardianTicket; // +0x330
    NSString * m_nsTempAccessBizKey; // +0x338
    unsigned int m_uiTempAccessBizType; // +0x340
    unsigned int m_uiTempAccessAgreenTime; // +0x344
    NSString * m_platformSignature; // +0x348
    NSString * m_thumbDataHash; // +0x350
    NSString * m_hdAlbumThumbFileHash; // +0x358
    unsigned int m_opensdkShareIsModified; // +0x360
    WASourceWeappInfo * m_sourceWeappInfo; // +0x368
    BOOL m_deleteAttachFileAfterSend; // +0x370
    NSString * m_nsMd5SourceFileId; // +0x378
    BOOL m_isDirectSend; // +0x380
    BOOL m_bAppAttachExistInSvr; // +0x381
    BOOL m_isReaderForbidForward; // +0x382
    BOOL m_isHideHead; // +0x383
    BOOL m_isNotifyTemplate; // +0x384
    BOOL m_isAcceptWithNotify; // +0x385
    BOOL m_isNotifyByAutoNotify; // +0x386
    BOOL roomToolsFlag; // +0x387
    BOOL bAppMsgCompleteFlag; // +0x388
    unsigned int m_uiWeAppState; // +0x38c
    unsigned int m_uiWeAppVersion; // +0x390
    unsigned int m_isAudioTemplate; // +0x394
    unsigned int m_isAcceptWithForcePush; // +0x398
    unsigned int m_uiDirectShare; // +0x39c
    unsigned int m_uiQuickReply; // +0x3a0
    unsigned int m_forwardFlag; // +0x3a4
    unsigned int m_chatBotCardMsgType; // +0x3a8
    unsigned int _m_uiTemplateSubType; // +0x3ac
    unsigned int _m_openWeAppBusinessScene; // +0x3b0
    unsigned int _m_referFromScene; // +0x3b4
    unsigned int _guardianBindScene; // +0x3b8
    CMessageWrap * m_refMessageWrap; // +0x3c0
    EmotionPageSharedItem * m_oEmotionPageSharedItem; // +0x3c8
    NSString * m_nsTemplateUniqueId; // +0x3d0
    NSString * m_nsShareOriginUrl; // +0x3d8
    NSString * m_nsShareOpenUrl; // +0x3e0
    NSMutableDictionary * m_dicStatParas; // +0x3e8
    NSString * m_nsMsgMd5; // +0x3f0
    NSString * m_audioTemplateUrl; // +0x3f8
    WCPayExtensionInfo * m_payExtensionInfo; // +0x400
    NSString * m_forcePushInfo; // +0x408
    unsigned long long m_templateMsgSendTimeMs; // +0x410
    AppMMScheduleItem * m_scheduleItem; // +0x418
    ScanCodeHistoryItem * m_scanHistoryItem; // +0x420
    WCPayThirdInfo * m_thirdC2CInfo; // +0x428
    WCPayThirdInfoV3 * m_thirdC2CInfoV3; // +0x430
    NSString * referMessageSenderUsrname; // +0x438
    NSString * referMessageSenderDisplayName; // +0x440
    WCFinderContentColumnSharedItem * finderContentColumnSharedItem; // +0x448
    NSString * lanTransferInfo; // +0x450
    NSString * syncRecordCtx; // +0x458
    WXSecretMsgItem * m_secretMsgItem; // +0x460
    NSString * m_cbtThinkingContent; // +0x468
    long long m_cbtOverwriteSvrId; // +0x470
    NSString * m_chatBotCardData; // +0x478
    NSString * _m_nsEmojiInfoBase64; // +0x480
    VoiceAppMsgItem * _m_oVoiceAppMsgItem; // +0x488
    WAVoipCallInfo * _m_oVoipCallInfo; // +0x490
    NSString * _m_openWeAppNativeExtraData; // +0x498
    WCFinderMessageVerifyItem * _finderVerifyItem; // +0x4a0
    WCFinderShareToMomentsItem * _finderShareItem; // +0x4a8
    WCMegaVideoShareItem * _finderLongVideoShareItem; // +0x4b0
    WCFinderTopicShareItem * _finderTopicShareItem; // +0x4b8
    WCFinderShareItemContainer * _finderShareItemContainer; // +0x4c0
    WCFinderCollectionShareItem * _finderCollectionShareItem; // +0x4c8
    WCFinderLiveShareItem * _finderLiveShareItem; // +0x4d0
    WCFinderThemeLiveStreamShareItem * _finderThemeLiveShareItem; // +0x4d8
    WCFinderMessageGuaranteeItem * _finderGuarantee; // +0x4e0
    WCFinderLiveProductShareItem * _finderLiveProductShareItem; // +0x4e8
    WCFinderOrderShareItem * _finderOrderShareItem; // +0x4f0
    VoIPMultiTalkMessageItem * _voipMultiTalkMessageItem; // +0x4f8
    MMFinderLiveLotteryReqInfo * _lotteryReqInfo; // +0x500
    NSString * _tip; // +0x508
    WCFinderLiveShopWindowShareItem * _finderShopWindowShare; // +0x510
    MMMusicShareItem * _m_musicShareItem; // +0x518
    WCPayPocketMoneyMsgItem * _m_payPocketMoneyItem; // +0x520
    EcsGiftMsgItem * _m_ecsGiftMsgItem; // +0x528
    EcsInfoItem * _m_ecsInfo; // +0x530
    TingShareListenItem * _tingListenItem; // +0x538
    TingShareCategoryItem * _tingCategoryItem; // +0x540
    TingShareChatRoomItem * _tingChatRoomItem; // +0x548
    TingShareLyricsItem * _tingLyricsItem; // +0x550
    NotifyMsgItem * _m_notifyMsgItem; // +0x558
    ServiceNotifyMessageItem * _m_serviceNotifyMsgItem; // +0x560
    NSString * _teenagerAuthorizationTitle; // +0x568
    NSString * _teenagerAuthorizationContent; // +0x570
    NSString * _teenagerAuthorizationAgreeDesc; // +0x578
    GroupNoticeItem * _groupNoticeItem; // +0x580
    NSString * _announcementId; // +0x588
    WeChatIntroductionItem * _introductionItem; // +0x590
    NSString * _displayContent; // +0x598
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
- (id)generateChatBotInfoXML;
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
- (id)m_nsTitle;
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
- (id)m_nsAppFileName;
- (void)setM_nsAppFileName:(id)arg1;
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
- (unsigned long long)m_uiAppDataSize;
- (void)setM_uiAppDataSize:(unsigned long long)arg1;
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
- (id)m_mergeArrReaderWaps;
- (void)setM_mergeArrReaderWaps:(id)arg1;
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
- (id)m_nsTemplateUniqueId;
- (void)setM_nsTemplateUniqueId:(id)arg1;
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
- (BOOL)m_isNotifyTemplate;
- (void)setM_isNotifyTemplate:(BOOL)arg1;
- (BOOL)m_isAcceptWithNotify;
- (void)setM_isAcceptWithNotify:(BOOL)arg1;
- (BOOL)m_isNotifyByAutoNotify;
- (void)setM_isNotifyByAutoNotify:(BOOL)arg1;
- (unsigned long long)m_templateMsgSendTimeMs;
- (void)setM_templateMsgSendTimeMs:(unsigned long long)arg1;
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
- (id)m_thirdC2CInfoV3;
- (void)setM_thirdC2CInfoV3:(id)arg1;
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
- (unsigned int)m_uiQuickReply;
- (void)setM_uiQuickReply:(unsigned int)arg1;
- (id)m_finderShareNameCard;
- (void)setM_finderShareNameCard:(id)arg1;
- (id)patMessageWrap;
- (void)setPatMessageWrap:(id)arg1;
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
- (id)m_photoAccountShareNameCard;
- (void)setM_photoAccountShareNameCard:(id)arg1;
- (id)m_favPhotoAccountShareNameCard;
- (void)setM_favPhotoAccountShareNameCard:(id)arg1;
- (id)lanTransferInfo;
- (void)setLanTransferInfo:(id)arg1;
- (id)syncRecordCtx;
- (void)setSyncRecordCtx:(id)arg1;
- (unsigned int)m_forwardFlag;
- (void)setM_forwardFlag:(unsigned int)arg1;
- (id)m_secretMsgItem;
- (void)setM_secretMsgItem:(id)arg1;
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
- (id)m_ecsKFMsgItem;
- (void)setM_ecsKFMsgItem:(id)arg1;
- (id)m_platformSignature;
- (void)setM_platformSignature:(id)arg1;
- (id)m_thumbDataHash;
- (void)setM_thumbDataHash:(id)arg1;
- (id)m_hdAlbumThumbFileHash;
- (void)setM_hdAlbumThumbFileHash:(id)arg1;
- (unsigned int)m_opensdkShareIsModified;
- (void)setM_opensdkShareIsModified:(unsigned int)arg1;
- (id)m_sourceWeappInfo;
- (void)setM_sourceWeappInfo:(id)arg1;
- (BOOL)m_deleteAttachFileAfterSend;
- (void)setM_deleteAttachFileAfterSend:(BOOL)arg1;
- (id)m_cbtThinkingContent;
- (void)setM_cbtThinkingContent:(id)arg1;
- (long long)m_cbtOverwriteSvrId;
- (void)setM_cbtOverwriteSvrId:(long long)arg1;
- (unsigned int)m_chatBotCardMsgType;
- (void)setM_chatBotCardMsgType:(unsigned int)arg1;
- (id)m_chatBotCardData;
- (void)setM_chatBotCardData:(id)arg1;
- (id)m_nsMd5SourceFileId;
- (void)setM_nsMd5SourceFileId:(id)arg1;
- (id)m_nsEmojiInfoBase64;
- (void)setM_nsEmojiInfoBase64:(id)arg1;
- (id)m_oVoiceAppMsgItem;
- (void)setM_oVoiceAppMsgItem:(id)arg1;
- (id)m_oVoipCallInfo;
- (void)setM_oVoipCallInfo:(id)arg1;
- (unsigned int)m_uiTemplateSubType;
- (void)setM_uiTemplateSubType:(unsigned int)arg1;
- (id)m_openWeAppNativeExtraData;
- (void)setM_openWeAppNativeExtraData:(id)arg1;
- (unsigned int)m_openWeAppBusinessScene;
- (void)setM_openWeAppBusinessScene:(unsigned int)arg1;
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
- (id)finderCollectionShareItem;
- (void)setFinderCollectionShareItem:(id)arg1;
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
- (id)voipMultiTalkMessageItem;
- (void)setVoipMultiTalkMessageItem:(id)arg1;
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
- (id)m_ecsInfo;
- (void)setM_ecsInfo:(id)arg1;
- (id)tingListenItem;
- (void)setTingListenItem:(id)arg1;
- (id)tingCategoryItem;
- (void)setTingCategoryItem:(id)arg1;
- (id)tingChatRoomItem;
- (void)setTingChatRoomItem:(id)arg1;
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
- (id)displayContent;
- (void)setDisplayContent:(id)arg1;
- (void).cxx_destruct;
@end

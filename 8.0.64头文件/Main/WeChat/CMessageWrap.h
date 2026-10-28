@interface CMessageWrap : MMObject <WCPlayerMediaExt, ISysNewXmlMsgExtendOperation, IAppMsgPathMgr, IMsgExtendOperation, NSCopying>
{
    BOOL m_bNew; // +0x8
    unsigned int m_uiMesLocalID; // +0xc
    long long m_n64MesSvrID; // +0x10
    NSString * m_nsFromUsr; // +0x18
    NSString * m_nsToUsr; // +0x20
    unsigned int m_uiMessageType; // +0x28
    NSString * m_nsContent; // +0x30
    unsigned int m_uiStatus; // +0x38
    unsigned int m_uiImgStatus; // +0x3c
    unsigned int m_uiMsgFlag; // +0x40
    unsigned int m_uiCreateTime; // +0x44
    NSString * m_nsPushContent; // +0x48
    NSString * m_nsPushTitle; // +0x50
    NSString * m_nsPushPrefix; // +0x58
    NSString * m_nsPushBody; // +0x60
    NSString * m_nsMsgSource; // +0x68
    NSString * m_nsRealChatUsr; // +0x70
    NSData * m_dtThumbnail; // +0x78
    unsigned int m_uiSendTime; // +0x80
    unsigned int m_uiEmojiStatFlag; // +0x84
    NSString * m_nsPattern; // +0x88
    BOOL m_bForward; // +0x90
    BOOL m_bCdnForward; // +0x91
    unsigned int m_uiPercent; // +0x94
    unsigned int m_uiDownloadStatus; // +0x98
    id <IMsgExtendOperation> m_extendInfoWithMsgTypeForBiz; // +0xa0
    id <IMsgExtendOperation> m_extendInfoWithMsgType; // +0xa8
    id <IMsgExtendOperation> m_extendInfoWithFromUsr; // +0xb0
    NSString * m_nsLastDisplayContent; // +0xb8
    BOOL m_isTempSessionMsg; // +0xc0
    BOOL m_isEnterpriseMsg; // +0xc1
    unsigned int m_sequenceId; // +0xc4
    NSString * m_firstSendMsgId; // +0xc8
    unsigned int m_firstSendTime; // +0xd0
    NSString * m_forcePushId; // +0xd8
    unsigned int m_uiShareCardMessageStatus; // +0xe0
    BOOL m_isP8Msg; // +0xe4
    BOOL m_bIsFromBrandSession; // +0xe5
    BOOL m_bIsBrandSendMass; // +0xe6
    BOOL m_bIsBrandServiceMsg; // +0xe7
    BOOL m_bForbidden; // +0xe8
    BOOL m_bIsSubscribeMsg; // +0xe9
    BOOL m_bIsAffBrandMsg; // +0xea
    BOOL m_bIsPreviewMsg; // +0xeb
    BOOL _m_nsAtAll; // +0xec
    BOOL _m_ignoreSoftBank; // +0xed
    BOOL _forbidDisplayInSession; // +0xee
    BOOL _m_bIsAffBrandServiceMsg; // +0xef
    BOOL _m_bIsExpand; // +0xf0
    BOOL _m_bIsTimelineBanned; // +0xf1
    BOOL _m_bIsNotificationOnlyShowInSession; // +0xf2
    BOOL _m_bIsExposed; // +0xf3
    BOOL _m_brandIsValidExpose; // +0xf4
    BOOL _m_bIsShowBigPic; // +0xf5
    BOOL _m_bBrandMainSessionMsgExposed; // +0xf6
    BOOL _m_hasResorted; // +0xf7
    BOOL _m_bShouldShowPriorityNotification; // +0xf8
    BOOL _m_bIsClickPriorityNotificationInTL; // +0xf9
    BOOL _m_bIsShowFinderRedDot; // +0xfa
    BOOL _m_isAITalkingMsg; // +0xfb
    unsigned int m_uiSvrCreateTime; // +0xfc
    unsigned int m_easterEggRandomSeed; // +0x100
    unsigned int m_uiKFType; // +0x104
    unsigned int m_uiBizChatVer; // +0x108
    unsigned int m_bReceiveMessageSwitchStatus; // +0x10c
    unsigned int m_bTextFold; // +0x110
    unsigned int m_uiBizSceneType; // +0x114
    unsigned int m_nsBizChatUserType; // +0x118
    unsigned int m_forwardType; // +0x11c
    unsigned int m_uiIsSenderStatus; // +0x120
    unsigned int _m_uiFinishedLength; // +0x124
    unsigned int _m_intellCmdType; // +0x128
    unsigned int _riskFileFlag; // +0x12c
    unsigned int _unreadMediaExpired; // +0x130
    unsigned int _m_secCtrlFlag; // +0x134
    unsigned int _m_blockRange; // +0x138
    unsigned int _m_mediaToEmoji; // +0x13c
    unsigned int _m_selectLength; // +0x140
    unsigned int _m_forbidLink; // +0x144
    unsigned int _m_previewType; // +0x148
    unsigned int _m_bubbleType; // +0x14c
    unsigned int _m_brandTimelineMsgId; // +0x150
    unsigned int _m_brandTimelineGroupId; // +0x154
    int _m_msgPredict; // +0x158
    unsigned int _m_brandMainSessionExposeCount; // +0x15c
    unsigned int _m_brandMainSessionExposeTotalTime; // +0x160
    unsigned int _m_brandMainSessionExposeMinPos; // +0x164
    unsigned int _recRecycleCardType; // +0x168
    unsigned int _recCardMediaType; // +0x16c
    unsigned int _m_brandCanvasAdExpiredTimeSec; // +0x170
    unsigned int _m_uiMergeShowTime; // +0x174
    unsigned int _m_showAIReply; // +0x178
    unsigned int _sendFailRetCode; // +0x17c
    long long m_easterEggBlockType; // +0x180
    long long m_easterEggIncludedType; // +0x188
    NSString * m_nsKFWorkerOpenID; // +0x190
    NSString * m_nsBizClientMsgID; // +0x198
    NSString * m_nsBizChatId; // +0x1a0
    NSString * m_nsAtUserList; // +0x1a8
    unsigned long long watchMsgSourceType; // +0x1b0
    EmoticonSecurityInfoList * m_emojiSecurityInfoList; // +0x1b8
    NSString * m_nsDisplayName; // +0x1c0
    NSString * m_bizMsgMenuID; // +0x1c8
    NSString * m_openkfMsgMenuID; // +0x1d0
    NSString * m_nsTipsUrl; // +0x1d8
    long long m_bizMsgType; // +0x1e0
    NSData * m_byteBuffer; // +0x1e8
    NSString * m_weappSourceUsername; // +0x1f0
    unsigned long long m_uiPastedFromType; // +0x1f8
    NSString * m_nsSpecifiedChatName; // +0x200
    NSData * m_nsBypMsgExtInfo; // +0x208
    NSString * m_nsWatchUser; // +0x210
    NSString * m_inLenList; // +0x218
    NSString * _m_nsBeforeDisplayContent; // +0x220
    NSString * _m_openImStrId; // +0x228
    NSString * _m_bEncUserName; // +0x230
    long long _m_pushStyle; // +0x238
    NSString * _m_intellCmdData; // +0x240
    NSString * _m_loginTaskId; // +0x248
    NSString * _m_nsBizCliMsgId; // +0x250
    StrongNotificationItemPB * _m_forcePushItem; // +0x258
    NSString * _m_nsProfileRecommendInfo; // +0x260
    NSString * _riskFileMd5List; // +0x268
    NSString * _riskWarningUrl; // +0x270
    NSString * _m_nsShareTipsUrl; // +0x278
    NSString * _m_uuid; // +0x280
    NSString * _m_publisherId; // +0x288
    NSString * _m_initPublisherId; // +0x290
    MMEasterEggMatch * _eggMatch; // +0x298
    NSMutableDictionary * _m_dicForwardParas; // +0x2a0
    NSString * _bypSessionId; // +0x2a8
    unsigned long long _m_brandTLAffMsgId; // +0x2b0
    BrandAffMsgExtraData * _m_brandTLAffMsgExtraData; // +0x2b8
    BSAffMsgExtraData * _m_bsTLAffMsgExtraData; // +0x2c0
    unsigned long long _m_brandTimelineSequenceId; // +0x2c8
    long long _m_bizFlag; // +0x2d0
    NSString * _m_nsBrandRankSessionId; // +0x2d8
    NSString * _m_nsResortBuffer; // +0x2e0
    MMReaderInfo * _m_readerInfo; // +0x2e8
    NSString * _m_nsRecCardId; // +0x2f0
    NSString * _m_nsRecReason; // +0x2f8
    NSString * _m_nsBrandCanvasId; // +0x300
    BrandResortDigestInfo * _m_brandDigestInfo; // +0x308
    long long _m_mergeCount; // +0x310
    CMessageWrap * _referHostMsg; // +0x318
    NSString * _m_nsSignature; // +0x320
    unsigned long long _m_appMsgSourceType; // +0x328
    ShareMsgObj * _shareMsgObj; // +0x330
    NSString * _m_aiMsgWording; // +0x338
    MPPageIdentityInfo * _m_mpPageIdentityInfo; // +0x340
    NSString * _systemMessageWording; // +0x348
    NSString * _systemMessageActionWording; // +0x350
    CMessageWrap * _referingMessageWrap; // +0x358
    MMReferPartialInfo * _referPartialInfo; // +0x360
}
+ (id)getMessageListStatusImage:(unsigned int)arg1;
+ (BOOL)IsVoiceUseCdnDownload;
+ (id)genFileAppMsgWithFileName:(id)arg1 filePath:(id)arg2 fileData:(id)arg3;
+ (void)GetPathOfAppDir:(id)arg1 retStrPath:(id *)arg2;
+ (void)GetPathOfAppImgCacheDir:(id)arg1 retStrPath:(id *)arg2;
+ (void)GetPathOfAppData:(id)arg1 LocalID:(unsigned int)arg2 FileExt:(id)arg3 retStrPath:(id *)arg4;
+ (void)GetPathOfAppDataByUserName:(id)arg1 andMessageWrap:(id)arg2 andAttachId:(id)arg3 andAttachFileExt:(id)arg4 retStrPath:(id *)arg5;
+ (void)GetPathOfAppDataByUserName:(id)arg1 andMessageWrap:(id)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfAppDataTemp:(id)arg1 LocalID:(unsigned int)arg2 AttachId:(id)arg3 retStrPath:(id *)arg4;
+ (void)GetPathOfAppDataTemp:(id)arg1 LocalID:(unsigned int)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfMaskedAppThumb:(id)arg1 LocalID:(unsigned int)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfAppThumb:(id)arg1 LocalID:(unsigned int)arg2 retStrPath:(id *)arg3;
+ (void)GetPathOfAppRemindAttach:(id)arg1 retStrPath:(id *)arg2;
+ (id)localBubbleMessageWrapToUsername:(id)arg1 withWordingMsg:(id)arg2 isVideo:(BOOL)arg3 roomID:(unsigned long long)arg4 roomKey:(unsigned long long)arg5 inviteID:(unsigned int)arg6 inviteID64:(unsigned long long)arg7 duration:(unsigned int)arg8 isCaller:(BOOL)arg9 needRedDot:(BOOL)arg10 isIlink:(BOOL)arg11 callerMemberID:(int)arg12 calleeMemberID:(int)arg13;
+ (id)localBubbleMessageWrapToUsername:(id)arg1 withWordingType:(int)arg2 isVideo:(BOOL)arg3 roomID:(unsigned long long)arg4 roomKey:(unsigned long long)arg5 inviteID:(unsigned int)arg6 inviteID64:(unsigned long long)arg7 duration:(unsigned int)arg8 isCaller:(BOOL)arg9 needRedDot:(BOOL)arg10 isIlink:(BOOL)arg11 callerMemberID:(unsigned int)arg12 calleeMemberID:(unsigned int)arg13;
+ (id)localBubbleMessageWrapToUsername:(id)arg1 withWordingId:(int)arg2 isVideo:(BOOL)arg3 roomID:(unsigned long long)arg4 roomKey:(unsigned long long)arg5 inviteID:(unsigned int)arg6 inviteID64:(unsigned long long)arg7 duration:(unsigned int)arg8 isCaller:(BOOL)arg9 isIlink:(BOOL)arg10 callerMemberID:(int)arg11 calleeMemberID:(int)arg12;
+ (id)gMsgIDDescriptionDecode:(id)arg1;
+ (void)initialize;
+ (BOOL)shouldUseWeappChatToolMode:(id)arg1 weappSourceUsername:(id)arg2;
+ (id)FormMessageWrapFromAddMsg:(id)arg1;
+ (void)clearLocalImage:(id)arg1;
+ (void)clearLocalMaskedThumbImage:(id)arg1;
+ (BOOL)SaveMsgThumbWithMsgWrap:(id)arg1;
+ (BOOL)SaveMesImg:(id)arg1 MsgWrap:(id)arg2;
+ (BOOL)IsRecordOrNoteMsg:(id)arg1;
+ (BOOL)IsFinderFeedMsgEnable:(id)arg1;
+ (BOOL)IsFinderLongVideoMsgEnable:(id)arg1;
+ (BOOL)IsFinderTopicMsgEnable:(id)arg1;
+ (BOOL)IsFinderCollectionMsgEnable:(id)arg1;
+ (BOOL)IsFinderMsgEnable:(id)arg1;
+ (BOOL)IsFinderLiveMsgEnable:(id)arg1;
+ (BOOL)IsFinderLiveConnectInviteMsgEnable:(id)arg1;
+ (BOOL)IsFinderNameCardEnable:(id)arg1;
+ (BOOL)IsFinderColumnEnable:(id)arg1;
+ (BOOL)isSenderFromMsgWrap:(id)arg1;
+ (id)getUserNameFromMsgWrap:(id)arg1;
+ (id)getJpgPathOfMsgHdOrMiddleImg:(id)arg1;
+ (id)getPathOfMsgVcodec2Img:(id)arg1;
+ (id)getPathOfMsgVcodec2HDImg:(id)arg1;
+ (id)getPathOfRawMiddleImage:(id)arg1;
+ (id)getMsgHDImg:(id)arg1;
+ (BOOL)MsgHDImgExist:(id)arg1;
+ (id)getJpgPathOfMsgHDImgV1:(id)arg1;
+ (id)getJpgPathOfMsgHDImgV2:(id)arg1;
+ (id)getJpgPathOfMsgHDImg:(id)arg1;
+ (id)getPathOfMsgWxAmImgByChatName:(id)arg1;
+ (id)getPathOfMsgWxAmImgByChatName:(id)arg1 localId:(unsigned int)arg2;
+ (id)getPathOfMsgWxAmImg:(id)arg1;
+ (BOOL)MsgMiddleImgExist:(id)arg1;
+ (BOOL)isVcodec2Img:(id)arg1;
+ (id)getJpgPathOfMsgMiddleImg:(id)arg1;
+ (id)getMsgHDImgData:(id)arg1;
+ (id)GetPathOfMesHDImg:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesHDImgV2:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfImgeMsgLiveVideo:(id)arg1 LocalID:(unsigned int)arg2;
+ (id)GetPathOfImgeMsgHDLiveVideo:(id)arg1 LocalID:(unsigned int)arg2;
+ (id)GetPathOfImgeMsgHDLiveVideoV2:(id)arg1 LocalID:(unsigned int)arg2;
+ (id)internalGetPathOfMsgHdImg:(id)arg1;
+ (id)getPathOfMsgImg:(id)arg1;
+ (id)getPathOfAudio:(id)arg1;
+ (id)getMsgHdOrMiddleImg:(id)arg1;
+ (id)getMsgHdOrMiddleImgJpgData:(id)arg1;
+ (id)getMsgHdOrMiddleImgData:(id)arg1;
+ (id)getMsgHdOrMiddleImgData:(id)arg1 canUseHeif:(BOOL)arg2;
+ (id)getMsgMiddleImg:(id)arg1;
+ (id)getMsgMiddleImgJpgData:(id)arg1;
+ (id)getMsgMiddleImgData:(id)arg1;
+ (id)getMsgMiddleImgData:(id)arg1 canUseHeif:(BOOL)arg2;
+ (id)getPathOfMsgImgThumb:(id)arg1;
+ (id)getPathOfHdOrMiddleImgForSender:(id)arg1;
+ (id)getPathOfMiddleImgForSender:(id)arg1;
+ (id)getPathOfMessageImageCache;
+ (id)getPathOfMaskedMsgImgThumb:(id)arg1;
+ (id)getPathOfMaskedVideoMsgImgThumb:(id)arg1;
+ (id)GetPathOfSquareMesImgThumb:(id)arg1;
+ (id)GetPathOfMaskedSquareMesImgThumbDir:(id)arg1;
+ (id)GetPathOfMaskedSquareMesImgThumbDir;
+ (id)getPathOfVideoMsgImgThumb:(id)arg1;
+ (id)getThumbnailInMessage:(id)arg1;
+ (id)getMsgImgThumb:(id)arg1;
+ (id)getMaskedMsgImgThumb:(id)arg1;
+ (id)getMaskedVideoMsgImgThumb:(id)arg1;
+ (id)GetPathOfMesVideoWithMessageWrap:(id)arg1;
+ (id)GetPathOfRawOrCompressVideo:(id)arg1;
+ (id)GetPathOfRawVideo:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfRawVideoV2:(id)arg1 LocalID:(unsigned int)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMsgRawVideoV1:(id)arg1;
+ (id)GetPathOfMsgRawVideoV2:(id)arg1;
+ (id)GetPathOfRawVideoWithMessageWrap:(id)arg1;
+ (id)GetTempPathOfRawVideoWithMessageWrap:(id)arg1;
+ (id)GetTempPathOfMesVideoWithMessageWrap:(id)arg1;
+ (id)GetCdnDownloadPathOfMsgThumb:(id)arg1;
+ (id)GetPathOfAppData:(id)arg1;
+ (id)createMaskedThumbImageForMessageWrap:(id)arg1;
+ (BOOL)isPreViewMsg;
+ (id)FTSMessageSupportTypes;
- (BOOL)isFinderTopicLikeShareType;
- (id)usedFinderTopicShareItem;
- (BOOL)isFinderPOIRelatedType;
- (id)finerSharePOIRelatedItem;
- (BOOL)isSetRedEnvelopeCoverMsg;
- (BOOL)isScheduleMessageMsg;
- (BOOL)msgCanBeRefered;
- (id)msgReferSummary;
- (id)msgReferSummaryAndReplace:(BOOL)arg1;
- (id)genReferIconWithName:(id)arg1 useCustomBkg:(BOOL)arg2;
- (id)msgReferSenderDisplayName;
- (id)msgReferSenderDisplayName:(BOOL)arg1;
- (BOOL)hideDisplayNameInRefer;
- (BOOL)isFakeReferHostMsg;
- (BOOL)isFakeReferMsg;
- (BOOL)hasRealReferingMessageWrap;
- (id)generateReplySummaryWithoutDisplayName;
- (id)generateReplySummary:(id)arg1;
- (id)generateReplySummary:(id)arg1 useContactDisplayName:(BOOL)arg2;
- (id)generateReplySummaryAndReplace:(id)arg1 useCustomBkg:(BOOL)arg2;
- (id)generateReplySummaryAndReplace:(id)arg1 useCustomBkg:(BOOL)arg2 useContactDisplayName:(BOOL)arg3;
- (long long)compareMessageLocalIDDescending:(id)arg1;
- (long long)compareMessageAscending:(id)arg1;
- (BOOL)isPriorToMsg:(id)arg1;
- (unsigned long long)yoCount;
- (int)yoType;
- (id)voipBubbleMsg;
- (id)voipMessageHistory;
- (BOOL)canUseCdnDownload;
- (id)GetCdnDownloadPathOfVideo;
- (id)GetCdnDownloadThumbPathOfVideo;
- (BOOL)isAd;
- (BOOL)isRawVideo;
- (BOOL)isRawVideoPreviewing;
- (id)getRawMediaIdentifier;
- (BOOL)canPlayVideo:(id)arg1;
- (void)ayncCompress3rdVideoWithProgress:(id /* block */)arg1 completion:(id /* block */)arg2;
- (void)compressVideoWithMMAsset:(id)arg1 AVAsset:(id)arg2 assetURL:(id)arg3 progressCallback:(id /* block */)arg4 completion:(id /* block */)arg5;
- (void)asyncCompressVideoWithProgressCallback:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id /* block */)getVideoExportCallbackBlockWithAsset:(id)arg1 URL:(id)arg2 noCompress:(BOOL)arg3 completion:(id /* block */)arg4;
- (unsigned long long)getPickerSceneFromOptionObj;
- (BOOL)isPreloadVideoTask;
- (BOOL)canBeginPreload;
- (BOOL)needCompressToH264;
- (void)compressToH264WithResPath:(id)arg1 CompletionSuccess:(id /* block */)arg2 Fail:(id /* block */)arg3;
- (id)getMediaWrapIdentifier;
- (id)getMediaWrapUrl;
- (id)getTempVideoPath;
- (id)getFormatVideoPath;
- (id)getThumbImagePath;
- (id)getHDThumbImagePath;
- (id)getRawHDThumbImagePath;
- (id)getRawFormatPath;
- (id)getRawTempPath;
- (BOOL)isWithHistoryRecord;
- (BOOL)hasDownloadHistoryRecord;
- (BOOL)canRevokeHistoryRecord;
- (BOOL)hasRevokedHistoryRecord;
- (BOOL)doRevokeHistoryRecord;
- (BOOL)isNewInviteesMsg;
- (void)setRevokeBatchId:(id)arg1;
- (id)revokeBatchId;
- (id)getNodeBtnList;
- (BOOL)isLiveImage;
- (id)getImgWxaInfo;
- (id)getImgSourceInfo;
- (id)getImgMpInfo;
- (id)GetLivePhotoVideoPath;
- (id)GetLivePhotoVideoTempPath;
- (id)GetLivePhotoHDVideoPath;
- (id)GetLivePhotoHDVideoTempPath;
- (id)GetAppAttachmentPath;
- (BOOL)isFileMsgRealtimeUploading;
- (id)nativeUrl;
- (BOOL)bIsAppUrlTypeWithCanvas;
- (BOOL)bIsAppUrlTypeFromWSVideoFlow;
- (id)convertToFinderMessageWrap;
- (BOOL)bIsFinderFeedShareContent;
- (BOOL)bIsFinderLongVideoShareContent;
- (BOOL)bIsFinderTopicShareContent;
- (BOOL)bIsFinderCollectionShareContent;
- (BOOL)bIsFinderShareContent;
- (BOOL)bIsFInderLiveContent;
- (BOOL)bIsFinderProductShareContent;
- (BOOL)bIsFinderOrderShareContent;
- (BOOL)bIsFinderContentColumnContent;
- (BOOL)bIsFinderShopWindowShare;
- (BOOL)bIsLiteAppShare;
- (BOOL)withLiteAppSource;
- (int)getLiteAppSource;
- (id)getLiteAppSourceTitle;
- (BOOL)isAAMessageForSessionStick;
- (BOOL)isForbitJumpUrl;
- (BOOL)isExclusiveHongBaoMsg;
- (BOOL)isExclusiveHbMessageForMe;
- (BOOL)isGroupTransferMessageForMe;
- (BOOL)isBrandAttributedNotifyMsg;
- (BOOL)isBrandAttributedNotifyMsgInMsgContentBeforeChangeForDisplay;
- (BOOL)isBrandAttributedNotifyUIMsgType;
- (BOOL)isBrandAttributedNotifyFromUserEqualToBrandTemplateMsgHolderName;
- (BOOL)isCanGetNotifyMsgNodeFromMsgSourceUIMsgType;
- (BOOL)shouldShowAsSystemMessage;
- (id)getContentForShowAsSystemMessage;
- (id)wishingString;
- (BOOL)isReferMsgType;
- (void)updateForReferMsg:(id)arg1 replyContent:(id)arg2;
- (id)generateMsgReferXML;
- (id)changeForPlainTextMsg;
- (BOOL)IsTextFold;
- (BOOL)IsMsgBubbleForbidForward;
- (BOOL)IsMsgBubbleForbidCopy;
- (BOOL)IsMsgBubbleForbidAll;
- (long long)GetMsgPreviewOpType;
- (_NSRange)getMsgSelectRange;
- (BOOL)canSelectAll;
- (id)getMsgTipUrl;
- (BOOL)UpdateArgsMsgSource:(id)arg1;
- (long long)getTextMsgInterceptType;
- (BOOL)forbidDetailPage;
- (BOOL)forbidSubPageWithMd5:(id)arg1;
- (BOOL)forbidContentDisplay;
- (BOOL)isPredownloadAndNotPreview:(id)arg1;
- (id)currentFinderGMsgID;
- (void)updateLastFinderGMsgIDWhenForwardWith:(id)arg1;
- (id)init;
- (id)initWithMsgType:(long long)arg1;
- (id)initWithMsgType:(long long)arg1 nsFromUsr:(id)arg2;
- (void)setM_uiMessageType:(unsigned int)arg1;
- (void)setM_nsFromUsr:(id)arg1;
- (void)setM_uiStatus:(unsigned int)arg1;
- (void)setM_nsPushContent:(id)arg1;
- (void)setM_nsMsgSource:(id)arg1;
- (void)setM_isTempSessionMsg:(BOOL)arg1;
- (void)setM_bizMsgMenuID:(id)arg1;
- (void)setM_openkfMsgMenuID:(id)arg1;
- (void)setM_nsBizCliMsgId:(id)arg1;
- (void)setM_bReceiveMessageSwitchStatus:(unsigned int)arg1;
- (void)setM_isEnterpriseMsg:(BOOL)arg1;
- (void)setM_nsAtUserList:(id)arg1;
- (void)setM_weappSourceUsername:(id)arg1;
- (void)setM_uiDownloadStatus:(unsigned int)arg1;
- (BOOL)shouldUseWeappChatToolMode:(id)arg1;
- (void)setM_sequenceId:(unsigned int)arg1;
- (void)setM_emojiSecurityInfoList:(id)arg1;
- (void)setM_uiPastedFromType:(unsigned long long)arg1;
- (void)setM_forwardType:(unsigned int)arg1;
- (void)setM_inLenList:(id)arg1;
- (void)setM_uiShareCardMessageStatus:(unsigned int)arg1;
- (void)setM_firstSendMsgId:(id)arg1;
- (void)setM_firstSendTime:(unsigned int)arg1;
- (void)setM_uiSvrCreateTime:(unsigned int)arg1;
- (void)setM_easterEggIncludedType:(long long)arg1;
- (void)updateEasterEggRandomSeedIfNeeded;
- (void)setM_easterEggRandomSeed:(unsigned int)arg1;
- (void)setM_bEncUserName:(id)arg1;
- (void)setM_bIsShowBigPic:(BOOL)arg1;
- (void)setBypSessionId:(id)arg1;
- (void)setM_mpPageIdentityInfo:(id)arg1;
- (void)setForbidDisplayInSession:(BOOL)arg1;
- (void)copyToMsg:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)ChangeForChatRoom;
- (void)ChangeForMsgSource;
- (void)changeForSecNode:(XmlReaderNode_t *)arg1;
- (void)ChangeForShareCardMessageFromForwardNode:(XmlReaderNode_t *)arg1;
- (void)ChangeForStrongNotificationNode:(XmlReaderNode_t *)arg1;
- (void)ChangeForPushContent;
- (void)fillMsgSourceFromContact:(id)arg1 isFromTempSession:(BOOL)arg2;
- (void)ChangeForSimpleMsgInfo;
- (void)UpdateContent:(id)arg1;
- (void)ChangeForDisplay;
- (void)UpdateMsgSource;
- (id)getSecContent;
- (void)AddTagToMsgSource:(id)arg1 value:(id)arg2;
- (void)AddOrModifyTagInMsgSource:(id)arg1 value:(id)arg2;
- (void)AddOrModifyTagInMsgSource:(id)arg1 value:(id)arg2 removeOnEmpty:(BOOL)arg3;
- (id)GetChatName;
- (BOOL)IsMassSendMessage;
- (BOOL)IsChatRoomMessage;
- (BOOL)IsBypassMessage;
- (BOOL)IsBypFinderPrivateMessage;
- (BOOL)IsTextMsg;
- (BOOL)IsMsgNeedForbidUrlParse;
- (BOOL)IsAppearAsTextMsg;
- (BOOL)isAppMsgAppearAsTextMsg;
- (BOOL)IsImgMsg;
- (BOOL)IsVoiceMsg;
- (BOOL)IsSimpleVideoMsg;
- (BOOL)IsVideoMsg;
- (BOOL)IsPureVideoMsg;
- (BOOL)isWeiShiVideo;
- (BOOL)IsGameVideo;
- (BOOL)IsBrandMPVideo;
- (BOOL)IsGetOnNeeded;
- (BOOL)IsAppMessage;
- (BOOL)IsInviteShareMessage;
- (BOOL)isNativeHongBaoMsg;
- (BOOL)IsGroupNoticeMsg;
- (BOOL)IsFileMsg;
- (BOOL)IsFileUploadingMsg;
- (BOOL)isMerge;
- (BOOL)IsSendBySendMsg;
- (BOOL)IsUrlMessage;
- (BOOL)IsRecordMsg;
- (BOOL)IsSameMsg:(id)arg1;
- (BOOL)IsSameMsgWithFullCheck:(id)arg1;
- (BOOL)IsBrandShareCardMsg;
- (id)getNativeAppSourceName;
- (id)getNativeAppSourceIconUrl;
- (id)getCurToUsername;
- (id)combineChatNameWithLocalId;
- (id)GetMsgClientMsgID;
- (id)GetDisplayContent;
- (BOOL)genImageFromMMAssetAndNotify:(id)arg1;
- (BOOL)genImageFromMMAssetAndNotify:(id)arg1 threshold:(id)arg2;
- (void)reportAssetExifWithImageSize:(CGSize)arg1 dataSize:(unsigned long long)arg2;
- (void)genMiddleImg:(id)arg1 originImgData:(id)arg2 isSaveOK:(BOOL)arg3 delegate:(id)arg4;
- (unsigned int)getSessionTime;
- (BOOL)isTemplateBrandMsg;
- (BOOL)IsNeedChatExt;
- (id)parseMsgClusterType;
- (id)parseMsgForwardType;
- (BOOL)isTransferMessageForNewWCPayBizExt;
- (BOOL)isHongBaoMessageNeedDownloadShowResoruce;
- (BOOL)isHongBaoMessageNeedDownloadEmoticon;
- (BOOL)isHongBaoMessageNeedDownloadAudio;
- (BOOL)isHongBaoMessageForNewWCPayBizExt;
- (BOOL)isAAMessageForNewWCPayBizExt;
- (BOOL)isOverseaHBMessageForNewWCPayBizExt;
- (BOOL)isPocketMoneyForNewWCPayBizExt;
- (BOOL)isThirdC2CMessageForNewWCPayBizExt;
- (long long)getC2CTransactionType;
- (id)getC2CTransactionId;
- (BOOL)isNewWCPayBizExtMsg:(long long *)arg1;
- (id)getWCPayMsgExtBizIdWithType:(unsigned int)arg1;
- (BOOL)IsNeedAddWCPayMsgBizExt;
- (unsigned int)getWCPayMsgInvalidTime;
- (id)getWCPayMsgExtBizId;
- (void)parseWCPayInfoItemIfNeed;
- (void)parseWCPayExtensionInfoIfNeed;
- (id)description;
- (id)keyDescription;
- (BOOL)isShowAppBottomButton;
- (BOOL)isShowAppMessageBlockButton;
- (BOOL)IsSupportAtMe;
- (BOOL)IsAtMe;
- (BOOL)IsAtAll;
- (BOOL)IsRoomAnnouncement;
- (BOOL)IsNewInvitation;
- (BOOL)IsUpdatableMsgSubscribeMsg;
- (BOOL)IsNewInvitationApprove;
- (BOOL)isSentOK;
- (BOOL)isSpecialAttentionMessage;
- (BOOL)isMsgCanFindByServerId;
- (BOOL)canUseContineUpload;
- (id)messageFTSTextForDisplay;
- (id)messageFTSText;
- (id)nonCategorymessageFTSText;
- (id)getMessageFTSText;
- (BOOL)canEnterBrandTimeline;
- (BOOL)canEnterBrandTimelineNotification;
- (BOOL)canReadWrapIntoBrandTimeline;
- (BOOL)showBrandFusionSummary;
- (BOOL)canEnterBrandServiceTimeline;
- (BOOL)canEnterBrandServiceTimelineNotification;
- (BOOL)canEnterBrandServiceTemplateMsgPage;
- (BOOL)canEnterBrandServicePrivateNotiMsg;
- (BOOL)isBizRecommendMsg;
- (BOOL)isBizRecommendNativeMsg;
- (BOOL)isBizRecommendCanvasMsg;
- (BOOL)isBizAdCanvasMsg;
- (BOOL)isBizAffRecommendMsg;
- (BOOL)isBizSysMsg;
- (BOOL)isEmbedExcerptMsg;
- (id)getReplyMessage;
- (id)generateExtCommonInfoXML;
- (void)parseExtCommonInfoXMLNode:(XmlReaderNode_t *)arg1;
- (unsigned int)m_uiMesLocalID;
- (void)setM_uiMesLocalID:(unsigned int)arg1;
- (long long)m_n64MesSvrID;
- (void)setM_n64MesSvrID:(long long)arg1;
- (id)m_nsFromUsr;
- (id)m_nsToUsr;
- (void)setM_nsToUsr:(id)arg1;
- (unsigned int)m_uiMessageType;
- (id)m_nsContent;
- (void)setM_nsContent:(id)arg1;
- (unsigned int)m_uiStatus;
- (unsigned int)m_uiImgStatus;
- (void)setM_uiImgStatus:(unsigned int)arg1;
- (unsigned int)m_uiMsgFlag;
- (void)setM_uiMsgFlag:(unsigned int)arg1;
- (unsigned int)m_uiCreateTime;
- (void)setM_uiCreateTime:(unsigned int)arg1;
- (unsigned int)m_uiSvrCreateTime;
- (id)m_nsPushContent;
- (id)m_nsPushTitle;
- (void)setM_nsPushTitle:(id)arg1;
- (id)m_nsPushPrefix;
- (void)setM_nsPushPrefix:(id)arg1;
- (id)m_nsPushBody;
- (void)setM_nsPushBody:(id)arg1;
- (id)m_nsMsgSource;
- (id)m_extendInfoWithMsgTypeForBiz;
- (void)setM_extendInfoWithMsgTypeForBiz:(id)arg1;
- (id)m_extendInfoWithMsgType;
- (void)setM_extendInfoWithMsgType:(id)arg1;
- (id)m_extendInfoWithFromUsr;
- (void)setM_extendInfoWithFromUsr:(id)arg1;
- (id)m_nsRealChatUsr;
- (void)setM_nsRealChatUsr:(id)arg1;
- (BOOL)m_bForward;
- (void)setM_bForward:(BOOL)arg1;
- (BOOL)m_bCdnForward;
- (void)setM_bCdnForward:(BOOL)arg1;
- (id)m_dtThumbnail;
- (void)setM_dtThumbnail:(id)arg1;
- (BOOL)m_bNew;
- (void)setM_bNew:(BOOL)arg1;
- (unsigned int)m_uiSendTime;
- (void)setM_uiSendTime:(unsigned int)arg1;
- (unsigned int)m_uiEmojiStatFlag;
- (void)setM_uiEmojiStatFlag:(unsigned int)arg1;
- (id)m_nsPattern;
- (void)setM_nsPattern:(id)arg1;
- (long long)m_easterEggBlockType;
- (void)setM_easterEggBlockType:(long long)arg1;
- (long long)m_easterEggIncludedType;
- (unsigned int)m_easterEggRandomSeed;
- (unsigned int)m_uiPercent;
- (void)setM_uiPercent:(unsigned int)arg1;
- (unsigned int)m_uiDownloadStatus;
- (id)m_nsKFWorkerOpenID;
- (void)setM_nsKFWorkerOpenID:(id)arg1;
- (unsigned int)m_uiKFType;
- (void)setM_uiKFType:(unsigned int)arg1;
- (id)m_nsBizClientMsgID;
- (void)setM_nsBizClientMsgID:(id)arg1;
- (id)m_nsBizChatId;
- (void)setM_nsBizChatId:(id)arg1;
- (unsigned int)m_uiBizChatVer;
- (void)setM_uiBizChatVer:(unsigned int)arg1;
- (BOOL)m_isP8Msg;
- (void)setM_isP8Msg:(BOOL)arg1;
- (id)m_forcePushId;
- (void)setM_forcePushId:(id)arg1;
- (id)m_nsAtUserList;
- (unsigned long long)watchMsgSourceType;
- (void)setWatchMsgSourceType:(unsigned long long)arg1;
- (BOOL)m_isTempSessionMsg;
- (BOOL)m_isEnterpriseMsg;
- (id)m_emojiSecurityInfoList;
- (unsigned int)m_sequenceId;
- (id)m_nsDisplayName;
- (void)setM_nsDisplayName:(id)arg1;
- (id)m_firstSendMsgId;
- (unsigned int)m_firstSendTime;
- (BOOL)m_bIsFromBrandSession;
- (void)setM_bIsFromBrandSession:(BOOL)arg1;
- (BOOL)m_bIsBrandSendMass;
- (void)setM_bIsBrandSendMass:(BOOL)arg1;
- (id)m_bizMsgMenuID;
- (id)m_openkfMsgMenuID;
- (unsigned int)m_bReceiveMessageSwitchStatus;
- (BOOL)m_bIsBrandServiceMsg;
- (void)setM_bIsBrandServiceMsg:(BOOL)arg1;
- (BOOL)m_bForbidden;
- (void)setM_bForbidden:(BOOL)arg1;
- (unsigned int)m_bTextFold;
- (void)setM_bTextFold:(unsigned int)arg1;
- (id)m_nsTipsUrl;
- (void)setM_nsTipsUrl:(id)arg1;
- (BOOL)m_bIsSubscribeMsg;
- (void)setM_bIsSubscribeMsg:(BOOL)arg1;
- (BOOL)m_bIsAffBrandMsg;
- (void)setM_bIsAffBrandMsg:(BOOL)arg1;
- (BOOL)m_bIsPreviewMsg;
- (void)setM_bIsPreviewMsg:(BOOL)arg1;
- (unsigned int)m_uiBizSceneType;
- (void)setM_uiBizSceneType:(unsigned int)arg1;
- (long long)m_bizMsgType;
- (void)setM_bizMsgType:(long long)arg1;
- (id)m_byteBuffer;
- (void)setM_byteBuffer:(id)arg1;
- (unsigned int)m_nsBizChatUserType;
- (void)setM_nsBizChatUserType:(unsigned int)arg1;
- (unsigned int)m_uiShareCardMessageStatus;
- (id)m_weappSourceUsername;
- (unsigned long long)m_uiPastedFromType;
- (unsigned int)m_forwardType;
- (id)m_nsSpecifiedChatName;
- (void)setM_nsSpecifiedChatName:(id)arg1;
- (unsigned int)m_uiIsSenderStatus;
- (void)setM_uiIsSenderStatus:(unsigned int)arg1;
- (id)m_nsBypMsgExtInfo;
- (void)setM_nsBypMsgExtInfo:(id)arg1;
- (id)m_nsWatchUser;
- (void)setM_nsWatchUser:(id)arg1;
- (id)m_inLenList;
- (id)m_nsBeforeDisplayContent;
- (void)setM_nsBeforeDisplayContent:(id)arg1;
- (id)m_openImStrId;
- (void)setM_openImStrId:(id)arg1;
- (id)m_bEncUserName;
- (long long)m_pushStyle;
- (void)setM_pushStyle:(long long)arg1;
- (unsigned int)m_uiFinishedLength;
- (void)setM_uiFinishedLength:(unsigned int)arg1;
- (unsigned int)m_intellCmdType;
- (void)setM_intellCmdType:(unsigned int)arg1;
- (id)m_intellCmdData;
- (void)setM_intellCmdData:(id)arg1;
- (id)m_loginTaskId;
- (void)setM_loginTaskId:(id)arg1;
- (id)m_nsBizCliMsgId;
- (id)m_forcePushItem;
- (void)setM_forcePushItem:(id)arg1;
- (id)m_nsProfileRecommendInfo;
- (void)setM_nsProfileRecommendInfo:(id)arg1;
- (BOOL)m_nsAtAll;
- (void)setM_nsAtAll:(BOOL)arg1;
- (BOOL)m_ignoreSoftBank;
- (void)setM_ignoreSoftBank:(BOOL)arg1;
- (id)riskFileMd5List;
- (void)setRiskFileMd5List:(id)arg1;
- (unsigned int)riskFileFlag;
- (void)setRiskFileFlag:(unsigned int)arg1;
- (id)riskWarningUrl;
- (void)setRiskWarningUrl:(id)arg1;
- (unsigned int)unreadMediaExpired;
- (void)setUnreadMediaExpired:(unsigned int)arg1;
- (id)m_nsShareTipsUrl;
- (void)setM_nsShareTipsUrl:(id)arg1;
- (unsigned int)m_secCtrlFlag;
- (void)setM_secCtrlFlag:(unsigned int)arg1;
- (unsigned int)m_blockRange;
- (void)setM_blockRange:(unsigned int)arg1;
- (unsigned int)m_mediaToEmoji;
- (void)setM_mediaToEmoji:(unsigned int)arg1;
- (unsigned int)m_selectLength;
- (void)setM_selectLength:(unsigned int)arg1;
- (unsigned int)m_forbidLink;
- (void)setM_forbidLink:(unsigned int)arg1;
- (unsigned int)m_previewType;
- (void)setM_previewType:(unsigned int)arg1;
- (unsigned int)m_bubbleType;
- (void)setM_bubbleType:(unsigned int)arg1;
- (id)m_uuid;
- (void)setM_uuid:(id)arg1;
- (id)m_publisherId;
- (void)setM_publisherId:(id)arg1;
- (id)m_initPublisherId;
- (void)setM_initPublisherId:(id)arg1;
- (BOOL)forbidDisplayInSession;
- (id)eggMatch;
- (void)setEggMatch:(id)arg1;
- (id)m_dicForwardParas;
- (void)setM_dicForwardParas:(id)arg1;
- (id)bypSessionId;
- (BOOL)m_bIsAffBrandServiceMsg;
- (void)setM_bIsAffBrandServiceMsg:(BOOL)arg1;
- (unsigned long long)m_brandTLAffMsgId;
- (void)setM_brandTLAffMsgId:(unsigned long long)arg1;
- (id)m_brandTLAffMsgExtraData;
- (void)setM_brandTLAffMsgExtraData:(id)arg1;
- (id)m_bsTLAffMsgExtraData;
- (void)setM_bsTLAffMsgExtraData:(id)arg1;
- (unsigned int)m_brandTimelineMsgId;
- (void)setM_brandTimelineMsgId:(unsigned int)arg1;
- (unsigned long long)m_brandTimelineSequenceId;
- (void)setM_brandTimelineSequenceId:(unsigned long long)arg1;
- (BOOL)m_bIsExpand;
- (void)setM_bIsExpand:(BOOL)arg1;
- (unsigned int)m_brandTimelineGroupId;
- (void)setM_brandTimelineGroupId:(unsigned int)arg1;
- (int)m_msgPredict;
- (void)setM_msgPredict:(int)arg1;
- (BOOL)m_bIsTimelineBanned;
- (void)setM_bIsTimelineBanned:(BOOL)arg1;
- (BOOL)m_bIsNotificationOnlyShowInSession;
- (void)setM_bIsNotificationOnlyShowInSession:(BOOL)arg1;
- (BOOL)m_bIsExposed;
- (void)setM_bIsExposed:(BOOL)arg1;
- (BOOL)m_brandIsValidExpose;
- (void)setM_brandIsValidExpose:(BOOL)arg1;
- (BOOL)m_bIsShowBigPic;
- (long long)m_bizFlag;
- (void)setM_bizFlag:(long long)arg1;
- (BOOL)m_bBrandMainSessionMsgExposed;
- (void)setM_bBrandMainSessionMsgExposed:(BOOL)arg1;
- (unsigned int)m_brandMainSessionExposeCount;
- (void)setM_brandMainSessionExposeCount:(unsigned int)arg1;
- (unsigned int)m_brandMainSessionExposeTotalTime;
- (void)setM_brandMainSessionExposeTotalTime:(unsigned int)arg1;
- (unsigned int)m_brandMainSessionExposeMinPos;
- (void)setM_brandMainSessionExposeMinPos:(unsigned int)arg1;
- (id)m_nsBrandRankSessionId;
- (void)setM_nsBrandRankSessionId:(id)arg1;
- (BOOL)m_hasResorted;
- (void)setM_hasResorted:(BOOL)arg1;
- (id)m_nsResortBuffer;
- (void)setM_nsResortBuffer:(id)arg1;
- (id)m_readerInfo;
- (void)setM_readerInfo:(id)arg1;
- (id)m_nsRecCardId;
- (void)setM_nsRecCardId:(id)arg1;
- (id)m_nsRecReason;
- (void)setM_nsRecReason:(id)arg1;
- (unsigned int)recRecycleCardType;
- (void)setRecRecycleCardType:(unsigned int)arg1;
- (unsigned int)recCardMediaType;
- (void)setRecCardMediaType:(unsigned int)arg1;
- (BOOL)m_bShouldShowPriorityNotification;
- (void)setM_bShouldShowPriorityNotification:(BOOL)arg1;
- (BOOL)m_bIsClickPriorityNotificationInTL;
- (void)setM_bIsClickPriorityNotificationInTL:(BOOL)arg1;
- (unsigned int)m_brandCanvasAdExpiredTimeSec;
- (void)setM_brandCanvasAdExpiredTimeSec:(unsigned int)arg1;
- (id)m_nsBrandCanvasId;
- (void)setM_nsBrandCanvasId:(id)arg1;
- (id)m_brandDigestInfo;
- (void)setM_brandDigestInfo:(id)arg1;
- (BOOL)m_bIsShowFinderRedDot;
- (void)setM_bIsShowFinderRedDot:(BOOL)arg1;
- (long long)m_mergeCount;
- (void)setM_mergeCount:(long long)arg1;
- (unsigned int)m_uiMergeShowTime;
- (void)setM_uiMergeShowTime:(unsigned int)arg1;
- (id)referHostMsg;
- (void)setReferHostMsg:(id)arg1;
- (id)m_nsSignature;
- (void)setM_nsSignature:(id)arg1;
- (unsigned long long)m_appMsgSourceType;
- (void)setM_appMsgSourceType:(unsigned long long)arg1;
- (id)shareMsgObj;
- (void)setShareMsgObj:(id)arg1;
- (unsigned int)m_showAIReply;
- (void)setM_showAIReply:(unsigned int)arg1;
- (id)m_aiMsgWording;
- (void)setM_aiMsgWording:(id)arg1;
- (id)m_mpPageIdentityInfo;
- (unsigned int)sendFailRetCode;
- (void)setSendFailRetCode:(unsigned int)arg1;
- (BOOL)m_isAITalkingMsg;
- (void)setM_isAITalkingMsg:(BOOL)arg1;
- (id)systemMessageWording;
- (void)setSystemMessageWording:(id)arg1;
- (id)systemMessageActionWording;
- (void)setSystemMessageActionWording:(id)arg1;
- (id)referingMessageWrap;
- (void)setReferingMessageWrap:(id)arg1;
- (id)referPartialInfo;
- (void)setReferPartialInfo:(id)arg1;
- (void).cxx_destruct;
@end

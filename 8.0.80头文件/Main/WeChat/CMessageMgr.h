@interface CMessageMgr : MMUserService <IMessageWrapImgExt, MessageWrapImgDelegate, INewSyncExt, PBMessageObserverDelegate, BypSendMessageMgrDelegate, ISendMessageExt, UploadVideoCDNMgrDelegate, BypSendEmotionMessageMgrDelegate, MMServiceProtocol, IAudioToMessageExt, IVideoExt, IEmoticonExt, MMKernelExt, IMsgExt, UploadImageCDNMgrDelegate, OpenDownloadCDNMgrDelegate, OpenUploadMgrDelegate, OpenUploadCDNMgrDelegate, RecordUploadCDNMgrDelegate>
{
    CMessageDB * m_oMsgDB; // +0x8
    CDownloadVideoMgr * m_oDownloadVideoMgr; // +0x10
    BypSendMessageMgr * m_bypSendMessageMgr; // +0x18
    CEmoticonUploadMgr * m_oEmoticonUploadMgr; // +0x20
    BypSendEmotionMessageMgr * m_bypEmoticonUploadMgr; // +0x28
    CEmoticonDownloadMgr * m_oEmoticonDownloadMgr; // +0x30
    BOOL m_bCheckQueue; // +0x38
    OpenUploadMgr * m_oOpenUploadMgr; // +0x40
    OpenDownloadMgr * m_oOpenDownloadMgr; // +0x48
    MessagePatternCacheMgr * m_oMessagePatternMgr; // +0x50
    DownloadImageMgr * m_oDownloadImageMgr; // +0x58
    ImageUploadUnifyBaseMgr * m_oUploadImageCdnMgr; // +0x60
    DownloadImageCDNMgr * m_oDownloadImageCdnMgr; // +0x68
    DownloadImageCDNMgr * m_oSilentDownloadImageCdnMgr; // +0x70
    DownloadImageCDNMgr * m_oQuotaDownloadImageCdnMgr; // +0x78
    ThumbDownloadMgr * m_oThumbDownloadMgr; // +0x80
    DownloadVideoCDNMgr * m_oDownloadVideoCdnMgr; // +0x88
    DownloadVideoCDNMgr * m_oSilentDownloadVideoCdnMgr; // +0x90
    DownloadVideoCDNMgr * m_oQuotaDownloadVideoCdnMgr; // +0x98
    OpenUploadCDNMgr * m_oOpenUploadCDNMgr; // +0xa0
    OpenUploadVideoCDNMgr * m_oOpenUploadVideoCDNMgr; // +0xa8
    OpenDownloadCDNMgr * m_oOpenDownloadCDNMgr; // +0xb0
    OpenDownloadCDNMgr * m_oSilentOpenDownloadCDNMgr; // +0xb8
    OpenUploadCDNMgr * m_oOpenUploadCDNLargeFileMgr; // +0xc0
    OpenDownloadCDNMgr * m_oOpenDownloadCDNLargeFileMgr; // +0xc8
    RecordBaseUploadCDNMgr * m_oRecordUploadCDNMgr; // +0xd0
    RecordDownloadCDNMgr * m_oRecordDownloadCDNMgr; // +0xd8
    RoomHistoryDownloadCDNMgr * m_oRoomHistoryDownloadCDNMgr; // +0xe0
    NSObject<OS_dispatch_semaphore> * _semaphore; // +0xe8
    NSDate * m_dateLastNotifySentFail; // +0xf0
    NSMutableDictionary * m_dicSentFailMsg; // +0xf8
    NSMutableArray * m_willReloadRevokeMsgArr; // +0x100
    BOOL _hasCheckMsgTime; // +0x108
    BOOL _isUsingNewImageUploadMgr; // +0x109
    unsigned long long _imageMaxDisplaySize; // +0x110
    VideoUploadUnifyMgr * _uploadVideoUnifyMgr; // +0x118
    MessageAssetThreshold * _assetThreshold; // +0x120
    NSNumber * _waittingSecMsgCount; // +0x128
}
+ (void)supplementLocalBubbleWithVoIPIlinkWordingInfo:(id)arg1 exceptionType:(unsigned long long)arg2;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
+ (id)GetPathOfOpenUploadFile;
+ (id)GetPathOfOpenUploadCDNFile;
+ (id)GetPathOfOpenUploadCDNLargeFile;
+ (id)GetPathOfOpenUploadVideoCDNFile;
+ (id)GetPathOfOpenDownloadCDNFile;
+ (id)GetPathOfOpenDownloadCDNLargeFile;
- (void)VoIP_supplementLocalBubbleMessageWrapToUsername:(id)arg1 withWordingId:(int)arg2 isVideo:(BOOL)arg3 roomID:(unsigned long long)arg4 roomKey:(unsigned long long)arg5 inviteID:(unsigned int)arg6 inviteID64:(unsigned long long)arg7 duration:(unsigned int)arg8 isCaller:(BOOL)arg9 needFixTime:(BOOL)arg10 createTime:(unsigned int)arg11 exceptionType:(unsigned long long)arg12 isIlink:(BOOL)arg13 callerMemberID:(int)arg14 calleeMemberID:(int)arg15;
- (void)VoIP_supplementLocalBubbleMessageWrapToUsername:(id)arg1 withWordingType:(int)arg2 isVideo:(BOOL)arg3 roomID:(unsigned long long)arg4 roomKey:(unsigned long long)arg5 inviteID:(unsigned int)arg6 inviteID64:(unsigned long long)arg7 duration:(unsigned int)arg8 isCaller:(BOOL)arg9 needRedDot:(BOOL)arg10 needFixTime:(BOOL)arg11 createTime:(unsigned int)arg12 exceptionType:(unsigned long long)arg13 isIlink:(BOOL)arg14;
- (void)VoIP_supplementLocalExceptionMessageWrapFromUser:(id)arg1 withVoipType:(unsigned int)arg2 exceptionType:(unsigned long long)arg3 messageTime:(unsigned int)arg4 needFixTime:(BOOL)arg5;
- (void)BackGroundAddHelloMsg:(id)arg1;
- (BOOL)isContact:(id)arg1 ConfirmToQueryString:(id)arg2;
- (id)escapeKeywordForQueryString:(id)arg1;
- (BOOL)IsImageMsgUploadIng:(id)arg1;
- (BOOL)IsRecordMsgUploading:(id)arg1;
- (void)UpdateVideoStatus:(id)arg1;
- (void)AsyncOnPreAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AsyncOnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AsyncOnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)AsyncOnAddMsgForSession:(id)arg1 MsgWrap:(id)arg2;
- (void)AsyncOnAddMsgForSession:(id)arg1 MsgWrap:(id)arg2 NewMsgArriveNotify:(BOOL)arg3;
- (void)AsyncOnNotAddDBMessage:(id)arg1 MsgWrap:(id)arg2;
- (void)AsyncOnSpecialSession:(id)arg1 MsgList:(id)arg2;
- (void)AsyncOnMsgNotAddDBSession:(id)arg1 MsgList:(id)arg2;
- (void)AsyncOnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)AsyncOnUnReadChange:(id)arg1;
- (void)AsyncOnSendVoiceError:(id)arg1 MsgWrap:(id)arg2 ErroNO:(unsigned int)arg3;
- (void)AsyncOnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AsyncOnPushMsg:(id)arg1 isAlwaysShow:(BOOL)arg2;
- (void)MainThreadNotifyToExt:(id)arg1;
- (id)init;
- (id)imageUploadMgrWithMsgWrap:(id)arg1;
- (BOOL)SaveMesVoice:(id)arg1 MsgWrap:(id)arg2;
- (void)InitMsgMgr:(id)arg1;
- (BOOL)hasInitDb;
- (BOOL)IsVideoMsgUploadIng:(id)arg1;
- (BOOL)IsVideoMsgdDownloadIng:(id)arg1;
- (void)AsyncOnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (unsigned long long)messageDataSize:(id)arg1;
- (BOOL)RevokeMsg:(id)arg1 MsgWrap:(id)arg2 Counter:(unsigned int)arg3;
- (BOOL)RevokeMsg:(id)arg1 MsgWrap:(id)arg2 Counter:(unsigned int)arg3 revokeTicket:(id)arg4 viewController:(id)arg5;
- (void)reloadRevokeMsg:(id)arg1 after:(unsigned int)arg2;
- (void)reloadRevokeMsgNode:(id)arg1;
- (BOOL)RemoveOldRevokeMessagesBefore:(unsigned int)arg1;
- (BOOL)InsertRevokeMessage:(id)arg1;
- (void)onSecMsg:(id)arg1;
- (void)checkForSecSystemMsg:(id)arg1;
- (void)onRevokeRoomHistory:(id)arg1 msg:(id)arg2;
- (void)onCompeleteAppMsg:(id)arg1 oriMesSvrID:(long long)arg2;
- (void)onCompeleteVideoMsg:(id)arg1 overWriteSvrID:(long long)arg2;
- (void)updateMsgForSecSystemMsg:(XmlReaderNode_t *)arg1 msgWrap:(id)arg2;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ModMsgByBitSetWithoutNotify:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)ModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)sendBypassMsg:(id)arg1;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)setUploadContinueFieldNewMsg:(id)arg1 OldMsg:(id)arg2;
- (void)HandleMsgList:(id)arg1 MsgList:(id)arg2;
- (void)AddMsgPattern:(id)arg1;
- (id)GetMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3 LeftCount:(unsigned int *)arg4;
- (id)GetLastMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5;
- (id)GetFirstMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5;
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5;
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 ToCreateTime:(unsigned int)arg4 Limit:(int)arg5 LeftCount:(unsigned int *)arg6;
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 FromSequence:(unsigned int)arg6;
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 containBatchRevoke:(BOOL)arg6;
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 ToCreateTime:(unsigned int)arg4 Limit:(int)arg5 LeftCount:(unsigned int *)arg6 containBatchRevoke:(BOOL)arg7;
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 FromSequence:(unsigned int)arg6 containBatchRevoke:(BOOL)arg7;
- (id)GetMsgByCreateTimeWithoutFilter:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 ToCreateTime:(unsigned int)arg4 Limit:(int)arg5 LeftCount:(unsigned int *)arg6;
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 ToCreateTime:(unsigned int)arg4 Limit:(int)arg5 LeftCount:(unsigned int *)arg6 FromSequence:(unsigned int)arg7 containBatchRevoke:(BOOL)arg8;
- (void)filterMsgList:(id)arg1 LeftCount:(unsigned int *)arg2;
- (id)GetBrandServiceMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 ToCreateTime:(unsigned int)arg4 Limit:(int)arg5 LeftCount:(unsigned int *)arg6 FromSequence:(unsigned int)arg7;
- (id)GetDownMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5;
- (id)GetDownMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 FromSequence:(unsigned int)arg6;
- (id)GetDownMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 ToCreateTime:(unsigned int)arg4 Limit:(int)arg5 LeftCount:(unsigned int *)arg6;
- (id)GetDownMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 containBatchRevoke:(BOOL)arg6;
- (id)GetDownMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4 LeftCount:(unsigned int *)arg5 FromSequence:(unsigned int)arg6 containBatchRevoke:(BOOL)arg7;
- (void)filterDownMsgList:(id)arg1 Limit:(int)arg2 LeftCount:(unsigned int *)arg3;
- (id)GetLastDBMsgByCreateTime:(id)arg1 FromID:(unsigned int)arg2 FromCreateTime:(unsigned int)arg3 Limit:(int)arg4;
- (id)GetMsgByCreateTimeAndType:(id)arg1 FromCreateTime:(unsigned int)arg2 ToCreateTime:(unsigned int)arg3 type:(id)arg4 Limit:(unsigned int)arg5 NeedOrder:(BOOL)arg6;
- (id)GetDownMsgByCreateTimeAndType:(id)arg1 FromCreateTime:(unsigned int)arg2 ToCreateTime:(unsigned int)arg3 type:(id)arg4 Limit:(unsigned int)arg5 NeedOrder:(BOOL)arg6;
- (id)GetMsg:(id)arg1 LocalID:(unsigned int)arg2 hasError:(BOOL *)arg3 needOriginContent:(BOOL)arg4;
- (id)GetMsg:(id)arg1 LocalID:(unsigned int)arg2;
- (id)GetMsg:(id)arg1 LocalIDArray:(id)arg2;
- (id)GetMsg:(id)arg1 n64SvrID:(long long)arg2;
- (id)GetMsg:(id)arg1 BizMsgClientID:(id)arg2;
- (id)GetLastNonSysMsg:(id)arg1;
- (id)getMessageWrapArray:(id)arg1 bizId:(id)arg2;
- (id)getMessageWrapArray:(id)arg1 bizId:(id)arg2 bizType:(long long)arg3;
- (id)getValidNewMessageWrapArray:(id)arg1 bizType:(long long)arg2;
- (id)getAllNewMessageWrapArray:(id)arg1 bizType:(long long)arg2;
- (BOOL)addMessageToNewWCPayBizExtTable:(id)arg1 type:(long long)arg2;
- (void)ModNewBizExtMsg:(id)arg1 bizId:(id)arg2 bizStatus:(long long)arg3 bizType:(long long)arg4;
- (BOOL)isNewBizExtHandled:(id)arg1;
- (unsigned int)GetValidNewBizMsgCountByChatName:(id)arg1 bizType:(long long)arg2;
- (unsigned int)GetAllValidNewBizMsgCount;
- (id)GetAllChatNameWithValidNewBizMsg;
- (void)DelOverTimeNewBizExtMsgsOnType:(long long)arg1;
- (id)GetTextMsg:(id)arg1 AscendinglyFromID:(unsigned int)arg2 Limit:(int)arg3;
- (id)GetTextMsg:(id)arg1 DescendinglyToID:(unsigned int)arg2 Limit:(int)arg3;
- (id)GetImageMsg:(id)arg1 AscendinglyFromID:(unsigned int)arg2 Limit:(int)arg3;
- (id)GetImageMsg:(id)arg1 DescendinglyToID:(unsigned int)arg2 Limit:(int)arg3;
- (id)GetFirstImageMsg:(id)arg1;
- (id)GetLastImageMsg:(id)arg1;
- (id)GetNotSystemMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3;
- (unsigned int)GetImagetMsgCount:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (unsigned int)GetTextMsgCount:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (unsigned int)GetTextMsgCountExcludeVoice:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (unsigned int)GetLastMsgLocalID:(id)arg1;
- (id)GetMsgLocalID:(id)arg1 from:(unsigned int)arg2 to:(unsigned int)arg3 limit:(int)arg4 lastEndTime:(unsigned int *)arg5 lastLocalID:(unsigned long long *)arg6;
- (id)GetLastMsg:(id)arg1;
- (id)GetLastInsertMsg:(id)arg1;
- (unsigned int)GetLastMsgCreateTime:(id)arg1;
- (unsigned int)GetMsgSeqMaxLocalId:(id)arg1;
- (id)GetFirstUnreadMsg:(id)arg1;
- (id)GetTextMsg:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (id)GetTextMsg:(id)arg1 FromID:(unsigned int)arg2 Limit:(int)arg3;
- (BOOL)checkSqliteMasterExistFor:(id)arg1;
- (id)GetFirstUnreadMsgIncludingNewXML:(id)arg1;
- (void)CheckMessageStatus:(id)arg1 Msg:(id)arg2;
- (id)GetHelloUsers:(id)arg1 Limit:(int)arg2 OnlyUnread:(BOOL)arg3;
- (id)GetHelloMsg:(id)arg1 HelloUser:(id)arg2 Limit:(int)arg3 OnlyTo:(BOOL)arg4;
- (id)GetUnreadDBHelloMessages:(id)arg1;
- (id)GetDBHelloUsers:(id)arg1 Limit:(int)arg2 OnlyUnread:(BOOL)arg3;
- (id)GetAllDBHelloUsers:(id)arg1 arrNoInUserName:(id)arg2;
- (id)GetHelloMsg:(id)arg1 n64SvrID:(long long)arg2;
- (void)DelHelloMsg:(id)arg1 HelloUser:(id)arg2;
- (BOOL)deleteHelloMessages:(id)arg1 helloUser:(id)arg2 excludingMsgServerIds:(id)arg3 beforeCreateTime:(unsigned int)arg4;
- (BOOL)ClearHelloUnRead:(id)arg1 HelloUser:(id)arg2;
- (void)AddHelloMsg:(id)arg1 MsgWrap:(id)arg2 HelloUser:(id)arg3 OpCode:(unsigned int)arg4 DES:(unsigned int)arg5 checkCreateTime:(BOOL)arg6 status:(unsigned int)arg7;
- (void)AddHelloMsgList:(id)arg1 MsgList:(id)arg2;
- (BOOL)SetSayHelloStatus:(id)arg1 LocalID:(unsigned int)arg2 Status:(unsigned int)arg3;
- (BOOL)ModHelloLocationMsg:(id)arg1 MsgWrap:(id)arg2;
- (unsigned int)GetSayHelloStatus:(id)arg1 LocalID:(unsigned int)arg2;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned int)arg2 ToID:(unsigned int)arg3;
- (BOOL)ClearRedundantUnRead:(id)arg1 withRemainCount:(int)arg2 limit:(int)arg3;
- (void)ClearUnreadForSync:(id)arg1 CreateTime:(unsigned int)arg2;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(BOOL)arg3;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2;
- (void)DelAllMsgs:(id)arg1;
- (void)DelMsg:(id)arg1 MsgWrap:(id)arg2;
- (unsigned int)GetUnReadCount:(id)arg1;
- (unsigned int)GetUnReadCount:(id)arg1 CreateTimeLargerThan:(unsigned int)arg2;
- (unsigned int)GetMyMesCount:(id)arg1 CreateTimeLargerThan:(unsigned int)arg2;
- (unsigned int)GetMaxLocalIDInHelloMessage:(id)arg1;
- (unsigned int)GetUnReadCountInHello:(id)arg1;
- (unsigned int)GetAllMesCount:(id)arg1;
- (id)GetSecMsgBySvrId:(long long)arg1;
- (id)GetRevokeMsgBySvrId:(long long)arg1;
- (void)UpdateVoiceStatus:(id)arg1 LocalID:(unsigned int)arg2 DownloadStatus:(unsigned int)arg3;
- (void)UpdateVoiceMessage:(id)arg1 MsgWrap:(id)arg2;
- (void)UpdateVoiceMessage:(id)arg1 MsgWrap:(id)arg2 fixTime:(BOOL)arg3;
- (id)AddVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3;
- (id)AddShortVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3;
- (void)ResendVideoMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)AddVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3 MsgType:(unsigned int)arg4;
- (id)AddVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3 GroupInfo:(id)arg4 MsgType:(unsigned int)arg5;
- (void)StartUploadVideo:(id)arg1 MsgWrap:(id)arg2;
- (void)suspendMediaUploadStart;
- (void)resumeMediaUploadStart;
- (void)StopUploadVideo:(id)arg1 MsgWrap:(id)arg2;
- (void)StopUploadVideo:(id)arg1 MsgWrap:(id)arg2 FromDel:(BOOL)arg3;
- (void)StopUploadVideoByChatName:(id)arg1;
- (void)PauseUploadVideoMsgWrap:(id)arg1;
- (void)StartDownloadVideo:(id)arg1 MsgWrap:(id)arg2 Priority:(BOOL)arg3;
- (void)StartDownloadVideo:(id)arg1 MsgWrap:(id)arg2 Priority:(BOOL)arg3 Silent:(BOOL)arg4;
- (void)StartPreloadVideo:(id)arg1;
- (void)StartPreloadVideo:(id)arg1 useQuota:(BOOL)arg2;
- (void)PausePreloadVideo;
- (void)ResumePreloadVideo;
- (void)CleanPreloadVideoCache;
- (unsigned long long)ForceCleanAllPreloadVideoCache;
- (BOOL)StopDownloadVideo:(id)arg1 MsgWrap:(id)arg2 downloadTaskInfo:(id *)arg3;
- (void)StopDownloadSilentVideo:(id)arg1 MsgWrap:(id)arg2;
- (void)StopDownloadVideoByChatName:(id)arg1;
- (void)delayDownloadVideoRemainPart:(id)arg1 DownloadMode:(unsigned long long)arg2;
- (void)downLoadRemainPart:(id)arg1;
- (void)DropChatTable:(id)arg1;
- (void)StartUploadImageMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddUniqueLocalMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2 fixTime:(BOOL)arg3 NewMsgArriveNotify:(BOOL)arg4 Unique:(BOOL)arg5;
- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2 fixTime:(BOOL)arg3 NewMsgArriveNotify:(BOOL)arg4;
- (id)backupGetMsg:(id)arg1 n64svrIDArray:(id)arg2;
- (id)backupGetPayMsg:(id)arg1 fromTime:(unsigned int)arg2 toTime:(unsigned int)arg3;
- (id)backupGetVoipMsg:(id)arg1 fromTime:(unsigned int)arg2 toTime:(unsigned int)arg3;
- (BOOL)AddBackupMsg:(id)arg1 MsgWraps:(id)arg2;
- (void)updateMsgSourceOnSendSuccess:(id)arg1 secMsgSource:(id)arg2 svrTime:(unsigned int)arg3;
- (void)UpdateMsgSourceToDB:(id)arg1;
- (void)UpdateMsgFlagToDB:(id)arg1;
- (void)updateMsgExtCommonInfo:(id)arg1 xmlContent:(id)arg2;
- (BOOL)UpdateLastMsgToUnread:(id)arg1;
- (void)AddEmoticonMsg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)isChatStatusNotifyOpenForMsgWrap:(id)arg1;
- (BOOL)StartDownloadEmoticonMsgWrap:(id)arg1 HighPriority:(BOOL)arg2;
- (BOOL)StopDownloadEmoticonMsgWrapByChatName:(id)arg1 n64SvrID:(long long)arg2;
- (void)SetEmoticonGameEnd:(id)arg1 MsgWrap:(id)arg2;
- (void)UpdateEmoticonMsg:(id)arg1;
- (void)SetGetLocationEnd:(id)arg1 MsgWrap:(id)arg2;
- (void)StartUploadAppMsg:(id)arg1 MsgWrap:(id)arg2 Scene:(unsigned int)arg3;
- (void)AddAppMsg:(id)arg1 MsgWrap:(id)arg2 DataPath:(id)arg3 Scene:(unsigned int)arg4;
- (void)AddAppMsg:(id)arg1 MsgWrap:(id)arg2 Data:(id)arg3 Scene:(unsigned int)arg4;
- (BOOL)StartPredownloadAppAttach:(id)arg1 MsgWrap:(id)arg2 useQuota:(BOOL)arg3;
- (BOOL)StartDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)StartDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2 Silent:(BOOL)arg3;
- (BOOL)StartDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2 Silent:(BOOL)arg3 autoDownload:(BOOL)arg4;
- (BOOL)StartDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2 Silent:(BOOL)arg3 autoDownload:(BOOL)arg4 behavior:(long long)arg5;
- (void)StopDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2;
- (void)StopDownloadSilentAppAttach:(id)arg1 MsgWrap:(id)arg2;
- (void)StopUploadAppAttach:(id)arg1 MsgWrap:(id)arg2;
- (void)CheckQueue;
- (void)ModVoipMsgStatus:(id)arg1 MsgWrap:(id)arg2;
- (id)GetLastMsgFromUsr:(id)arg1;
- (id)GetLastMsgToUsr:(id)arg1;
- (id)GetLastVoipMsg:(id)arg1 AfterTime:(unsigned int)arg2;
- (void)HandleAppMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)HandleVideoMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)QueryVoIPMessageWrapsInTransactionWithChatName:(id)arg1 createTime:(unsigned int)arg2 recentTime:(unsigned int)arg3 completion:(id /* block */)arg4;
- (void)HandleVoipMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)HandleSvrCmd:(id)arg1 MsgWrap:(id)arg2;
- (void)onChatBotLoginAuth:(id)arg1;
- (void)onReceiveFileMsgUploadNotice:(id)arg1 msg:(id)arg2;
- (void)OnSendMessageSuccess:(id)arg1;
- (void)OnSendMessageFail:(id)arg1;
- (void)onBypEmotionMsgModByBitSet:(unsigned int)arg1 msgWrap:(id)arg2;
- (void)onBypMsgModByBitSet:(unsigned int)arg1 msgWrap:(id)arg2;
- (void)onNewSyncAddMessage:(id)arg1;
- (void)onNewSyncDeleteMessage:(id)arg1;
- (void)onNewSyncAddMsgSessionArray:(id)arg1 withUsers:(id)arg2;
- (void)onNewSyncNotAddDBMessage:(id)arg1;
- (void)onNewSyncClearUnread:(id)arg1;
- (void)onNewSyncSpecialSession:(id)arg1 withMessages:(id)arg2;
- (void)onNewSyncShowPush:(id)arg1 isAlwaysShow:(BOOL)arg2;
- (void)onNewSyncNotAddDBSession:(id)arg1 withMessages:(id)arg2;
- (void)OnAddMessageByReceiver:(id)arg1;
- (void)OnMessageSentBySender:(id)arg1;
- (void)OnErrorBySender:(id)arg1 ErrNo:(int)arg2;
- (void)OnErrorByReceiver:(id)arg1 ErrNo:(int)arg2;
- (void)UpdateVideoMsg:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (unsigned int)GetImgOrVideoOrAppMsgMinCreateTime:(id)arg1;
- (unsigned int)GetVerticalSearchMsgMinCreateTime:(id)arg1;
- (id)GetImgOrVideoOrAppLastMsg:(id)arg1 StartCreateTime:(unsigned int)arg2 EndCreateTime:(unsigned int)arg3 Limit:(int)arg4 needFullMessage:(BOOL)arg5;
- (id)GetImgOrVideoOrAppNextMsg:(id)arg1 StartCreateTime:(unsigned int)arg2 EndCreateTime:(unsigned int)arg3 Limit:(int)arg4 needFullMessage:(BOOL)arg5;
- (id)GetVerticalSearchLastMsgs:(id)arg1 StartCreateTime:(unsigned int)arg2 EndCreateTime:(unsigned int)arg3 Limit:(int)arg4 needFullMessage:(BOOL)arg5;
- (id)GetVerticalSearchNextMsgs:(id)arg1 StartCreateTime:(unsigned int)arg2 EndCreateTime:(unsigned int)arg3 Limit:(int)arg4 needFullMessage:(BOOL)arg5;
- (id)GetImgOrVideoOrAppLastMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(int)arg4;
- (id)GetImgOrVideoOrAppNextMsg:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(int)arg4;
- (id)GetAppMsgList:(id)arg1 AfterID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(int)arg4;
- (id)GetAppMsgList:(id)arg1 FromID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(int)arg4;
- (id)GetAppMsgList:(id)arg1 AfterID:(unsigned int)arg2 CreateTime:(unsigned int)arg3 Limit:(int)arg4 isAscending:(BOOL)arg5;
- (id)BatchGetPayLedgerMesssageWrap:(id)arg1;
- (id)BatchGetPayLedgerMesssageWrap:(id)arg1 beforeCreateTime:(unsigned int)arg2;
- (id)BatchGetPayLedgerMesssageWrap:(id)arg1 afterCreateTime:(unsigned int)arg2;
- (void)StartDownloadHDImageForSaveAlbum:(id)arg1;
- (void)StartPredownloadImage:(id)arg1 HD:(BOOL)arg2 useQuota:(BOOL)arg3;
- (void)StartDownloadImage:(id)arg1 HD:(BOOL)arg2 AutoDownload:(BOOL)arg3;
- (void)StartDownloadImage:(id)arg1 HD:(BOOL)arg2 AutoDownload:(BOOL)arg3 SaveAlbum:(BOOL)arg4 Silent:(BOOL)arg5;
- (void)StartDownloadImage:(id)arg1 HD:(BOOL)arg2 AutoDownload:(BOOL)arg3 SaveAlbum:(BOOL)arg4 Silent:(BOOL)arg5 behavior:(long long)arg6;
- (void)StopDownloadImage:(id)arg1;
- (void)SilentImageDownloadTasks:(id)arg1;
- (void)StopImageDownloadTask:(id)arg1;
- (void)StopSilentImageDownloadTask:(id)arg1;
- (void)StopQuotaImageDownloadTask:(id)arg1;
- (BOOL)isDownloadingHDImage:(id)arg1;
- (unsigned int)GetUploadPercent:(id)arg1;
- (void)StartDownloadThumb:(id)arg1;
- (void)StartDownloadThumb:(id)arg1 isPrior:(BOOL)arg2;
- (unsigned int)GetDownloadThumbStatus:(id)arg1;
- (void)ClearAllMessagePatternCacheCache;
- (BOOL)InAppAttachDownloading:(id)arg1 MsgWrap:(id)arg2 AttachId:(id)arg3;
- (BOOL)InAppAttachDownloading:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)IsNonQuotaDownloading:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)preCheckAppAttachCanQuickDownload:(id)arg1;
- (void)StartDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2 AttachId:(id)arg3 AttachDataSize:(unsigned int)arg4 AttachFileExt:(id)arg5;
- (BOOL)StartDownloadAppAttachInCDN:(id)arg1 MsgWrap:(id)arg2 Silent:(BOOL)arg3 autoDownload:(BOOL)arg4 behavior:(long long)arg5;
- (unsigned long long)QueryDownloadedLength:(id)arg1;
- (void)AddRecordMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)StartDownloadRecordThumbData:(id)arg1 DataId:(id)arg2;
- (void)StartDownloadRecordMiddleData:(id)arg1 DataId:(id)arg2;
- (void)StartDownloadRecordData:(id)arg1 DataId:(id)arg2;
- (BOOL)StartDownloadByRecordMsg:(id)arg1;
- (BOOL)StartDownloadByHistoryRecordMsg:(id)arg1 prior:(BOOL)arg2;
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2;
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2 prior:(BOOL)arg3;
- (BOOL)StopDownloadRecordMsg:(id)arg1 downloadTaskInfo:(id *)arg2;
- (BOOL)StopDownloadRecordMsg:(id)arg1 DataId:(id)arg2 downloadTaskInfo:(id *)arg3;
- (BOOL)IsRecordMsgDownloading:(id)arg1;
- (BOOL)isDownloadingRecordData:(id)arg1 dataId:(id)arg2 middle:(BOOL)arg3;
- (id)getSemaphore;
- (void)onAuthOK;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)getSentFailMsgs;
- (void)reSendAllMsgFromNotificationDone;
- (void)enterForeground;
- (void)enterBackground;
- (void)onUploadImageRequestWithWrap:(id)arg1;
- (void)onGetBigImageResultWithWrap:(id)arg1 isSaveImgOK:(BOOL)arg2;
- (void)onGetBigImageErrorWithWrap:(id)arg1;
- (id)onGetMsg:(id)arg1 LocalID:(unsigned int)arg2 Wrap:(id)arg3;
- (void)onModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onUploadImageModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onUploadImageModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onUploadBypassImageCdnFinish:(id)arg1;
- (void)onUploadBypassVideoCdnFinish:(id)arg1;
- (void)onUploadAppMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onOpenUploadSendBypassMsg:(id)arg1;
- (void)onUploadCDNAppMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onUploadBypassFileFinish:(id)arg1;
- (void)onDownOpenMsgModMsg:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onUploadCDNRecordMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned int)arg3;
- (void)onUploadBypassRecordFinish:(id)arg1;
- (id)getImageMsg:(id)arg1 limit:(int)arg2;
- (id)getImageMsg:(id)arg1 beforeCreateTime:(unsigned int)arg2 limit:(int)arg3;
- (id)getMsg:(id)arg1 beforeCreateTime:(unsigned int)arg2 limit:(int)arg3;
- (BOOL)IsVideoMoovHasDownloadedByMessageWrap:(id)arg1;
- (void)updateVideoDownloadModeWithClientId:(id)arg1 downloadMode:(unsigned long long)arg2;
- (BOOL)hasMsg:(id)arg1 fromCreateTime:(unsigned int)arg2 endTime:(unsigned int)arg3;
- (unsigned int)GetMaxCreateTimeInMessage:(id)arg1;
- (unsigned int)GetMinCreateTimeInMessage:(id)arg1;
- (id)GetFTSMsgRealChatUsrInTransaction:(id)arg1 forIdList:(id)arg2;
- (id)GetMsgForUsr:(id)arg1 fromLocalIdList:(id)arg2;
- (int)AppMsgToTextTypeByMsgSource:(id)arg1;
- (void)changeAppMsgToText:(id)arg1 type:(int)arg2;
- (BOOL)addAppMessageExt:(id)arg1;
- (BOOL)deleteAppMessageExtWithUserName:(id)arg1;
- (BOOL)deleteAppMessageExtTable:(id)arg1;
- (id)getMarkColorForTableLocation:(id)arg1;
- (void)checkAndUpdateReferMsgAsRevoked:(id)arg1 chatName:(id)arg2;
- (void)updateReferMsgAsRevoked:(id)arg1 chatName:(id)arg2;
- (long long)numberOfMessagesIn:(id)arg1 newerThan:(id)arg2 destination:(id)arg3 fromSender:(id)arg4;
- (long long)numberOfMessagesIn:(id)arg1 newerThan:(id)arg2 endTime:(id)arg3 type:(long long)arg4 destination:(id)arg5 fromSender:(id)arg6;
- (long long)numberOfRedPacketsIn:(id)arg1 newerThan:(id)arg2 destination:(id)arg3 fromSender:(id)arg4;
- (id)getRedPacketMessageInSession:(id)arg1 NewerThan:(id)arg2;
- (id)getUnreadEcsGiftMsgInSession:(id)arg1 newerThan:(id)arg2;
- (void)MigrateOpenImChatRoomMsgWithOpenIMChatRoomUserName:(id)arg1 andAssociateChatRoomUserName:(id)arg2;
- (void)stopChatRoomDownloadUpload:(id)arg1;
- (void)deleteDownloadCache:(id)arg1;
- (void)PostInsertParsedXmlSysMsg:(id)arg1 ChatName:(id)arg2;
- (void)dealHistoryMsg:(id)arg1 ChatName:(id)arg2;
- (BOOL)deleteVoIPMessageHistory:(id)arg1;
- (id)GetFirstAbnormalCreateTimeMsg:(id)arg1;
- (id)GetAscMsgsByCreateTime:(id)arg1 FromCreateTime:(unsigned int)arg2 Limit:(int)arg3;
- (BOOL)batchUpdateAbnormalCreateTimeMsg:(id)arg1 arrMsg:(id)arg2;
- (unsigned long long)imageMaxDisplaySize;
- (void)setImageMaxDisplaySize:(unsigned long long)arg1;
- (id)uploadVideoUnifyMgr;
- (void)setUploadVideoUnifyMgr:(id)arg1;
- (id)assetThreshold;
- (void)setAssetThreshold:(id)arg1;
- (id)waittingSecMsgCount;
- (void)setWaittingSecMsgCount:(id)arg1;
- (BOOL)hasCheckMsgTime;
- (void)setHasCheckMsgTime:(BOOL)arg1;
- (BOOL)isUsingNewImageUploadMgr;
- (void)setIsUsingNewImageUploadMgr:(BOOL)arg1;
- (void).cxx_destruct;
@end

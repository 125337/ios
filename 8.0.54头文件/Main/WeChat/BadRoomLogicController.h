@interface BadRoomLogicController : NSObject <PBMessageObserverDelegate, BadRoomMgrExt, CNetworkStatusExt>
{
    CMMDB * m_oMMDB; // +0x8
    CBaseContact * m_contact; // +0x10
    MMSessionInfo * m_sessionInfo; // +0x18
    unsigned int m_lastDeleteSequence; // +0x20
    unsigned int m_initialLastMsgSeq; // +0x24
    CMessageWrap * m_currentBrokenMsg; // +0x28
    CMessageWrap * m_nextBrokenMsg; // +0x30
    unsigned int m_nextNewMessageToGet; // +0x38
    unsigned int m_firstDownGetSeq; // +0x3c
    BOOL m_bHasMoreNewMsg; // +0x40
    BOOL m_bGettingMsg; // +0x41
    BOOL m_bHasDownBrokeMsg; // +0x42
    CMessageWrap * m_firstUnreadMsg; // +0x48
    ProtobufCGIWrap * m_cgiWrap; // +0x50
    BOOL m_hasExitRoom; // +0x58
    BOOL m_hasGetFirstPage; // +0x59
    BOOL _m_hasIniitialUnread; // +0x5a
    id <BadRoomLogicControllerDelegate> _m_delegate; // +0x60
}
+ (void)updateSessionDB:(id)arg1;
+ (void)clearUnReadCount:(id)arg1;
+ (void)clearSession:(id)arg1;
+ (void)clearUnReadCount:(id)arg1 clearUndeliverCount:(BOOL)arg2;
- (id)initWithContact:(id)arg1;
- (void)onEnterRoom:(id)arg1;
- (id)getFirstUnreadMsg;
- (void)getChatRoomMsg:(unsigned int)arg1 getOld:(BOOL)arg2;
- (void)getChatRoomMsg:(unsigned int)arg1 getOld:(BOOL)arg2 filterSeq:(unsigned int)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (BOOL)HandleGetChatRoomMsgResp:(id)arg1 Event:(unsigned int)arg2;
- (void)getMoreMsg;
- (void)exitRoom;
- (void)batchAddMsg:(id)arg1 ignoreSession:(BOOL)arg2;
- (void)onGetRoomNewMsg:(id)arg1 continueFlag:(BOOL)arg2 isFirstUnRead:(BOOL)arg3;
- (void)stopGettingDownForUnreadMsgs;
- (BOOL)filterDownMsgList:(id)arg1;
- (BOOL)filterMsgList:(id)arg1;
- (void)onGetRoomOldMsg:(id)arg1 continueFlag:(BOOL)arg2;
- (id)changeToSysMsgIfRevoked:(id)arg1;
- (id)createRevokeMsgByOriginMsg:(id)arg1 revokeContent:(id)arg2;
- (void)updateMsgForSecurityMsgContent:(id)arg1 candidateMsgs:(id)arg2;
- (void)onSilenceNotify:(id)arg1 msgSequence:(unsigned int)arg2;
- (void)onDeleteSession:(id)arg1 lastSequence:(unsigned int)arg2;
- (BOOL)hasBadRoomUnread;
- (void)ReachabilityChange:(unsigned int)arg1;
- (unsigned int)m_firstDownGetSeq;
- (void)setM_firstDownGetSeq:(unsigned int)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)m_hasIniitialUnread;
- (void)setM_hasIniitialUnread:(BOOL)arg1;
- (void).cxx_destruct;
@end


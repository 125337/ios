@interface BESessionBoxInfo : NSObject
{
    BOOL _needShowAllNoticeUnreadCntPrefix; // +0x8
    BOOL _needShowAllArticleUnreadCntPrefix; // +0x9
    BOOL _isNotiMsg; // +0xa
    unsigned int _unReadCnt; // +0xc
    unsigned int _showRedDotType; // +0x10
    unsigned int _unReadArticleMsgCnt; // +0x14
    unsigned int _unReadNotiMsgCnt; // +0x18
    unsigned int _showLiveStatus; // +0x1c
    NSString * _digest; // +0x20
    NSString * _bizUsrName; // +0x28
    unsigned long long _lastMsgSvrId; // +0x30
    unsigned long long _boxLatestMsgTime; // +0x38
    NSString * _reportJson; // +0x40
    CMessageWrap * _lastMsg; // +0x48
    CMessageWrap * _digestMsg; // +0x50
    CMessageWrap * _latestUnreadImportantNotifyMsg; // +0x58
}
- (id)description;
- (unsigned int)unReadCnt;
- (void)setUnReadCnt:(unsigned int)arg1;
- (id)digest;
- (void)setDigest:(id)arg1;
- (unsigned int)showRedDotType;
- (void)setShowRedDotType:(unsigned int)arg1;
- (id)bizUsrName;
- (void)setBizUsrName:(id)arg1;
- (unsigned long long)lastMsgSvrId;
- (void)setLastMsgSvrId:(unsigned long long)arg1;
- (BOOL)needShowAllNoticeUnreadCntPrefix;
- (void)setNeedShowAllNoticeUnreadCntPrefix:(BOOL)arg1;
- (BOOL)needShowAllArticleUnreadCntPrefix;
- (void)setNeedShowAllArticleUnreadCntPrefix:(BOOL)arg1;
- (unsigned int)unReadArticleMsgCnt;
- (void)setUnReadArticleMsgCnt:(unsigned int)arg1;
- (unsigned int)unReadNotiMsgCnt;
- (void)setUnReadNotiMsgCnt:(unsigned int)arg1;
- (unsigned long long)boxLatestMsgTime;
- (void)setBoxLatestMsgTime:(unsigned long long)arg1;
- (unsigned int)showLiveStatus;
- (void)setShowLiveStatus:(unsigned int)arg1;
- (id)reportJson;
- (void)setReportJson:(id)arg1;
- (BOOL)isNotiMsg;
- (void)setIsNotiMsg:(BOOL)arg1;
- (id)lastMsg;
- (void)setLastMsg:(id)arg1;
- (id)digestMsg;
- (void)setDigestMsg:(id)arg1;
- (id)latestUnreadImportantNotifyMsg;
- (void)setLatestUnreadImportantNotifyMsg:(id)arg1;
- (void).cxx_destruct;
@end

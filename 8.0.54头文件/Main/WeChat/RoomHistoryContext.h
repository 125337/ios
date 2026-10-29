@interface RoomHistoryContext : NSObject
{
    BOOL _revokeAndDeletingMemberFlag; // +0x8
    BOOL _isExpiredForRevoking; // +0x9
    CMessageWrap * _historyMessage; // +0x10
    CMessageWrap * _downloadingHistoryRecordMsg; // +0x18
    NSString * _nsEventIdForRevokeHistoryRecord; // +0x20
}
+ (void)StatOperRoom:(id)arg1 HistoryMessage:(id)arg2 ClickType:(unsigned int)arg3 RemovedMembers:(id)arg4 CgiResult:(unsigned int)arg5;
+ (void)StatViewHistory:(id)arg1 HistoryMessage:(id)arg2;
- (void)reset;
- (id)historyMessage;
- (void)setHistoryMessage:(id)arg1;
- (id)downloadingHistoryRecordMsg;
- (void)setDownloadingHistoryRecordMsg:(id)arg1;
- (id)nsEventIdForRevokeHistoryRecord;
- (void)setNsEventIdForRevokeHistoryRecord:(id)arg1;
- (BOOL)revokeAndDeletingMemberFlag;
- (void)setRevokeAndDeletingMemberFlag:(BOOL)arg1;
- (BOOL)isExpiredForRevoking;
- (void)setIsExpiredForRevoking:(BOOL)arg1;
- (void).cxx_destruct;
@end


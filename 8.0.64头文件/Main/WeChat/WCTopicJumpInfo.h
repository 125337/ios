@interface WCTopicJumpInfo : NSObject
{
    BOOL _isDuplicateReq; // +0x8
    BOOL _isReplaced; // +0x9
    BOOL _isTimeout; // +0xa
    BOOL _isMsgRecord; // +0xb
    BOOL _openWeAppWithoutAlert; // +0xc
    unsigned int _eventId; // +0x10
    id _object; // +0x18
    SearchTagJumpRequest * _req; // +0x20
    SearchTagJumpResponse * _rsp; // +0x28
    WCTopicReportBaseItem * _reportItem; // +0x30
    id /* block */ _handler; // +0x38
}
- (BOOL)isTrash;
- (int)jumpType;
- (void)sendResult;
- (BOOL)isEqualReq:(id)arg1;
- (id)object;
- (void)setObject:(id)arg1;
- (id)req;
- (void)setReq:(id)arg1;
- (id)rsp;
- (void)setRsp:(id)arg1;
- (BOOL)isDuplicateReq;
- (void)setIsDuplicateReq:(BOOL)arg1;
- (BOOL)isReplaced;
- (void)setIsReplaced:(BOOL)arg1;
- (BOOL)isTimeout;
- (void)setIsTimeout:(BOOL)arg1;
- (id)reportItem;
- (void)setReportItem:(id)arg1;
- (BOOL)isMsgRecord;
- (void)setIsMsgRecord:(BOOL)arg1;
- (BOOL)openWeAppWithoutAlert;
- (void)setOpenWeAppWithoutAlert:(BOOL)arg1;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;
- (unsigned int)eventId;
- (void)setEventId:(unsigned int)arg1;
- (void).cxx_destruct;
@end

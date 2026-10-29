@interface WCFinderMsgChatInfoReporter : NSObject
{
    BOOL _rejectMsgStatus; // +0x8
    BOOL _needReport; // +0x9
    unsigned int _myAccountType; // +0xc
    unsigned int _openChatInfoCount; // +0x10
    unsigned int _clearMsgHistoryClickCount; // +0x14
    unsigned int _complianClickCount; // +0x18
    NSString * _chatSessionId; // +0x20
    NSString * _chatName; // +0x28
    NSString * _talkerUsername; // +0x30
}
- (void)enterViewController;
- (void)quitAndReport;
- (id)chatSessionId;
- (void)setChatSessionId:(id)arg1;
- (unsigned int)myAccountType;
- (void)setMyAccountType:(unsigned int)arg1;
- (id)chatName;
- (void)setChatName:(id)arg1;
- (id)talkerUsername;
- (void)setTalkerUsername:(id)arg1;
- (BOOL)rejectMsgStatus;
- (void)setRejectMsgStatus:(BOOL)arg1;
- (unsigned int)openChatInfoCount;
- (void)setOpenChatInfoCount:(unsigned int)arg1;
- (unsigned int)clearMsgHistoryClickCount;
- (void)setClearMsgHistoryClickCount:(unsigned int)arg1;
- (unsigned int)complianClickCount;
- (void)setComplianClickCount:(unsigned int)arg1;
- (BOOL)needReport;
- (void)setNeedReport:(BOOL)arg1;
- (void).cxx_destruct;
@end


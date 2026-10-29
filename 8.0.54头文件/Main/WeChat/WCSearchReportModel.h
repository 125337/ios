@interface WCSearchReportModel : WSReportBaseItem
{
    NSString * _sessionId; // +0x8
    unsigned long long _scene; // +0x10
    NSString * _msgId; // +0x18
    NSString * _msgFromUserName; // +0x20
    unsigned long long _chatType; // +0x28
    NSString * _chatRoomId; // +0x30
}
- (id)init;
- (id)initWithMsgWrap:(id)arg1;
- (id)initWithSNSItem:(id)arg1 chatType:(unsigned long long)arg2;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (id)msgId;
- (void)setMsgId:(id)arg1;
- (id)msgFromUserName;
- (void)setMsgFromUserName:(id)arg1;
- (unsigned long long)chatType;
- (void)setChatType:(unsigned long long)arg1;
- (id)chatRoomId;
- (void)setChatRoomId:(id)arg1;
- (void).cxx_destruct;
@end


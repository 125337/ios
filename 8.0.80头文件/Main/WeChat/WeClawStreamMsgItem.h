@interface WeClawStreamMsgItem : NSObject <WCTTableCoding>
{
    BOOL _isFinished; // +0x8
    BOOL _isStop; // +0x9
    unsigned int _receivedSeq; // +0xc
    id <WeClawStreamMsgItemDelegate> _delegate; // +0x10
    NSString * _username; // +0x18
    long long _streamType; // +0x20
    NSString * _streamTicket; // +0x28
    long long _msgSvrId; // +0x30
    NSString * _msgInitContent; // +0x38
    NSString * _streamId; // +0x40
    CMessageWrap * _localMsg; // +0x48
    NSMutableString * _receiveContent; // +0x50
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)username;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_username;
+ (const void *)streamType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_streamType;
+ (const void *)streamTicket;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_streamTicket;
+ (const void *)msgSvrId;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_msgSvrId;
+ (const void *)isFinished;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_isFinished;
+ (void)__wcdb_table_constraint_5:(void *)arg1;
+ (void)__wcdb_table_constraint_6:(void *)arg1;
+ (void)__wcdb_table_constraint_7:(void *)arg1;
- (id)initWithType:(long long)arg1;
- (id)taskKey;
- (id)createLocalMsg;
- (void)insertOrUpdateLocalMsg;
- (void)beginStreamMsg;
- (void)stop;
- (id)type;
- (id)currentContent;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (long long)streamType;
- (void)setStreamType:(long long)arg1;
- (id)streamTicket;
- (void)setStreamTicket:(id)arg1;
- (long long)msgSvrId;
- (void)setMsgSvrId:(long long)arg1;
- (BOOL)isFinished;
- (void)setIsFinished:(BOOL)arg1;
- (id)msgInitContent;
- (void)setMsgInitContent:(id)arg1;
- (id)streamId;
- (void)setStreamId:(id)arg1;
- (id)localMsg;
- (void)setLocalMsg:(id)arg1;
- (BOOL)isStop;
- (void)setIsStop:(BOOL)arg1;
- (unsigned int)receivedSeq;
- (void)setReceivedSeq:(unsigned int)arg1;
- (id)receiveContent;
- (void)setReceiveContent:(id)arg1;
- (void).cxx_destruct;
@end

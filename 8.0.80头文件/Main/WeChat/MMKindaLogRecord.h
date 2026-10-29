@interface MMKindaLogRecord : NSObject
{
    int _type; // +0x8
    int _action; // +0xc
    NSString * _sessionId; // +0x10
    long long _sequenceId; // +0x18
    NSString * _url; // +0x20
    NSDictionary * _extInfo; // +0x28
}
+ (id)KindaLogRecordWithType:(int)arg1 sessionId:(id)arg2 sequenceId:(long long)arg3 url:(id)arg4 action:(int)arg5 extInfo:(id)arg6;
- (id)initWithType:(int)arg1 sessionId:(id)arg2 sequenceId:(long long)arg3 url:(id)arg4 action:(int)arg5 extInfo:(id)arg6;
- (id)description;
- (int)type;
- (id)sessionId;
- (long long)sequenceId;
- (id)url;
- (int)action;
- (id)extInfo;
- (void).cxx_destruct;
@end

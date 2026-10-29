@interface OfflineGetMsgResponse : NSObject
{
    int _pollTime; // +0x8
    NSString * _ackKey; // +0x10
    NSString * _appMsg; // +0x18
}
- (id)ackKey;
- (void)setAckKey:(id)arg1;
- (id)appMsg;
- (void)setAppMsg:(id)arg1;
- (int)pollTime;
- (void)setPollTime:(int)arg1;
- (void).cxx_destruct;
@end


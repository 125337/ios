@interface WeDropLocalNetworkTask : NSObject
{
    BOOL _isSend; // +0x8
    BOOL _running; // +0x9
    NSString * _uuid; // +0x10
    NSData * _sendingData; // +0x18
}
- (id)init;
- (id)description;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (BOOL)isSend;
- (void)setIsSend:(BOOL)arg1;
- (id)sendingData;
- (void)setSendingData:(id)arg1;
- (BOOL)running;
- (void)setRunning:(BOOL)arg1;
- (void).cxx_destruct;
@end

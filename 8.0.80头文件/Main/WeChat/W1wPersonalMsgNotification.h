@interface W1wPersonalMsgNotification : NSObject
{
    unsigned int _timestamp; // +0x8
    NSString * _digest; // +0x10
}
- (id)digest;
- (void)setDigest:(id)arg1;
- (unsigned int)timestamp;
- (void)setTimestamp:(unsigned int)arg1;
- (void).cxx_destruct;
@end

@interface ProtobufPrtlChannel : NSObject
{
    ProtobufCGIWrap * m_pbCGIWrap; // +0x8
    NSObject * m_ptrl; // +0x10
}
+ (void)setDefaultRetryCount:(int)arg1;
+ (int)getDefaultRetryCount;
- (void)initProtocolChannel;
- (id)initWithCGIWrap:(id)arg1;
- (void)InitPrtl:(unsigned int)arg1 Delegate:(id)arg2 Scene:(unsigned int)arg3;
- (BOOL)Start;
- (void)Stop;
- (void).cxx_destruct;
@end


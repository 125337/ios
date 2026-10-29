@interface SRIOConsumer : NSObject
{
    id /* block */ _scanner; // +0x8
    id /* block */ _handler; // +0x10
    unsigned long long _bytesNeeded; // +0x18
    BOOL _readToCurrentFrame; // +0x20
    BOOL _unmaskBytes; // +0x21
}
- (void)resetWithScanner:(id /* block */)arg1 handler:(id /* block */)arg2 bytesNeeded:(unsigned long long)arg3 readToCurrentFrame:(BOOL)arg4 unmaskBytes:(BOOL)arg5;
- (unsigned long long)bytesNeeded;
- (void)setBytesNeeded:(unsigned long long)arg1;
- (id /* block */)consumer;
- (id /* block */)handler;
- (BOOL)readToCurrentFrame;
- (BOOL)unmaskBytes;
- (void).cxx_destruct;
@end

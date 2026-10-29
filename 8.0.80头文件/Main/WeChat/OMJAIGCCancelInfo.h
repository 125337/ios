@interface OMJAIGCCancelInfo : NSObject
{
    unsigned long long _cancelReason; // +0x8
}
- (id)initWithCancelReason:(unsigned long long)arg1;
- (unsigned long long)cancelReason;
- (void)setCancelReason:(unsigned long long)arg1;
@end

@interface GameViewVisibleStateObj : NSObject
{
    BOOL _visible; // +0x8
    unsigned long long _timestamp; // +0x10
    NSString * _reason; // +0x18
}
- (BOOL)visible;
- (void)setVisible:(BOOL)arg1;
- (unsigned long long)timestamp;
- (void)setTimestamp:(unsigned long long)arg1;
- (id)reason;
- (void)setReason:(id)arg1;
- (void).cxx_destruct;
@end

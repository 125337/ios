@interface TXCVideoLogger : NSObject
{
    id <TXCVideoLoggerDelegate> _delegate; // +0x8
}
+ (id)sharedInstance;
- (void)logAtLevel:(unsigned long long)arg1 message:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end


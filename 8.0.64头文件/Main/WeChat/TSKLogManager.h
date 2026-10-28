@interface TSKLogManager : NSObject
{
    id <TSKLogProtocol> _delegate; // +0x8
    unsigned long long _logLevels; // +0x10
}
+ (id)sharedInstance;
- (id)init;
- (void)setLogDelegate:(id)arg1 withLevels:(unsigned long long)arg2;
- (void)setLogLevels:(unsigned long long)arg1;
- (void)logLevel:(unsigned long long)arg1 inPosition:(_TSKLogPosition)arg2 withFormat:(id)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)logLevels;
- (void).cxx_destruct;
@end

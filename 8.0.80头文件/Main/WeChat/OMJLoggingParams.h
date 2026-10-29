@interface OMJLoggingParams : NSObject
{
    id <OMJLoggingProvider> _loggingProvider; // +0x8
    long long _maxLogLevel; // +0x10
}
- (id)initWithLoggingProvider:(id)arg1;
- (id)initWithLoggingProvider:(id)arg1 maxLogLevel:(long long)arg2;
- (id)loggingProvider;
- (long long)maxLogLevel;
- (void).cxx_destruct;
@end

@interface MMLiveXPlatPollingFetchConfigurationProvider : NSObject <LiveURLivePollingEngineConfiguration>
- (unsigned long long)mergeInterval;
- (unsigned long long)minimumPollInterval;
- (unsigned long long)minimumSleepInterval;
@end

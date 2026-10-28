@interface EdgeComputingThresholdController : NSObject
{
    NSMutableDictionary * receiveDataThresholdRecords; // +0x8
}
- (id)init;
- (BOOL)checkDataReceiveFrequency:(id)arg1;
- (unsigned long long)getTotalCacheDataCountLimit;
- (unsigned long long)getCacheDataCountLimit;
- (unsigned long long)getCacheDataTimeLimit;
- (void).cxx_destruct;
@end

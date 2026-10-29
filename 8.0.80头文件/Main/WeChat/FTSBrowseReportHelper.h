@interface FTSBrowseReportHelper : NSObject
{
    BOOL _isValid; // +0x8
    unsigned long long _browseStartTime; // +0x10
}
- (void)reset;
- (unsigned long long)genTimeInMs;
- (id)addLogParams:(id)arg1;
- (unsigned long long)browseStartTime;
- (void)setBrowseStartTime:(unsigned long long)arg1;
- (BOOL)isValid;
- (void)setIsValid:(BOOL)arg1;
@end

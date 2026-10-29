@interface BaseScanSessionInfo : NSObject
{
    BOOL _hasReportSession; // +0x8
    unsigned int _scanSessionID; // +0xc
    unsigned long long _scanSessionStartTimeStamp; // +0x10
}
- (id)init;
- (void)onStartSession;
- (unsigned long long)scanSessionTotalCost;
- (unsigned int)scanSessionID;
- (void)setScanSessionID:(unsigned int)arg1;
- (unsigned long long)scanSessionStartTimeStamp;
- (void)setScanSessionStartTimeStamp:(unsigned long long)arg1;
- (BOOL)hasReportSession;
- (void)setHasReportSession:(BOOL)arg1;
@end

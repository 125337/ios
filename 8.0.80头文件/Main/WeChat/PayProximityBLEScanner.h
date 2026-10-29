@interface PayProximityBLEScanner : NSObject <CBCentralManagerDelegate>
{
    BOOL _isScanning; // +0x8
    CBCentralManager * _centralManager; // +0x10
    NSObject<OS_dispatch_queue> * _scanQueue; // +0x18
    NSMutableDictionary * _deviceRecords; // +0x20
    double _scanTimeout; // +0x28
    unsigned long long _scanSeq; // +0x30
    long long _scanStartTimeMs; // +0x38
    NSString * _scanSessionId; // +0x40
}
+ (id)sharedInstance;
+ (BOOL)isScanEnabled;
+ (double)configuredTimeout;
+ (double)clampTimeout:(double)arg1;
+ (long long)configuredReportLimit;
- (id)init;
- (void)startScan;
- (void)startScanWithTimeout:(double)arg1;
- (void)startScanInternal:(double)arg1;
- (void)stopScan;
- (void)doStartScanOnQueue:(double)arg1;
- (void)doStopScanOnQueue;
- (void)startScanningWithCentral:(id)arg1;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)centralManager:(id)arg1 didDiscoverPeripheral:(id)arg2 advertisementData:(id)arg3 RSSI:(id)arg4;
- (id)buildSummaries:(id)arg1;
- (void)printSummary:(id)arg1 duration:(double)arg2;
- (id)fetchKindaSessionId;
- (void)reportToMMData:(id)arg1 sessionId:(id)arg2 startTimeMs:(long long)arg3;
- (id)buildReportStringWithSessionId:(id)arg1 timestamp:(long long)arg2 record:(id)arg3;
- (id)escapeField:(id)arg1;
- (id)serviceUUIDsFrom:(id)arg1;
- (id)serviceDataFrom:(id)arg1;
- (id)hexStringFrom:(id)arg1;
- (id)payloadDescriptionFrom:(id)arg1;
- (id)displayValue:(id)arg1;
- (id)centralManager;
- (void)setCentralManager:(id)arg1;
- (id)scanQueue;
- (void)setScanQueue:(id)arg1;
- (id)deviceRecords;
- (void)setDeviceRecords:(id)arg1;
- (BOOL)isScanning;
- (void)setIsScanning:(BOOL)arg1;
- (double)scanTimeout;
- (void)setScanTimeout:(double)arg1;
- (unsigned long long)scanSeq;
- (void)setScanSeq:(unsigned long long)arg1;
- (long long)scanStartTimeMs;
- (void)setScanStartTimeMs:(long long)arg1;
- (id)scanSessionId;
- (void)setScanSessionId:(id)arg1;
- (void).cxx_destruct;
@end

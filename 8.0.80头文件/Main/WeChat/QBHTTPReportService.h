@interface QBHTTPReportService : NSObject
{
    unsigned long long _reportQVCount; // +0x8
    unsigned long long _reportTDNSCount; // +0x10
    unsigned long long _reportSNDSCount; // +0x18
    unsigned long long _bakReportQVCount; // +0x20
    unsigned long long _bakReportTDNSCount; // +0x28
    unsigned long long _bakReportSNDSCount; // +0x30
    NSString * _desKey; // +0x38
    NSString * _rsaKey; // +0x40
    NSMutableDictionary * _subHostInfo; // +0x48
    NSMutableDictionary * _tempSubHostInfo; // +0x50
}
+ (id)sharedInstance;
+ (void)statisticsPVWithHost:(id)arg1 Error:(id)arg2;
- (id)init;
- (void)generateKey;
- (id)encryptData:(id)arg1;
- (id)decryptData:(id)arg1;
- (void)onDoReportNotification:(id)arg1;
- (void)dealloc;
- (void)onDoIncreaseSTValueNotification:(id)arg1;
- (id)serviceUrl;
- (void)resetCounts;
- (void)restoreCounts;
- (id)getPostData:(BOOL)arg1;
- (id)validSubPVStringFromDic:(id)arg1;
- (void)handleRespData:(id)arg1;
- (void)handleRespError:(id)arg1;
- (void).cxx_destruct;
- (id)subHostInfo;
- (void)setSubHostInfo:(id)arg1;
- (id)tempSubHostInfo;
- (void)setTempSubHostInfo:(id)arg1;
@end

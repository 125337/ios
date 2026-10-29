@interface QBWhiteListUtils : NSObject
{
    QBWhiteList * _performanceReportWhiteList; // +0x8
    NSObject * _performanceReportLockObj; // +0x10
    QBWhiteList * _dnsUDPWhiteList; // +0x18
    NSObject * _dnsUDPLockObj; // +0x20
    QBWhiteList * _forceProxyWhiteList; // +0x28
    NSObject * _forceProxyLockObj; // +0x30
    QBWhiteList * _qProxyWhiteList; // +0x38
    NSObject * _QProxyLockObj; // +0x40
    QBWhiteList * _atsVideoWhiteList; // +0x48
    NSObject * _atsVideoLockObj; // +0x50
    QBWhiteList * _urlReportWhiteList; // +0x58
    NSObject * _urlReportLockObj; // +0x60
    QBWhiteList * _dnsHTTPWhiteList; // +0x68
    NSObject * _dnsHTTPLockObj; // +0x70
}
+ (id)sharedInstance;
- (id)init;
- (id)performanceReportWhiteList;
- (id)dnsUDPWhiteList;
- (void)cleanQProxyTempWhiteList;
- (id)qProxyWhiteList;
- (void)cleanForceProxyTempWhiteList;
- (id)forceProxyWhiteList;
- (id)ATSVideoWhiteList;
- (id)urlReportWhiteList;
- (id)dnsHTTPWhiteList;
- (void).cxx_destruct;
@end


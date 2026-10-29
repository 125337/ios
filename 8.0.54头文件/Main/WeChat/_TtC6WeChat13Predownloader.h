@interface _TtC6WeChat13Predownloader : _TtCs12_SwiftObject <ICdnComMgrExt>
{
     biz; // +0x0
     queue; // +0x10
     userInfo; // +0x18
     _isCDNInited; // +0x20
     _requestedQuota; // +0x28
     _increasedQuota; // +0x30
     table; // +0x38
     _quotaDownloading; // +0x40
}
- (void)OnCdnInit;
- (void)databaseDidRecover;
@end


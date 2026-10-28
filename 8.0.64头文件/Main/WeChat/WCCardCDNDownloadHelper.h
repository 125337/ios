@interface WCCardCDNDownloadHelper : NSObject <ICdnComMgrExt>
{
    NSMutableDictionary * _clientMsgId2DownloadInfoMap; // +0x8
}
- (void)dealloc;
- (id)init;
- (id)download:(id)arg1;
- (id)getMd5:(id)arg1;
- (void)OnCdnInit;
- (void)OnCdnDownload:(id)arg1;
- (void).cxx_destruct;
@end

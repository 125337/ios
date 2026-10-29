@interface EmoticonStorePackDownloadLogic : NSObject <StoreEmotionExchangeEmotionPackCgiDelegate, ICdnComMgrExt>
{
    id <EmoticonStorePackDownloadLogicDelegate> _delegate; // +0x8
    EmoticonStoreItem * _item; // +0x10
    StoreEmotionExchangeEmotionPackCgi * _packCgi; // +0x18
}
- (id)initWithStoreItem:(id)arg1;
- (BOOL)tryDownloadWithScence:(int)arg1 isAutomatic:(BOOL)arg2;
- (BOOL)cancelDownload;
- (BOOL)createExchangeCgiWithScence:(int)arg1 isAutomatic:(BOOL)arg2;
- (BOOL)downloadAndInstallEmoticon;
- (void)onExchangeEmotionPackCgiOkWithPid:(id)arg1 DownloadInfo:(id)arg2;
- (void)onExchangeEmotionPackCgiOkWithDesignerSetKey:(id)arg1 needUpdatePids:(id)arg2;
- (void)onExchangeEmotionPackCgiFailedForNoResponseWithPid:(id)arg1;
- (void)onExchangeEmotionPackCgiFailedWithPid:(id)arg1 AndRet:(int)arg2 ErroMsg:(id)arg3;
- (void)OnSetCdnDnsInfo;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (id)getReportStr:(id)arg1;
- (id)mediaInfoForEmoticonItem:(id)arg1;
- (BOOL)IsCdnEmoticonPackageDownlaodFromClientID:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)packCgi;
- (void)setPackCgi:(id)arg1;
- (void).cxx_destruct;
@end

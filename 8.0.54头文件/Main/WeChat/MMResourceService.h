@interface MMResourceService : MMRootService <MMResInfoMgr, PBMessageObserverDelegate, MMResDownloadMgrDelegate, IMsgExt, CNetworkStatusExt, MMServiceProtocol>
{
    NSString * KEY_UPDATE_RES_KEY; // +0x8
    NSString * ACCESS_RES_GROUP; // +0x10
    unsigned int _lastRstCheckResCgiFailTime; // +0x18
    unsigned int _lastDownloadFailTime; // +0x1c
    NSArray * _packageResourceTypeArray; // +0x20
    MMResInfoMgr * _resInfoMgr; // +0x28
    MMResourceDownloadMgr * _resDownloadMgr; // +0x30
}
+ (void)decompressData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)unusedSourceCheck;
- (id)init;
- (BOOL)isRequestInNonAuth;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterForeground;
- (void)reOpenDB;
- (id)getAESKeyInKeyChain:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 WithKeyVersion:(unsigned int)arg3 WithEID:(unsigned int)arg4;
- (void)saveAESKeyInKeyChain:(id)arg1 WithResType:(unsigned int)arg2 WithSubtype:(unsigned int)arg3 WithKeyVersion:(unsigned int)arg4 WithEID:(unsigned int)arg5;
- (void)deleteAESKeyInKeyChain:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 WithKeyVersion:(unsigned int)arg3 WithEID:(unsigned int)arg4;
- (void)checkAndReloadDownloadTask;
- (void)configDelayCheck;
- (void)dealloc;
- (void)clearABTestData:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (id)getResPath:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (id)getResPath:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2 getVersion:(unsigned int *)arg3;
- (id)getResPath:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2 getVersion:(unsigned int *)arg3 verifyChecksum:(BOOL)arg4;
- (id)getResData:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2 ErrorCode:(long long *)arg3;
- (void)didConsumeResource:(unsigned int)arg1 subtype:(unsigned int)arg2;
- (void)removeResource:(unsigned int)arg1 subtype:(unsigned int)arg2;
- (BOOL)getCheckResUpdateRequest:(id)arg1 scene:(int)arg2 context:(id)arg3;
- (id)pbCGIWrapForEncryptCheckResUpdataWithArrResID:(id)arg1 scene:(unsigned int)arg2 context:(id)arg3;
- (void)delayCheckResUpdate:(id)arg1;
- (BOOL)checkAllResUpdate:(id)arg1;
- (void)checkAllTestResUpdate:(id)arg1;
- (void)checkResUpdate:(unsigned int)arg1;
- (void)checkMultiResUpdate:(id)arg1;
- (void)forceUpdateRes:(unsigned int)arg1 WithSubtype:(unsigned int)arg2;
- (void)forceUpdateRes:(unsigned int)arg1 WithSubtype:(unsigned int)arg2 ForceWithoutLogin:(BOOL)arg3;
- (void)reloadDownloadTask;
- (id)convertResTypeLogStringFromReqList:(id)arg1;
- (void)clearExpiredResource:(unsigned int)arg1;
- (unsigned int)curNetType;
- (void)parseNewXml:(id)arg1;
- (void)processResCacheRequest:(id)arg1 Scene:(int)arg2;
- (void)createDownloadTask:(id)arg1;
- (BOOL)isNeedToDownloadNonWebRes:(id)arg1;
- (void)processResDecryptRequest:(id)arg1 Scene:(int)arg2;
- (void)processResDeleteRequest:(id)arg1 Scene:(int)arg2;
- (const char *)readChildText:(const char *)arg1 inNode:(XmlReaderNode_t *)arg2;
- (id)parseDeleteNode:(XmlReaderNode_t *)arg1;
- (id)parseDecryptNode:(XmlReaderNode_t *)arg1;
- (id)parseCacheNode:(XmlReaderNode_t *)arg1;
- (BOOL)hasRegistedResourceType:(unsigned int)arg1;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)OnResUpdateFinishOnMainThread:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)handleDownloadTask:(id)arg1 downloadData:(id)arg2;
- (void)onDownloadTaskStart:(id)arg1;
- (void)onDownloadTaskEnd:(long long)arg1 downloadData:(id)arg2 task:(id)arg3;
- (BOOL)insertNewResInfo:(id)arg1;
- (id)getResInfo:(unsigned int)arg1;
- (id)getResInfo:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (id)getOriginalMd5:(unsigned int)arg1 WithSubRestype:(unsigned int)arg2;
- (BOOL)isForceUpdateMessageReturn:(id)arg1;
- (void)ForceUpdateErrorHandler:(id)arg1;
- (void)ForceUpdateErrorHandler:(id)arg1 ErrorType:(long long)arg2;
- (void)handleCgiReport:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)markRstCheckCgiFail;
- (void)markDownloadResourceFail;
- (unsigned int)getFailRetryInterval;
- (void)checkToRetryFailTask;
- (id)packageResourceTypeArray;
- (void)setPackageResourceTypeArray:(id)arg1;
- (id)resInfoMgr;
- (void)setResInfoMgr:(id)arg1;
- (id)resDownloadMgr;
- (void)setResDownloadMgr:(id)arg1;
- (void).cxx_destruct;
@end


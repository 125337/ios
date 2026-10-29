@interface AffBSCppToNativeManagerImpl : NSObject <AffBrandServiceCppToNativeManagerBase>
{
    AffBrandServiceCppToNativeManagerCallback * m_callback; // +0x8
}
+ (BizMsgReSortV2ReqContext)generateResortContext;
- (void)setCallback:(id)arg1;
- (void)forceInitBrsAffEnv;
- (int)getLocalCanvasPkgVersion;
- (BOOL)getAllowEmptyListResortSwitch;
- (unsigned long long)getSyncServerTimeMs;
- (BOOL)registerDIct:(int)arg1;
- (BOOL)checkBrandListDBHasStartCompression;
- (BOOL)checkBrandNotiListDBHasStartCompression;
- (id)getDigest:(id)arg1;
- (BOOL)getUserNameIsFollowed:(id)arg1;
- (id)getUserPoiInfo:(BOOL)arg1;
- (id)doDataMigrate;
- (void)getResortContextAsync:(int)arg1;
- (void).cxx_destruct;
@end

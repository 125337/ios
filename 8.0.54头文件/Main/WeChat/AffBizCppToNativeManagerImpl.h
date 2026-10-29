@interface AffBizCppToNativeManagerImpl : NSObject <AffBizCppToNativeManagerBase>
{
    AffBizCppToNativeManagerCallback * m_callBack; // +0x8
}
- (int)getLocalCanvasPkgVersion;
- (BOOL)getAllowEmptyListResortSwitch;
- (unsigned long long)getSyncServerTimeMs;
- (BOOL)registerDIct:(int)arg1;
- (BOOL)checkBrandListDBHasStartCompression;
- (BOOL)shouldClearCompressedKey;
- (void)markBrandListDBAsCompressBegin;
- (void)markBrandListDBAsCompressFinish;
- (void)setCallback:(id)arg1;
- (void)getResortContextAsync:(int)arg1;
- (void).cxx_destruct;
@end


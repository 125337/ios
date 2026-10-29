@interface ScanBarcodeMgr : MMUserService <MMServiceProtocol, PBMessageObserverDelegate>
{
    NSString * _extKey; // +0x8
    BOOL _isUploading; // +0x10
}
+ (unsigned int)getBarcodeType:(id)arg1;
- (id)init;
- (void)dealloc;
- (unsigned int)sendBarcode:(id)arg1 type:(id)arg2 mode:(unsigned int)arg3 scene:(unsigned int)arg4 tabBarInfo:(id)arg5;
- (void)cancelUploading;
- (void)cancelSendBarcode:(unsigned int)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)extKey;
- (void)setExtKey:(id)arg1;
- (void).cxx_destruct;
@end


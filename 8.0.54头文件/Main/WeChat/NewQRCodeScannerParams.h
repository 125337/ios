@interface NewQRCodeScannerParams : NSObject
{
    BOOL _isUseSmallCropArea; // +0x8
    BOOL _isSupportMultiCodes; // +0x9
    BOOL _shouldSetBlacklistDelayedFrames; // +0xa
    int _codeType; // +0xc
    CameraScannerViewWrapper * _wrapper; // +0x10
}
- (id)initWithCodeType:(int)arg1;
- (id)initWithCodeType:(int)arg1 isUseSmallCropArea:(BOOL)arg2;
- (id)initWithCodeType:(int)arg1 isUseSmallCropArea:(BOOL)arg2 shouldSetBlacklistDelayedFrames:(BOOL)arg3 wrapper:(id)arg4;
- (int)codeType;
- (void)setCodeType:(int)arg1;
- (BOOL)isUseSmallCropArea;
- (void)setIsUseSmallCropArea:(BOOL)arg1;
- (BOOL)isSupportMultiCodes;
- (void)setIsSupportMultiCodes:(BOOL)arg1;
- (BOOL)shouldSetBlacklistDelayedFrames;
- (void)setShouldSetBlacklistDelayedFrames:(BOOL)arg1;
- (id)wrapper;
- (void)setWrapper:(id)arg1;
- (void).cxx_destruct;
@end


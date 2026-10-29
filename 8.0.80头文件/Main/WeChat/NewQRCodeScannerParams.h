@interface NewQRCodeScannerParams : NSObject
{
    BOOL _isSupportMultiCodes; // +0x8
    BOOL _isEnableSnapshot; // +0x9
    BOOL _enableAskAIQBarIntercept; // +0xa
    BOOL _enableAskAIQBarSnapshot; // +0xb
    BOOL _shouldSetBlacklistDelayedFrames; // +0xc
    BOOL _enableParallelImageOpt; // +0xd
    BOOL _enableCodeVerifier; // +0xe
    int _codeType; // +0x10
    CameraScannerViewWrapper * _wrapper; // +0x18
}
- (id)initWithCodeType:(int)arg1;
- (id)initWithCodeType:(int)arg1 shouldSetBlacklistDelayedFrames:(BOOL)arg2 wrapper:(id)arg3;
- (int)codeType;
- (void)setCodeType:(int)arg1;
- (BOOL)isSupportMultiCodes;
- (void)setIsSupportMultiCodes:(BOOL)arg1;
- (BOOL)isEnableSnapshot;
- (void)setIsEnableSnapshot:(BOOL)arg1;
- (BOOL)enableAskAIQBarIntercept;
- (void)setEnableAskAIQBarIntercept:(BOOL)arg1;
- (BOOL)enableAskAIQBarSnapshot;
- (void)setEnableAskAIQBarSnapshot:(BOOL)arg1;
- (BOOL)shouldSetBlacklistDelayedFrames;
- (void)setShouldSetBlacklistDelayedFrames:(BOOL)arg1;
- (BOOL)enableParallelImageOpt;
- (void)setEnableParallelImageOpt:(BOOL)arg1;
- (BOOL)enableCodeVerifier;
- (void)setEnableCodeVerifier:(BOOL)arg1;
- (id)wrapper;
- (void)setWrapper:(id)arg1;
- (void).cxx_destruct;
@end

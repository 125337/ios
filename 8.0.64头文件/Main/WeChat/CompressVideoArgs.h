@interface CompressVideoArgs : NSObject
{
    BOOL _usingMAV; // +0x8
    BOOL _isSlowMotion; // +0x9
    BOOL _isSwRetryTask; // +0xa
    BOOL _isOpenExportRetryWithSW; // +0xb
    BOOL _isEnableHardHEVCEncode; // +0xc
    NSURL * _url; // +0x10
    AVAsset * _asset; // +0x18
    unsigned long long _pickerScene; // +0x20
    NSString * _pathPrefix; // +0x28
    NSString * _encodeJson; // +0x30
    NSDictionary * _extraInfo; // +0x38
    id /* block */ _completion; // +0x40
    id /* block */ _progressCallback; // +0x48
}
- (id)url;
- (void)setUrl:(id)arg1;
- (id)asset;
- (void)setAsset:(id)arg1;
- (unsigned long long)pickerScene;
- (void)setPickerScene:(unsigned long long)arg1;
- (BOOL)usingMAV;
- (void)setUsingMAV:(BOOL)arg1;
- (BOOL)isSlowMotion;
- (void)setIsSlowMotion:(BOOL)arg1;
- (BOOL)isSwRetryTask;
- (void)setIsSwRetryTask:(BOOL)arg1;
- (BOOL)isOpenExportRetryWithSW;
- (void)setIsOpenExportRetryWithSW:(BOOL)arg1;
- (BOOL)isEnableHardHEVCEncode;
- (void)setIsEnableHardHEVCEncode:(BOOL)arg1;
- (id)pathPrefix;
- (void)setPathPrefix:(id)arg1;
- (id)encodeJson;
- (void)setEncodeJson:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (id /* block */)progressCallback;
- (void)setProgressCallback:(id /* block */)arg1;
- (void).cxx_destruct;
@end

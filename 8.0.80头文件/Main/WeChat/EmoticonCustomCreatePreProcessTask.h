@interface EmoticonCustomCreatePreProcessTask : EmoticonCustomCreateInternalTask
{
    id /* block */ _cropStartBlock; // +0x8
    id /* block */ _cropSucBlock; // +0x10
    id /* block */ _cropFailBlock; // +0x18
    unsigned long long _autoSizeCrop; // +0x20
    NSString * _localVideoPath; // +0x28
    VideoCompositionAttr * _compositionAttr; // +0x30
    MMAsset * _mmAsset; // +0x38
    CGRect _cropFrame; // +0x40
}
- (id)initWithLocalVideoPath:(id)arg1;
- (void)startPreprocess;
- (BOOL)isValid;
- (void)prepareForComposition:(id /* block */)arg1;
- (void)startComposing;
- (CGSize)getMediaSize:(id)arg1;
- (BOOL)isCropRectSafe:(CGRect)arg1;
- (BOOL)isCropLengthSafe:(double)arg1;
- (id /* block */)cropStartBlock;
- (void)setCropStartBlock:(id /* block */)arg1;
- (id /* block */)cropSucBlock;
- (void)setCropSucBlock:(id /* block */)arg1;
- (id /* block */)cropFailBlock;
- (void)setCropFailBlock:(id /* block */)arg1;
- (CGRect)cropFrame;
- (void)setCropFrame:(CGRect)arg1;
- (unsigned long long)autoSizeCrop;
- (void)setAutoSizeCrop:(unsigned long long)arg1;
- (id)localVideoPath;
- (void)setLocalVideoPath:(id)arg1;
- (id)compositionAttr;
- (void)setCompositionAttr:(id)arg1;
- (id)mmAsset;
- (void)setMmAsset:(id)arg1;
- (void).cxx_destruct;
@end

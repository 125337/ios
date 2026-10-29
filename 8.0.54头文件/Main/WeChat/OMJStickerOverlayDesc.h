@interface OMJStickerOverlayDesc : OMJOverlayDesc
{
    unsigned long long _stickerType; // +0x8
    unsigned long long _timingFillMode; // +0x10
    NSString * _filePath; // +0x18
}
- (id)initWithStickerType:(unsigned long long)arg1 timingFillMode:(unsigned long long)arg2 filePath:(id)arg3 spatialInfo:(id)arg4;
- (unsigned long long)stickerType;
- (unsigned long long)timingFillMode;
- (id)filePath;
- (void).cxx_destruct;
@end


@interface MPOriginalImageDecoder : NSObject
{
    CIContext * _ciContext; // +0x8
}
- (id)init;
- (BOOL)sourceHasGainMap:(CGImageSource *)arg1 fileData:(id)arg2;
- (BOOL)sourceHasHDRHeadroom:(CGImageSource *)arg1;
- (BOOL)profileIsWideGamut:(id)arg1;
- (id)imageIOLazyOptions;
- (id)createSourceWithFileURL:(id)arg1;
- (BOOL)materializeGainMap:(CGImage *)arg1 intoSource:(id)arg2;
- (void)storageRectFromOrientedX:(long long)arg1 y:(long long)arg2 w:(long long)arg3 h:(long long)arg4 storageW:(long long)arg5 storageH:(long long)arg6 orientation:(long long)arg7 outSX:(long long *)arg8 outSY:(long long *)arg9 outSW:(long long *)arg10 outSH:(long long *)arg11;
- (id)reorientTilePixels:(id)arg1 srcW:(long long)arg2 srcH:(long long)arg3 bytesPerTexel:(long long)arg4 orientation:(long long)arg5 dstW:(long long)arg6 dstH:(long long)arg7;
- (id)decodeTileFromSource:(id)arg1 pixelX:(long long)arg2 pixelY:(long long)arg3 cropWidth:(long long)arg4 cropHeight:(long long)arg5 outputWidth:(long long)arg6 outputHeight:(long long)arg7;
- (id)decodeFloat16HDRTileFromSource:(id)arg1 pixelX:(long long)arg2 pixelY:(long long)arg3 cropWidth:(long long)arg4 cropHeight:(long long)arg5 outputWidth:(long long)arg6 outputHeight:(long long)arg7;
- (id)decodeRgba8SDRTileFromSource:(id)arg1 pixelX:(long long)arg2 pixelY:(long long)arg3 cropWidth:(long long)arg4 cropHeight:(long long)arg5 outputWidth:(long long)arg6 outputHeight:(long long)arg7;
- (id)coreImageROIFromImage:(id)arg1 srcHeight:(long long)arg2 pixelX:(long long)arg3 pixelY:(long long)arg4 cropWidth:(long long)arg5 cropHeight:(long long)arg6 outputWidth:(long long)arg7 outputHeight:(long long)arg8;
- (id)coreImageFloat16TileFromCIImage:(id)arg1 srcHeight:(long long)arg2 pixelX:(long long)arg3 pixelY:(long long)arg4 cropWidth:(long long)arg5 cropHeight:(long long)arg6 outputWidth:(long long)arg7 outputHeight:(long long)arg8;
- (id)coreImageRgba8TileFromCIImage:(id)arg1 srcHeight:(long long)arg2 pixelX:(long long)arg3 pixelY:(long long)arg4 cropWidth:(long long)arg5 cropHeight:(long long)arg6 outputWidth:(long long)arg7 outputHeight:(long long)arg8 wideGamut:(BOOL)arg9;
- (id)cgRgba8TileFromBaseImage:(CGImage *)arg1 pixelX:(long long)arg2 pixelY:(long long)arg3 cropWidth:(long long)arg4 cropHeight:(long long)arg5 outputWidth:(long long)arg6 outputHeight:(long long)arg7 wideGamut:(BOOL)arg8;
- (CGImage *)copyHDRGainMapFromSource:(CGImageSource *)arg1 fileData:(id)arg2 mainWidth:(unsigned int)arg3 metadata:(struct *)arg4;
- (id)applyGainMapToTile:(id)arg1 gmPixels:(id)arg2 gmW:(long long)arg3 gmH:(long long)arg4 gmRow:(long long)arg5 gmBpp:(long long)arg6 metadata:(struct)arg7 baseWidth:(long long)arg8 baseHeight:(long long)arg9 regionX:(long long)arg10 regionY:(long long)arg11 cropW:(long long)arg12 cropH:(long long)arg13 outW:(long long)arg14 outH:(long long)arg15;
- (id)sanitizeFloat16Tile:(id)arg1;
- (id)createLevelPlaneWithFileURL:(id)arg1 level:(long long)arg2 orientedW:(long long)arg3 orientedH:(long long)arg4 orientation:(long long)arg5 isHDR:(BOOL)arg6 wideGamut:(BOOL)arg7 outPlaneW:(long long *)arg8 outPlaneH:(long long *)arg9;
- (CGImage *)copyThumbnailAtURL:(id)arg1 maxSide:(long long)arg2 applyTransform:(BOOL)arg3;
- (id)createSDRLevelPlaneThumbnailWithFileURL:(id)arg1 planeW:(long long)arg2 planeH:(long long)arg3 wideGamut:(BOOL)arg4;
- (id)createHDRLevelPlaneWithThumbnailFileURL:(id)arg1 level:(long long)arg2 orientedW:(long long)arg3 orientedH:(long long)arg4 orientation:(long long)arg5 outPlaneW:(long long *)arg6 outPlaneH:(long long *)arg7;
- (BOOL)shouldOutputHDRForStorageW:(long long)arg1 storageH:(long long)arg2;
- (id)ciContext;
- (void)setCiContext:(id)arg1;
- (void).cxx_destruct;
@end

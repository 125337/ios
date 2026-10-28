@interface OMJImageExportSettings : NSObject
{
    unsigned long long _imageType; // +0x8
    OMJMovieExportSettings * _videoExportSettings; // +0x10
    CGSize _imageLimitedPixelSize; // +0x18
}
- (id)initWithImageType:(unsigned long long)arg1 imageLimitedPixelSize:(CGSize)arg2 videoExportSettings:(id)arg3;
- (id)description;
- (unsigned long long)imageType;
- (CGSize)imageLimitedPixelSize;
- (id)videoExportSettings;
- (void).cxx_destruct;
@end

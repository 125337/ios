@interface WCMegaVideoMedia : NSObject <WCTColumnCoding, PBCoding>
{
    NSString * _videoUrl; // +0x8
    NSString * _thumbUrl; // +0x10
    unsigned long long _mediaType; // +0x18
    unsigned long long _videoPlayLen; // +0x20
    double _width; // +0x28
    double _height; // +0x30
    NSString * _md5Sum; // +0x38
    unsigned long long _fileSize; // +0x40
    long long _bitrate; // +0x48
    NSString * _decodeKey; // +0x50
    NSString * _coverUrl; // +0x58
    unsigned long long _videoPlayLenMs; // +0x60
    NSMutableArray * _specsArray; // +0x68
    NSMutableArray * _hlsSpecsArray; // +0x70
    NSMutableArray * _hdrSpecsArray; // +0x78
    NSString * _urlToken; // +0x80
    NSString * _thumbUrlToken; // +0x88
    NSString * _coverUrlToken; // +0x90
}
+ (void)PBArrayAdd_videoUrl;
+ (void)PBArrayAdd_thumbUrl;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_videoPlayLen;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_md5Sum;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_bitrate;
+ (void)PBArrayAdd_decodeKey;
+ (void)PBArrayAdd_coverUrl;
+ (void)PBArrayAdd_videoPlayLenMs;
+ (void)PBArrayAdd_urlToken;
+ (void)PBArrayAdd_thumbUrlToken;
+ (void)PBArrayAdd_coverUrlToken;
+ (void)PBArrayAdd_specsData;
+ (void)PBArrayAdd_specsArray;
+ (void)PBArrayAdd_hlsSpecsArray;
+ (void)PBArrayAdd_hdrSpecsArray;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnTypeForWCDB;
+ (CGRect)summaryClipRectForMediaSize:(CGSize)arg1;
+ (double)summarySizeRatioForMediaSize:(CGSize)arg1;
+ (double)fullMinSizeRatio;
+ (CGRect)fullClipRectForMediaSize:(CGSize)arg1;
+ (CGRect)rectInRatio_16:(CGRect)arg1;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void)setSpecsData:(id)arg1;
- (id)specsData;
- (id)initWithMegaVideoMedia:(id)arg1;
- (id)genMegaVideoMedia;
- (CGSize)mediaSize;
- (id)videoUrlWithToken;
- (id)thumbUrlWithToken;
- (id)coverUrlWithToken;
- (id)lengthLabel;
- (id)mediaPath;
- (id)getNetMediaTempCachePath;
- (id)getLocalMediaPermanentPath;
- (id)thumbPath;
- (id)getNetThumbTempCachePath;
- (id)getLocalThumbPermanentPath;
- (id)mediaFilePath;
- (id)convertToMediaInfoWithVideoId:(id)arg1 tid:(id)arg2;
- (id)convertToPureMediaInfoWithMediaInfo:(id)arg1;
- (id)description;
- (id)genFinderMediaWithToken;
- (id)appendToken:(id)arg1 toUrl:(id)arg2;
- (id)genFinderMedia;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (unsigned long long)mediaType;
- (void)setMediaType:(unsigned long long)arg1;
- (unsigned long long)videoPlayLen;
- (void)setVideoPlayLen:(unsigned long long)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (double)height;
- (void)setHeight:(double)arg1;
- (id)md5Sum;
- (void)setMd5Sum:(id)arg1;
- (unsigned long long)fileSize;
- (void)setFileSize:(unsigned long long)arg1;
- (long long)bitrate;
- (void)setBitrate:(long long)arg1;
- (id)decodeKey;
- (void)setDecodeKey:(id)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (unsigned long long)videoPlayLenMs;
- (void)setVideoPlayLenMs:(unsigned long long)arg1;
- (id)specsArray;
- (void)setSpecsArray:(id)arg1;
- (id)hlsSpecsArray;
- (void)setHlsSpecsArray:(id)arg1;
- (id)hdrSpecsArray;
- (void)setHdrSpecsArray:(id)arg1;
- (id)urlToken;
- (void)setUrlToken:(id)arg1;
- (id)thumbUrlToken;
- (void)setThumbUrlToken:(id)arg1;
- (id)coverUrlToken;
- (void)setCoverUrlToken:(id)arg1;
- (void).cxx_destruct;
@end


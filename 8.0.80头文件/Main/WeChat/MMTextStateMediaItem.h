@interface MMTextStateMediaItem : NSObject <WCPlayerMediaExt, PBCoding, WCTColumnCoding>
{
    BOOL _bUseXorEncrypt; // +0x8
    BOOL _bIsLivePhoto; // +0x9
    BOOL _bIsUseLivePhoto; // +0xa
    float _duration; // +0xc
    int _createTime; // +0x10
    float _preloadDuration; // +0x14
    unsigned int _mediaType; // +0x18
    int _preloadIndex; // +0x1c
    int _encIdx; // +0x20
    NSString * _tid; // +0x28
    NSString * _md5; // +0x30
    NSString * _videoMD5; // +0x38
    NSString * _videoUrl; // +0x40
    NSString * _imageUrl; // +0x48
    NSString * _thumbImageUrl; // +0x50
    unsigned long long _xorEncrpyKey; // +0x58
    unsigned long long _enckey; // +0x60
    NSString * _token; // +0x68
}
+ (void)PBArrayAdd_tid;
+ (void)PBArrayAdd_duration;
+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_videoMD5;
+ (void)PBArrayAdd_thumbImageUrl;
+ (void)PBArrayAdd_videoUrl;
+ (void)PBArrayAdd_bUseXorEncrypt;
+ (void)PBArrayAdd_xorEncrpyKey;
+ (void)PBArrayAdd_enckey;
+ (void)PBArrayAdd_encIdx;
+ (void)PBArrayAdd_token;
+ (void)PBArrayAdd_bIsLivePhoto;
+ (void)PBArrayAdd_bIsUseLivePhoto;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (unsigned long long)columnType;
- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (id)init;
- (BOOL)createTempSightPath;
- (BOOL)hasSight;
- (BOOL)hasPreview;
- (BOOL)isValid;
- (BOOL)isVideoMedia;
- (void)cleanMeidaFileCache;
- (void)migrateToTid:(id)arg1;
- (id)tempPathForSightData;
- (id)pathForSightData;
- (id)pathForPreview;
- (id)tmpPathForPreview;
- (id)pathForImage;
- (id)tmpPathForImage;
- (id)pathForWxam;
- (id)getImageIdentifier;
- (id)getWxamIdentifier;
- (id)getMediaWrapIdentifier;
- (id)getThumbIdentifier;
- (id)getTempVideoPath;
- (id)getFormatVideoPath;
- (id)getTmpThumbImagePath;
- (id)getThumbImagePath;
- (unsigned int)getPreloadPercent;
- (id)generateDownloadArgsWrap;
- (id)description;
- (id)tid;
- (void)setTid:(id)arg1;
- (float)duration;
- (void)setDuration:(float)arg1;
- (int)createTime;
- (void)setCreateTime:(int)arg1;
- (float)preloadDuration;
- (void)setPreloadDuration:(float)arg1;
- (unsigned int)mediaType;
- (void)setMediaType:(unsigned int)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (id)videoMD5;
- (void)setVideoMD5:(id)arg1;
- (id)videoUrl;
- (void)setVideoUrl:(id)arg1;
- (id)imageUrl;
- (void)setImageUrl:(id)arg1;
- (id)thumbImageUrl;
- (void)setThumbImageUrl:(id)arg1;
- (int)preloadIndex;
- (void)setPreloadIndex:(int)arg1;
- (BOOL)bUseXorEncrypt;
- (void)setBUseXorEncrypt:(BOOL)arg1;
- (unsigned long long)xorEncrpyKey;
- (void)setXorEncrpyKey:(unsigned long long)arg1;
- (unsigned long long)enckey;
- (void)setEnckey:(unsigned long long)arg1;
- (int)encIdx;
- (void)setEncIdx:(int)arg1;
- (id)token;
- (void)setToken:(id)arg1;
- (BOOL)bIsLivePhoto;
- (void)setBIsLivePhoto:(BOOL)arg1;
- (BOOL)bIsUseLivePhoto;
- (void)setBIsUseLivePhoto:(BOOL)arg1;
- (void).cxx_destruct;
@end

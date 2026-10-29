@interface MMImageExifLogInfo : NSObject <PBCoding, NSCoding>
{
    BOOL _isLivePhoto; // +0x8
    BOOL _hasLivePhotoInfo; // +0x9
    int _orientation; // +0xc
    NSString * _localID; // +0x10
    unsigned long long _mediaType; // +0x18
    unsigned long long _originWidth; // +0x20
    unsigned long long _originHeight; // +0x28
    unsigned long long _compressedWidth; // +0x30
    unsigned long long _compressedHeight; // +0x38
    unsigned long long _originSize; // +0x40
    unsigned long long _compressedSize; // +0x48
    NSString * _fNumber; // +0x50
    NSString * _exposureTime; // +0x58
    unsigned long long _iso; // +0x60
    unsigned long long _flash; // +0x68
    NSString * _lensModel; // +0x70
    NSString * _creatTime; // +0x78
    NSString * _GPSInfoFromMetaData; // +0x80
    unsigned long long _isFromWeChat; // +0x88
    unsigned long long _scene; // +0x90
    unsigned long long _sceneType; // +0x98
    unsigned long long _fileSource; // +0xa0
    NSString * _make; // +0xa8
    NSString * _software; // +0xb0
    NSString * _fileExt; // +0xb8
    NSString * _YCbCrSubSampling; // +0xc0
    double _livePhotoStillImageTime; // +0xc8
    unsigned long long _faceCount; // +0xd0
    NSString * _rawExifDicInfoJSON; // +0xd8
    NSString * _rawTiffDicInfoJSON; // +0xe0
    NSString * _rawGPSDicInfoJSON; // +0xe8
    NSString * _md5; // +0xf0
    unsigned long long _uploadMediaType; // +0xf8
    NSString * _aigcContent; // +0x100
    NSDictionary * _rawImageMetadata; // +0x108
}
+ (void)PBArrayAdd_localID;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_originWidth;
+ (void)PBArrayAdd_originHeight;
+ (void)PBArrayAdd_compressedWidth;
+ (void)PBArrayAdd_compressedHeight;
+ (void)PBArrayAdd_originSize;
+ (void)PBArrayAdd_compressedSize;
+ (void)PBArrayAdd_fNumber;
+ (void)PBArrayAdd_exposureTime;
+ (void)PBArrayAdd_iso;
+ (void)PBArrayAdd_flash;
+ (void)PBArrayAdd_lensModel;
+ (void)PBArrayAdd_creatTime;
+ (void)PBArrayAdd_isFromWeChat;
+ (void)PBArrayAdd_scene;
+ (void)PBArrayAdd_sceneType;
+ (void)PBArrayAdd_fileSource;
+ (void)PBArrayAdd_make;
+ (void)PBArrayAdd_software;
+ (void)PBArrayAdd_fileExt;
+ (void)PBArrayAdd_YCbCrSubSampling;
+ (void)PBArrayAdd_faceCount;
+ (void)PBArrayAdd_rawExifDicInfoJSON;
+ (void)PBArrayAdd_rawTiffDicInfoJSON;
+ (void)PBArrayAdd_rawGPSDicInfoJSON;
+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_orientation;
+ (void)PBArrayAdd_isLivePhoto;
+ (void)PBArrayAdd_hasLivePhotoInfo;
+ (void)PBArrayAdd_livePhotoStillImageTime;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)report;
- (void)reportWithPublishId:(id)arg1;
- (id)getReportStr;
- (void)updateForWechatSight;
- (BOOL)isYUV422Image;
- (void)updateSubSamplingForJPEGImage:(id)arg1;
- (id)debugDescription;
- (id)localID;
- (void)setLocalID:(id)arg1;
- (unsigned long long)mediaType;
- (void)setMediaType:(unsigned long long)arg1;
- (unsigned long long)originWidth;
- (void)setOriginWidth:(unsigned long long)arg1;
- (unsigned long long)originHeight;
- (void)setOriginHeight:(unsigned long long)arg1;
- (int)orientation;
- (void)setOrientation:(int)arg1;
- (unsigned long long)compressedWidth;
- (void)setCompressedWidth:(unsigned long long)arg1;
- (unsigned long long)compressedHeight;
- (void)setCompressedHeight:(unsigned long long)arg1;
- (unsigned long long)originSize;
- (void)setOriginSize:(unsigned long long)arg1;
- (unsigned long long)compressedSize;
- (void)setCompressedSize:(unsigned long long)arg1;
- (id)fNumber;
- (void)setFNumber:(id)arg1;
- (id)exposureTime;
- (void)setExposureTime:(id)arg1;
- (unsigned long long)iso;
- (void)setIso:(unsigned long long)arg1;
- (unsigned long long)flash;
- (void)setFlash:(unsigned long long)arg1;
- (id)lensModel;
- (void)setLensModel:(id)arg1;
- (id)creatTime;
- (void)setCreatTime:(id)arg1;
- (id)GPSInfoFromMetaData;
- (void)setGPSInfoFromMetaData:(id)arg1;
- (unsigned long long)isFromWeChat;
- (void)setIsFromWeChat:(unsigned long long)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned long long)sceneType;
- (void)setSceneType:(unsigned long long)arg1;
- (unsigned long long)fileSource;
- (void)setFileSource:(unsigned long long)arg1;
- (id)make;
- (void)setMake:(id)arg1;
- (id)software;
- (void)setSoftware:(id)arg1;
- (id)fileExt;
- (void)setFileExt:(id)arg1;
- (id)YCbCrSubSampling;
- (void)setYCbCrSubSampling:(id)arg1;
- (BOOL)isLivePhoto;
- (void)setIsLivePhoto:(BOOL)arg1;
- (BOOL)hasLivePhotoInfo;
- (void)setHasLivePhotoInfo:(BOOL)arg1;
- (double)livePhotoStillImageTime;
- (void)setLivePhotoStillImageTime:(double)arg1;
- (unsigned long long)faceCount;
- (void)setFaceCount:(unsigned long long)arg1;
- (id)rawExifDicInfoJSON;
- (void)setRawExifDicInfoJSON:(id)arg1;
- (id)rawTiffDicInfoJSON;
- (void)setRawTiffDicInfoJSON:(id)arg1;
- (id)rawGPSDicInfoJSON;
- (void)setRawGPSDicInfoJSON:(id)arg1;
- (id)md5;
- (void)setMd5:(id)arg1;
- (unsigned long long)uploadMediaType;
- (void)setUploadMediaType:(unsigned long long)arg1;
- (id)aigcContent;
- (void)setAigcContent:(id)arg1;
- (id)rawImageMetadata;
- (void)setRawImageMetadata:(id)arg1;
- (void).cxx_destruct;
@end

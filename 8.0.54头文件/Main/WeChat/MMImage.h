@interface MMImage : UIImage <PBCoding, NSCoding>
{
    BOOL _isLivePhoto; // +0x8
    int _m_processState; // +0xc
    int _sourceForSNSUploadStat; // +0x10
    NSMutableDictionary * _tempExtraInfo; // +0x18
    long long _mattID; // +0x20
    long long _imageFrom; // +0x28
    NSString * _dataPath; // +0x30
    MMAsset * _m_asset; // +0x38
    NSString * _m_assetID; // +0x40
    UIImage * _m_imageFromAsset; // +0x48
    NSData * _m_imageData; // +0x50
    NSString * _livePhotoVideoPath; // +0x58
    MMImageLocation * _m_location; // +0x60
    MMImageExifLogInfo * _exifLogInfo; // +0x68
    NSString * _draftPath; // +0x70
    NSString * _referenceUrlStr; // +0x78
    NSString * _m_assetClassNameStr; // +0x80
}
+ (void)PBArrayAdd_mattID;
+ (void)PBArrayAdd_dataPath;
+ (void)PBArrayAdd_imageFrom;
+ (void)PBArrayAdd_m_processState;
+ (void)PBArrayAdd_referenceUrlStr;
+ (void)PBArrayAdd_m_assetClassNameStr;
+ (void)PBArrayAdd_m_location;
+ (void)PBArrayAdd_sourceForSNSUploadStat;
+ (void)PBArrayAdd_exifLogInfo;
+ (void)PBArrayAdd_draftPath;
+ (void)PBArrayAdd_isLivePhoto;
+ (void)PBArrayAdd_livePhotoVideoPath;
+ (void)initialize;
- (void)setIsEdited:(BOOL)arg1;
- (BOOL)isEdited;
- (void)setEditImageAttr:(id)arg1;
- (id)editImageAttr;
- (id)getPBPropertyTable;
- (void)commonInit;
- (id)init;
- (id)initWithImage:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)referenceURL;
- (void)setReferenceURL:(id)arg1;
- (void)setM_asset:(id)arg1;
- (Class)m_assetClass;
- (id)tempExtraInfo;
- (long long)mattID;
- (void)setMattID:(long long)arg1;
- (long long)imageFrom;
- (void)setImageFrom:(long long)arg1;
- (int)m_processState;
- (void)setM_processState:(int)arg1;
- (id)dataPath;
- (void)setDataPath:(id)arg1;
- (id)m_asset;
- (id)m_assetID;
- (void)setM_assetID:(id)arg1;
- (id)m_imageFromAsset;
- (void)setM_imageFromAsset:(id)arg1;
- (id)m_imageData;
- (void)setM_imageData:(id)arg1;
- (BOOL)isLivePhoto;
- (void)setIsLivePhoto:(BOOL)arg1;
- (id)livePhotoVideoPath;
- (void)setLivePhotoVideoPath:(id)arg1;
- (id)m_location;
- (void)setM_location:(id)arg1;
- (int)sourceForSNSUploadStat;
- (void)setSourceForSNSUploadStat:(int)arg1;
- (id)exifLogInfo;
- (void)setExifLogInfo:(id)arg1;
- (id)draftPath;
- (void)setDraftPath:(id)arg1;
- (id)referenceUrlStr;
- (void)setReferenceUrlStr:(id)arg1;
- (id)m_assetClassNameStr;
- (void)setM_assetClassNameStr:(id)arg1;
- (void).cxx_destruct;
@end


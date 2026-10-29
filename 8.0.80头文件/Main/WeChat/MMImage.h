@interface MMImage : UIImage <PBCoding, NSCoding>
{
    BOOL _isLivePhoto; // +0x8
    int _m_processState; // +0xc
    int _sourceForSNSUploadStat; // +0x10
    int _springFestivalSourceType; // +0x14
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
    WCMediaEcsInfo * _ecsInfo; // +0x78
    NSDictionary * _cameraEditorLogInfo; // +0x80
    NSString * _yuanBaoTemplateId; // +0x88
    NSArray * _springFestivalKeywords; // +0x90
    NSString * _publicPhotoAccountNickName; // +0x98
    NSString * _publicPhotoAccountUserName; // +0xa0
    NSString * _sourceNickName; // +0xa8
    NSString * _sourceUserName; // +0xb0
    NSString * _publicPhotoAccountFeedId; // +0xb8
    NSString * _publicPhotoAccountFeedIndex; // +0xc0
    NSString * _fortunePicId; // +0xc8
    NSString * _referenceUrlStr; // +0xd0
    NSString * _m_assetClassNameStr; // +0xd8
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
+ (void)PBArrayAdd_cameraEditorLogInfo;
+ (void)PBArrayAdd_springFestivalSourceType;
+ (void)PBArrayAdd_springFestivalKeywords;
+ (void)PBArrayAdd_sourceUserName;
+ (void)PBArrayAdd_sourceNickName;
+ (void)PBArrayAdd_publicPhotoAccountUserName;
+ (void)PBArrayAdd_publicPhotoAccountNickName;
+ (void)initialize;
- (void)setIsEdited:(BOOL)arg1;
- (BOOL)isEdited;
- (void)setEditImageAttr:(id)arg1;
- (id)editImageAttr;
- (id)_askXiaoWeiLocalIdStorage;
- (id)askXiaoWeiLocalIds;
- (id)askXiaoWeiCurrentLocalId;
- (id)ensureAskXiaoWeiLocalId;
- (BOOL)containsAskXiaoWeiLocalId:(id)arg1;
- (void)inheritAskXiaoWeiLocalIdsFromImage:(id)arg1;
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
- (id)ecsInfo;
- (void)setEcsInfo:(id)arg1;
- (id)cameraEditorLogInfo;
- (void)setCameraEditorLogInfo:(id)arg1;
- (id)yuanBaoTemplateId;
- (void)setYuanBaoTemplateId:(id)arg1;
- (id)springFestivalKeywords;
- (void)setSpringFestivalKeywords:(id)arg1;
- (int)springFestivalSourceType;
- (void)setSpringFestivalSourceType:(int)arg1;
- (id)publicPhotoAccountNickName;
- (void)setPublicPhotoAccountNickName:(id)arg1;
- (id)publicPhotoAccountUserName;
- (void)setPublicPhotoAccountUserName:(id)arg1;
- (id)sourceNickName;
- (void)setSourceNickName:(id)arg1;
- (id)sourceUserName;
- (void)setSourceUserName:(id)arg1;
- (id)publicPhotoAccountFeedId;
- (void)setPublicPhotoAccountFeedId:(id)arg1;
- (id)publicPhotoAccountFeedIndex;
- (void)setPublicPhotoAccountFeedIndex:(id)arg1;
- (id)fortunePicId;
- (void)setFortunePicId:(id)arg1;
- (id)referenceUrlStr;
- (void)setReferenceUrlStr:(id)arg1;
- (id)m_assetClassNameStr;
- (void)setM_assetClassNameStr:(id)arg1;
- (void).cxx_destruct;
@end

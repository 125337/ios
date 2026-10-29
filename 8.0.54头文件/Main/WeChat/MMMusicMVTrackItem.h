@interface MMMusicMVTrackItem : NSObject <PBCoding, NSCopying>
{
    BOOL _bFlexibleClipGapItem; // +0x8
    unsigned int _timeLengthInMvMs; // +0xc
    unsigned int _isFirstUpload; // +0x10
    unsigned int _videoDuration; // +0x14
    unsigned int _imageAnimationType; // +0x18
    int _materialPosForReport; // +0x1c
    unsigned int _materialType; // +0x20
    unsigned long long _timeOffsetInMvMs; // +0x28
    unsigned long long _refObjectId; // +0x30
    NSString * _refNonceId; // +0x38
    unsigned long long _timeOffsetInClipMs; // +0x40
    NSString * _localObjectId; // +0x48
    unsigned long long _uploadState; // +0x50
    MMMusicMVTrackItemLocalVideo * _localVideo; // +0x58
    MMMusicMVTrackItemLocalPic * _localPic; // +0x60
    unsigned long long _postingRefObjectId; // +0x68
    NSString * _postingRefNonceId; // +0x70
    unsigned long long _postingClipOffsetMs; // +0x78
    unsigned long long _postingVideoSource; // +0x80
    WCFinderDataItem * _dataItemForPreviewing; // +0x88
    unsigned long long _previewingClipOffsetMs; // +0x90
    NSMutableArray * _featureList; // +0x98
    NSString * _transitionId; // +0xa0
    unsigned long long _mediaType; // +0xa8
    NSString * _materialIdForReport; // +0xb0
    NSString * _authorIdForReport; // +0xb8
    unsigned long long _materialFromForReport; // +0xc0
    NSString * _reqIdForReport; // +0xc8
    NSString * _uuid; // +0xd0
    NSString * _localMaterialId; // +0xd8
    unsigned long long _localMaterialTimeOffsetInClipMs; // +0xe0
    FinderMVInfo_ClientDraftInfo * _clientDraftInfo; // +0xe8
}
+ (void)PBArrayAdd_timeOffsetInMvMs;
+ (void)PBArrayAdd_timeLengthInMvMs;
+ (void)PBArrayAdd_refObjectId;
+ (void)PBArrayAdd_refNonceId;
+ (void)PBArrayAdd_timeOffsetInClipMs;
+ (void)PBArrayAdd_localObjectId;
+ (void)PBArrayAdd_localVideo;
+ (void)PBArrayAdd_postingRefObjectId;
+ (void)PBArrayAdd_postingRefNonceId;
+ (void)PBArrayAdd_postingClipOffsetMs;
+ (void)PBArrayAdd_postingVideoSource;
+ (void)PBArrayAdd_isFirstUpload;
+ (void)PBArrayAdd_featureList;
+ (void)PBArrayAdd_mediaType;
+ (void)PBArrayAdd_materialIdForReport;
+ (void)PBArrayAdd_authorIdForReport;
+ (void)PBArrayAdd_materialPosForReport;
+ (void)PBArrayAdd_materialFromForReport;
+ (void)PBArrayAdd_reqIdForReport;
+ (void)PBArrayAdd_imageAnimationType;
+ (void)PBArrayAdd_transitionId;
+ (void)PBArrayAdd_materialType;
+ (void)PBArrayAdd_localMaterialId;
+ (void)PBArrayAdd_localMaterialTimeOffsetInClipMs;
+ (void)PBArrayAdd_localPic;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)init;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)isSvrMode;
- (unsigned long long)currentRefObjectId;
- (id)currentRefNonceId;
- (unsigned long long)currentClipOffsetMs;
- (BOOL)isSlowVideo;
- (unsigned long long)slowVideoLackTimeMs;
- (void)setImageAnimationType:(unsigned int)arg1;
- (BOOL)imageAnimationTypeIsValidValue:(int)arg1;
- (id)description;
- (unsigned long long)timeOffsetInMvMs;
- (void)setTimeOffsetInMvMs:(unsigned long long)arg1;
- (unsigned int)timeLengthInMvMs;
- (void)setTimeLengthInMvMs:(unsigned int)arg1;
- (unsigned long long)refObjectId;
- (void)setRefObjectId:(unsigned long long)arg1;
- (id)refNonceId;
- (void)setRefNonceId:(id)arg1;
- (unsigned long long)timeOffsetInClipMs;
- (void)setTimeOffsetInClipMs:(unsigned long long)arg1;
- (unsigned int)isFirstUpload;
- (void)setIsFirstUpload:(unsigned int)arg1;
- (id)localObjectId;
- (void)setLocalObjectId:(id)arg1;
- (unsigned long long)uploadState;
- (void)setUploadState:(unsigned long long)arg1;
- (id)localVideo;
- (void)setLocalVideo:(id)arg1;
- (id)localPic;
- (void)setLocalPic:(id)arg1;
- (unsigned long long)postingRefObjectId;
- (void)setPostingRefObjectId:(unsigned long long)arg1;
- (id)postingRefNonceId;
- (void)setPostingRefNonceId:(id)arg1;
- (unsigned long long)postingClipOffsetMs;
- (void)setPostingClipOffsetMs:(unsigned long long)arg1;
- (unsigned long long)postingVideoSource;
- (void)setPostingVideoSource:(unsigned long long)arg1;
- (id)dataItemForPreviewing;
- (void)setDataItemForPreviewing:(id)arg1;
- (unsigned long long)previewingClipOffsetMs;
- (void)setPreviewingClipOffsetMs:(unsigned long long)arg1;
- (BOOL)bFlexibleClipGapItem;
- (void)setBFlexibleClipGapItem:(BOOL)arg1;
- (unsigned int)videoDuration;
- (void)setVideoDuration:(unsigned int)arg1;
- (unsigned int)imageAnimationType;
- (id)featureList;
- (void)setFeatureList:(id)arg1;
- (id)transitionId;
- (void)setTransitionId:(id)arg1;
- (unsigned long long)mediaType;
- (void)setMediaType:(unsigned long long)arg1;
- (id)materialIdForReport;
- (void)setMaterialIdForReport:(id)arg1;
- (id)authorIdForReport;
- (void)setAuthorIdForReport:(id)arg1;
- (int)materialPosForReport;
- (void)setMaterialPosForReport:(int)arg1;
- (unsigned long long)materialFromForReport;
- (void)setMaterialFromForReport:(unsigned long long)arg1;
- (id)reqIdForReport;
- (void)setReqIdForReport:(id)arg1;
- (id)uuid;
- (void)setUuid:(id)arg1;
- (unsigned int)materialType;
- (void)setMaterialType:(unsigned int)arg1;
- (id)localMaterialId;
- (void)setLocalMaterialId:(id)arg1;
- (unsigned long long)localMaterialTimeOffsetInClipMs;
- (void)setLocalMaterialTimeOffsetInClipMs:(unsigned long long)arg1;
- (id)clientDraftInfo;
- (void)setClientDraftInfo:(id)arg1;
- (void).cxx_destruct;
@end


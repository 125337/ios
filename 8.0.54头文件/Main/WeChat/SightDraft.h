@interface SightDraft : MMObject <PBCoding, NSCoding>
{
    BOOL _isUseFFmpegHevcEncoding; // +0x8
    int _draftID; // +0xc
    int _date; // +0x10
    int _sourceForSNSUploadStat; // +0x14
    NSMutableArray * _itemAry; // +0x18
    WCEditVideoPostReportInfo * _reportInfo; // +0x20
    VideoUploadStatInfo * _uploadStatInfo; // +0x28
    MMImageExifLogInfo * _exifLogInfo; // +0x30
    WCFinderVideoQualityScoreModel * _videoScoreModel; // +0x38
    NSMutableDictionary * _userInfo; // +0x40
    NSError * _error; // +0x48
    NSString * _draftItemVideoPath; // +0x50
    NSMutableDictionary * _serializableExtMap; // +0x58
    NSString * _RISKY_savedSightCompositeTaskId; // +0x60
    WCSightVideoCompositeTask * _cachedSightCompositeTask; // +0x68
}
+ (void)PBArrayAdd_draftID;
+ (void)PBArrayAdd_itemAry;
+ (void)PBArrayAdd_date;
+ (void)PBArrayAdd_serializableExtMapData;
+ (void)PBArrayAdd_RISKY_savedSightCompositeTaskId;
+ (void)initialize;
+ (id)draftWithVideoURL:(id)arg1;
+ (id)draftWithVideoURL:(id)arg1 andPathPrefix:(id)arg2;
+ (id)draftWithVideoURL:(id)arg1 thumbImage:(id)arg2;
- (void)saveToPhotoLibrary;
- (void)saveToPhotoLibraryWithTips:(BOOL)arg1;
- (void)saveToPhotoLibraryWithTips:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)setMomentsTemplate_originalAssetsIDs:(id)arg1;
- (id)MomentsTemplate_originalAssetsIDs;
- (void)setMoments_templateInfo:(id)arg1;
- (id)moments_templateInfo;
- (void)setMj_movieTemplateInfo:(id)arg1;
- (id)mj_movieTemplateInfo;
- (void)setMj_originVideoFilePath:(id)arg1;
- (id)mj_originVideoFilePath;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)addItem:(id)arg1;
- (void)addItem:(id)arg1 pathPrefix:(id)arg2;
- (id)getItem:(unsigned long long)arg1;
- (BOOL)isSightResourceValid;
- (void)setSerializableExtMapData:(id)arg1;
- (id)serializableExtMapData;
- (void)setSerializableExt:(id)arg1 forKey:(id)arg2;
- (void)removeSerializableExtForKey:(id)arg1;
- (id)serializableExtForKey:(id)arg1;
- (id)RISKY_savedSightCompositeTaskId;
- (void)setCachedSightCompositeTask:(id)arg1 atIndex:(long long)arg2;
- (id)getCachedSightCompositeTaskAtIndex:(long long)arg1;
- (void)removeCachedSightCompositeTaskAtIndex:(long long)arg1;
- (int)draftID;
- (void)setDraftID:(int)arg1;
- (id)itemAry;
- (void)setItemAry:(id)arg1;
- (int)date;
- (void)setDate:(int)arg1;
- (int)sourceForSNSUploadStat;
- (void)setSourceForSNSUploadStat:(int)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (id)uploadStatInfo;
- (void)setUploadStatInfo:(id)arg1;
- (id)exifLogInfo;
- (void)setExifLogInfo:(id)arg1;
- (id)videoScoreModel;
- (void)setVideoScoreModel:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)error;
- (void)setError:(id)arg1;
- (id)draftItemVideoPath;
- (void)setDraftItemVideoPath:(id)arg1;
- (BOOL)isUseFFmpegHevcEncoding;
- (void)setIsUseFFmpegHevcEncoding:(BOOL)arg1;
- (id)serializableExtMap;
- (void)setSerializableExtMap:(id)arg1;
- (void)setRISKY_savedSightCompositeTaskId:(id)arg1;
- (id)cachedSightCompositeTask;
- (void)setCachedSightCompositeTask:(id)arg1;
- (void).cxx_destruct;
@end


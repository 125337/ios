@interface DeviceRankWorkoutMgr : MMUserService <ICdnComMgrExt, MMServiceProtocol>
{
    NSMutableDictionary * _checkInImageUploadTargetSeqMap; // +0x8
    NSMutableDictionary * _checkInImageUploadTargetMap; // +0x10
    NSMutableDictionary * _checkInImageUploadCompletionMap; // +0x18
    NSMutableSet * _checkInImageUploadOnlyClientIDSet; // +0x20
    NSMutableSet * _uploadingCheckInImageTargetSeqSet; // +0x28
}
+ (id)checkInSportNameForTarget:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)getRankInfoViewWithDeviceRankInfo:(id)arg1 IsBottom:(BOOL)arg2 IsFromFocus:(BOOL)arg3 parentVC:(id)arg4;
- (id)getRankInfoViewWithDeviceRankInfo:(id)arg1 IsBottom:(BOOL)arg2 IsFromFocus:(BOOL)arg3 showRedDot:(BOOL)arg4 parentVC:(id)arg5;
- (id)getSportViewWithFrame:(CGRect)arg1 rankDetail:(id)arg2 isSelf:(BOOL)arg3 workoutRecordsExpanded:(BOOL)arg4;
- (void)getTargetList;
- (void)setTarget:(id)arg1 opType:(int)arg2;
- (void)setTarget:(id)arg1 opType:(int)arg2 completion:(id /* block */)arg3;
- (id)p_checkInImageCacheDir;
- (id)p_checkInImageCachePathWithClientID:(id)arg1;
- (unsigned int)p_saveCheckInImage:(id)arg1 filePath:(id)arg2;
- (void)p_cacheCheckInImageWithURL:(id)arg1 clientID:(id)arg2;
- (void)uploadCheckInImage:(id)arg1 target:(id)arg2;
- (void)uploadCheckInImage:(id)arg1 target:(id)arg2 completion:(id /* block */)arg3;
- (void)p_uploadCheckInImage:(id)arg1 target:(id)arg2 updateTargetAfterUpload:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)OnCdnUpload:(id)arg1;
- (id)checkInImageUploadTargetSeqMap;
- (void)setCheckInImageUploadTargetSeqMap:(id)arg1;
- (id)checkInImageUploadTargetMap;
- (void)setCheckInImageUploadTargetMap:(id)arg1;
- (id)checkInImageUploadCompletionMap;
- (void)setCheckInImageUploadCompletionMap:(id)arg1;
- (id)checkInImageUploadOnlyClientIDSet;
- (void)setCheckInImageUploadOnlyClientIDSet:(id)arg1;
- (id)uploadingCheckInImageTargetSeqSet;
- (void)setUploadingCheckInImageTargetSeqSet:(id)arg1;
- (void).cxx_destruct;
@end

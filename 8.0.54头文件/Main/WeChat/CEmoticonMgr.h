@interface CEmoticonMgr : MMUserService <MMServiceProtocol, MMResPackageMgrExt, MMConfigMgrExt>
{
    EmoticonDataDB * m_oEmoticonDB; // +0x8
    NSMutableSet * _savingCustomEmotThumbs; // +0x10
    NSRecursiveLock * _saveThumbsLock; // +0x18
    EmoticonSendRecordList * _recordList; // +0x20
}
+ (unsigned int)CustomOrCameraEmoticonFirstSyncLimit;
+ (unsigned int)CustomOrCameraEmoticonManualSyncLimit;
+ (unsigned int)CustomEmoticonLimit;
+ (unsigned int)CameraEmoticonLimit;
+ (BOOL)IsEmoticonImageExist:(id)arg1;
+ (void)notifyEmoticonListUpdatedFor:(unsigned long long)arg1;
+ (id)GetEmoticonByMD5:(id)arg1;
+ (id)emoticonMsgForImageData:(id)arg1 errorMsg:(id *)arg2;
+ (id)emoticonMsgForEmoticonWrap:(id)arg1 imageData:(id)arg2 errorMsg:(id *)arg3;
+ (id)errorMsgForEmoticonImageData:(id)arg1;
+ (id)genEmoticonMsgForEmoticonWrap:(id)arg1 imageData:(id)arg2;
+ (id)getEmoticonImageByMD5:(id)arg1;
+ (id)getEmoticonImageForEditByMD5:(id)arg1 isStore:(BOOL)arg2;
+ (BOOL)isSelfieEmoticonWithWrap:(id)arg1;
+ (void)ReportAddEmoticonWithAddEmoticonWrap:(id)arg1 failedReason:(id)arg2;
+ (unsigned int)getIdKeyIdEmoticon;
+ (unsigned int)getIdKeyResolutionLimit;
+ (id)genSafeEmoticonImage:(id)arg1;
+ (BOOL)isTusijiEmoticonMD5:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)loadDB;
- (void)downloadTusijiResInMainThread;
- (void)configWxAMEnableSetting;
- (void)AddHardCode:(id)arg1 Type:(unsigned int)arg2 GameType:(unsigned int)arg3 OriginPath:(id)arg4 packageId:(id)arg5;
- (void)hardcodeTusiji;
- (void)InitLocalList;
- (void)copyPic:(id)arg1 fromResource:(id)arg2;
- (id)GetEmoticonList;
- (id)checkAndSaveEmoticon:(id)arg1 addEmotionWrap:(id)arg2;
- (BOOL)AddEmoticonSilently:(id)arg1 Type:(unsigned int)arg2 packageId:(id)arg3 Source:(long long)arg4 Index:(unsigned int)arg5;
- (id)AddCustomEmoticonWithData:(id)arg1 addEmoticonWrap:(id)arg2 isSilently:(BOOL)arg3;
- (id)AddEmoticonWithData:(id)arg1 addEmoticonWrap:(id)arg2 extFlag:(unsigned int)arg3 index:(id)arg4 isSilently:(BOOL)arg5;
- (void)DeleteEmoticonByMd5List:(id)arg1 ofType:(unsigned long long)arg2;
- (BOOL)DeleteEmoticonFromCustomListByMd5:(id)arg1;
- (BOOL)DeleteEmoticonFromCameraListByMd5:(id)arg1;
- (BOOL)deleteEmoticonByPid:(id)arg1 isSilently:(BOOL)arg2 needRemoveFile:(BOOL)arg3;
- (BOOL)IsJsbOrDiceEmoticonMd5:(id)arg1;
- (BOOL)CheckEmoticonExist:(id)arg1;
- (BOOL)CheckEmoticonExistInCustomListByMd5:(id)arg1;
- (void)willRecoverDatabase;
- (void)onResPackageReady:(id)arg1;
- (id)updatedEmoticonArrayForGame:(id)arg1;
- (id)getEmoticonWrapByMd5:(id)arg1;
- (id)getEmoticonListByPackageId:(id)arg1;
- (id)getCustomEmoticonListWithOutGame;
- (id)getCameraEmoticonList;
- (BOOL)updateEmoticon:(id)arg1 usedTime:(unsigned int)arg2;
- (id)lastestSentMd5InMd5list:(id)arg1;
- (id)FilterNotInDBList:(id)arg1;
- (BOOL)updateEmoticon:(id)arg1 packageId:(id)arg2;
- (id)getRecentUsedEmoticonList:(unsigned int)arg1;
- (BOOL)checkEmoticonCanAddStrictWay:(BOOL)arg1 Md5:(id)arg2 pid:(id)arg3;
- (BOOL)checkEmoticonCanAddWithMd5:(id)arg1 pid:(id)arg2;
- (void)onMMDynamicConfigUpdated;
- (void)trySaveCustomThumbImageWithImg:(id)arg1 md5:(id)arg2;
- (id)recordList;
- (void)addRecordWithMessageWrap:(id)arg1;
- (void)delRecordWithMd5:(id)arg1;
- (void)delAllRecord;
- (BOOL)isEmoticonInRecordFor:(id)arg1;
- (id)allRecentSendEmoticonInOrder;
- (id)emoticonDataDB;
- (id)savingCustomEmotThumbs;
- (void)setSavingCustomEmotThumbs:(id)arg1;
- (id)saveThumbsLock;
- (void)setSaveThumbsLock:(id)arg1;
- (void)setRecordList:(id)arg1;
- (void).cxx_destruct;
@end


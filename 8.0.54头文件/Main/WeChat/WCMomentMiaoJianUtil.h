@interface WCMomentMiaoJianUtil : NSObject
+ (BOOL)injectMiaoJianMetaForUploadTask:(id)arg1 fromSightDraft:(id)arg2;
+ (id)parseMiaoJianMessageExtForUploadTask:(id)arg1;
+ (BOOL)clearMiaoJianMetaForUploadTask:(id)arg1;
+ (BOOL)isDataItemOfMiaoJianVideo:(id)arg1;
+ (BOOL)isAppInfoForMiaoJian:(id)arg1;
+ (id)parseMiaoJianExtInfo:(id)arg1;
+ (id)lyricsFromMusicInfo:(id)arg1;
+ (id)songInfoFromMusicInfo:(id)arg1;
+ (id)omjMusicInfoFromSprMiaoJianBgmSearchMusicItem:(id)arg1;
+ (id)omjMusicInfoFromSelectedMusicData:(id)arg1;
+ (id)generateJsonBase64FromObject:(id)arg1;
+ (id)generateUrlSafeJsonBase64FromObject:(id)arg1;
+ (id)saveImageToMJDir:(id)arg1;
+ (BOOL)removeFileFromMJDirByFileName:(id)arg1;
+ (id)filePathFromMJDirOfFileName:(id)arg1;
+ (id)getWCMomentsMJDir;
+ (unsigned long long)cleanMJDir;
+ (id)_generateJSONStringWithObject:(id)arg1 replacingForReport:(BOOL)arg2;
+ (id)_safeReportStringWithString:(id)arg1;
+ (id)_encodeToBase64WithString:(id)arg1;
+ (id)_encodeToBase64WithUrlStr:(id)arg1;
+ (id)_decodeFromBase64String:(id)arg1;
+ (id)_decodeFromBase64UrlStr:(id)arg1;
@end


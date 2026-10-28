@interface WCImageTranslateMgr : MMUserService <IMsgExt, MMServiceProtocol>
+ (unsigned int)imagePreferSize;
+ (float)imageCompressionQuality;
+ (unsigned long long)cleanCacheMgrMakeToClean;
+ (unsigned long long)preCleanGetCacheSize;
+ (id)mmkv;
- (void)onServiceInit;
- (id)pathForImgCacheDir;
- (id)pathForImgCacheForBiz:(id)arg1;
- (void)setTranslateImageLang:(unsigned long long)arg1 biz:(id)arg2 desc:(id)arg3;
- (unsigned int)getTranslateImageLangForBiz:(id)arg1 desc:(id)arg2;
- (void)removeTranslateImageLangStateForBiz:(id)arg1 desc:(id)arg2;
- (void)setImageDetectResult:(unsigned int)arg1 biz:(id)arg2 desc:(id)arg3;
- (unsigned int)getImageDetectResultForBiz:(id)arg1 desc:(id)arg2;
- (void)removeImageDetectResultForBiz:(id)arg1 desc:(id)arg2;
- (BOOL)isExistImageDetectResultForBiz:(id)arg1 desc:(id)arg2;
- (void)setTranslateImageBrand:(id)arg1 biz:(id)arg2 desc:(id)arg3;
- (id)getTranslateImageBrandForBiz:(id)arg1 desc:(id)arg2;
- (void)removeTranslateImageBrandForBiz:(id)arg1 desc:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)internalKVStat:(int)arg1 result:(unsigned int)arg2 hasSaveOriImg:(BOOL)arg3 hasSaveTranImg:(BOOL)arg4 showOriImgCnt:(unsigned int)arg5 totalTime:(unsigned int)arg6 uploadTime:(unsigned int)arg7 translateTime:(unsigned int)arg8 fileId:(id)arg9 aesKey:(id)arg10;
- (void)ReportAction:(unsigned long long)arg1 source:(int)arg2 fileId:(id)arg3 aesKey:(id)arg4;
- (void)ReportAction:(unsigned long long)arg1 source:(int)arg2 hasDownloadHD:(BOOL)arg3 fileId:(id)arg4 aesKey:(id)arg5;
- (void)ReportCancelAction:(int)arg1 hasSaveOriImg:(BOOL)arg2 time:(unsigned int)arg3 fileId:(id)arg4 aesKey:(id)arg5;
- (void)ReportTranslateFor:(int)arg1 result:(unsigned int)arg2 hasSaveOriImg:(BOOL)arg3 hasSaveTranImg:(BOOL)arg4 showOriImgCnt:(unsigned int)arg5 TotalTime:(unsigned int)arg6 uploadTime:(unsigned int)arg7 translateTime:(unsigned int)arg8 fileId:(id)arg9 aesKey:(id)arg10;
- (void)ReportTranslateFeedback:(int)arg1 originImage:(id)arg2 translateImage:(id)arg3;
- (id)promiseForUploadCDNImage:(id)arg1;
@end

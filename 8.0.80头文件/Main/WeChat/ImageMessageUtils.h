@interface ImageMessageUtils : NSObject
+ (BOOL)isOpenRecordLivePhoto;
+ (id)getLiveVideoDownloadKey:(id)arg1;
+ (id)getLiveHDVideoDownloadKey:(id)arg1;
+ (BOOL)isClose265CompressVideoUpload;
+ (BOOL)isShowLiveSelectGuideView;
+ (void)onUserAcceptLiveGuide;
+ (BOOL)isOpenCalOriginSourceMd5;
+ (BOOL)isWxamEnable;
+ (void)cacheFileToHardLink:(id)arg1;
+ (void)cacheWxamImage:(id)arg1;
+ (id)genUploadMsgImgRequest:(id)arg1 hitMd5:(BOOL)arg2 imgInfo:(id)arg3 imgType:(int)arg4 md5:(id)arg5 msgWrap:(id)arg6;
+ (unsigned int)CreateSendImageEvent:(id)arg1 clientMsgId:(id)arg2 md5:(id)arg3 hitMd5:(BOOL)arg4 imgType:(int)arg5 imgInfoBuffer:(id)arg6;
+ (void)SaveImageDataWithMsgWrap:(id)arg1;
+ (BOOL)SaveMesImg:(id)arg1 MsgWrap:(id)arg2;
+ (BOOL)SaveMsgThumb:(id)arg1 MsgWrap:(id)arg2;
@end

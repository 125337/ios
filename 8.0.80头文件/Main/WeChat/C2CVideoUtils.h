@interface C2CVideoUtils : NSObject
+ (BOOL)IsOpenRawPreloadSvrRecall;
+ (id)generateDownloadArgsWrap:(id)arg1;
+ (basic_string<char, std::char_traits<char>, std::allocator<char>>)getRawRecallBizReqPayloadWhenRVDownloading:(id)arg1;
+ (basic_string<char, std::char_traits<char>, std::allocator<char>>)generateRawVideoRecallBizReqPayloadContent:(id)arg1;
+ (unsigned long long)getRawVideoRecallSize:(id)arg1 recallDuration:(unsigned int)arg2 recallPercent:(unsigned int)arg3;
+ (id)generateRawDownloadArgsWrap:(id)arg1;
+ (id)generateC2CVideoPreviewMetaArgsWrap:(id)arg1 aeskey:(id)arg2 filesize:(unsigned long long)arg3 savepath:(id)arg4;
+ (id)generateC2CVideoPreviewDataArgsWrap:(id)arg1 aeskey:(id)arg2 url:(id)arg3 filesize:(unsigned long long)arg4 savepath:(id)arg5;
+ (id)tryGetImgFromVideoPath:(id)arg1 thumbImagePath:(id)arg2 maskedThumbImagePath:(id)arg3;
+ (BOOL)changeVideoMsgWrap:(id)arg1 toDownloadStaus:(unsigned int)arg2;
+ (BOOL)isMetadataAIGCEnable;
+ (id)getAIGCTagFromVideoPath:(id)arg1;
+ (void)asyncWriteAIGCTag:(id)arg1 toVideoPath:(id)arg2 complete:(id /* block */)arg3;
+ (BOOL)syncWriteAIGCTag:(id)arg1 toVideoPath:(id)arg2;
+ (void)preloadSvrRecallRawVideoWhenCompressVStartDownload:(id)arg1;
@end

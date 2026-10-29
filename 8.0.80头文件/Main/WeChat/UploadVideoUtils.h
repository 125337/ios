@interface UploadVideoUtils : NSObject
+ (void)dispatchExportPreparation:(id /* block */)arg1;
+ (BOOL)isOpenReplaceNewFileIdWhenHitCdnCache;
+ (BOOL)isOpenRecordReplaceNewFileIdWhenHitCdnCache;
+ (id)getRawCacheFilePathFrom:(id)arg1;
+ (id)getRawOutputFilePathFrom:(id)arg1;
+ (BOOL)canUseMultiSocket:(id)arg1;
+ (int)getNetworkType;
+ (unsigned int)getMediaSource:(unsigned int)arg1;
+ (int)getMaxRetryCount;
+ (BOOL)isOpenSelectRawVideo;
+ (unsigned long long)getLimitSendFileSize;
+ (unsigned long long)getVideoUploadValidateTime;
+ (unsigned long long)getLimitThumbFileSize;
+ (BOOL)isThumbImageExceedLimit:(id)arg1;
+ (BOOL)compressThumbImageIfNeeded:(id)arg1;
+ (BOOL)isCanRetryUpload:(id)arg1;
+ (BOOL)isCanRetryUploadVideoCompressData:(id)arg1;
+ (BOOL)isCanRetryUploadVideoRawData:(id)arg1;
+ (BOOL)isApacCodecTrack:(id)arg1;
+ (id)geneateNoApacExportSessionWithAsset:(id)arg1;
+ (BOOL)isUseMavByCheckAssetAudio:(id)arg1;
+ (id)getCodecTagName:(id)arg1;
+ (BOOL)IsC2CVideoNeedCompress:(id)arg1;
@end

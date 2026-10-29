@interface UploadVideoUtils : NSObject
+ (id)getRawCacheFilePathFrom:(id)arg1;
+ (id)getRawOutputFilePathFrom:(id)arg1;
+ (BOOL)canUseMultiSocket:(id)arg1;
+ (int)getNetworkType;
+ (unsigned int)getMediaSource:(unsigned int)arg1;
+ (int)getMaxRetryCount;
+ (BOOL)isOpenSelectRawVideo;
+ (BOOL)isOpenOccupyMsgSend;
+ (unsigned long long)getLimitSendFileSize;
+ (unsigned long long)getVideoUploadValidateTime;
+ (BOOL)isCanRetryUpload:(id)arg1;
+ (BOOL)isCanRetryUploadVideoCompressData:(id)arg1;
+ (BOOL)isCanRetryUploadVideoRawData:(id)arg1;
+ (BOOL)isApacCodecTrack:(id)arg1;
+ (id)geneateNoApacExportSessionWithAsset:(id)arg1;
@end


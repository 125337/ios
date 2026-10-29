@interface MMMP4Parser : NSObject
+ (long long)GetFileSize:(id)arg1;
+ (float)parserToGetDurationWithFilePath:(id)arg1;
+ (float)GetVideoRealTimeFromVideoMediaInfo:(id)arg1;
+ (id)getMediaInfoWithFilePath:(id)arg1;
+ (id)getVideoBoxsWithfilePath:(id)arg1;
+ (unsigned long long)getBoxOffsetWithName:(id)arg1 FileHandle:(id)arg2 ParentBoxEndOffset:(unsigned long long)arg3;
+ (void)parserMediaInfoWithTrakInfo:(id)arg1 MediaInfo:(id)arg2 MoovEndOffset:(unsigned long long)arg3;
+ (id)updateVideoMediaInfoWhitFileHandler:(id)arg1 MediaInfo:(id)arg2 mediaOffset:(unsigned long long)arg3 mediaSize:(unsigned long long)arg4;
+ (void)updateMediaInfoWithMVHD:(id)arg1 MediaInfo:(id)arg2;
@end

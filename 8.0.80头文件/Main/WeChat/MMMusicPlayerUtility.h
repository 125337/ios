@interface MMMusicPlayerUtility : MMObject
+ (id)getMusicIconFromSource:(id)arg1 size:(CGSize)arg2;
+ (id)getMusicIconFromSource:(id)arg1 size:(CGSize)arg2 cornerRadius:(double)arg3;
+ (id)resizeImage:(id)arg1 toMaxWidth:(int)arg2 andMaxHeight:(int)arg3 cornerRadius:(double)arg4;
+ (id)getMusicGrayIconWithAppId:(id)arg1;
+ (id)getMusicGrayIconWithAppId:(id)arg1 size:(CGSize)arg2;
+ (id)getMusicGrayIconPathWithAppId:(id)arg1;
+ (id)getAppSourceNameWithAppId:(id)arg1;
+ (id)getMusicSourceNameWithAppId:(id)arg1;
+ (id)getMusicCoverImageData:(id)arg1;
+ (void)fillMusicShareItemWithSongInfo:(id)arg1 songInfo:(id)arg2;
+ (void)fillMusicShareItemSDKData:(id)arg1 originShareItem:(id)arg2;
+ (void)setStatusOpenMusicInfoData:(id)arg1;
+ (BOOL)shouldShowLyrics:(id)arg1;
+ (id)generateMessageWrapWithMusicInfo:(id)arg1 shareItem:(id)arg2 coverImageData:(id)arg3 pushFromType:(unsigned long long)arg4;
+ (id)musicVideoMainDir;
+ (id)pathToMusicMVData;
+ (id)genTmpThumbWithLocalVideoPath:(id)arg1 clipOffsetMs:(unsigned long long)arg2;
+ (id)compressedThumbImage:(id)arg1;
@end

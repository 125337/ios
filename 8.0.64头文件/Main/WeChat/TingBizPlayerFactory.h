@interface TingBizPlayerFactory : NSObject
+ (BOOL)shouldTpTakeOverDownload:(id)arg1;
+ (id)bizPlayerForTingItem:(id)arg1;
+ (BOOL)isTPPlayerEnableForTingItem:(id)arg1;
+ (BOOL)isPreloadNextPlayerEnableForTingItem:(id)arg1;
+ (BOOL)isTPPlayerForMusicEnable:(id)arg1;
+ (BOOL)isVoiceAbleMusic:(id)arg1;
+ (BOOL)isAudiotryEnhEnable:(id)arg1;
+ (BOOL)isTPPlayerForArticleNoHls:(id)arg1;
+ (BOOL)isTPPlayerForArticleAudio;
+ (BOOL)isTPPlayerForWeAppAudio;
+ (BOOL)isTPPlayerForWeAppLocalFile;
+ (BOOL)isTPPlayerForFinderAudio;
+ (BOOL)isTPPlayerForLocalFile;
+ (BOOL)isTPPlayerIgnoreVideoError;
+ (long long)getTPPlayerTakeOverDownloadForMusicValue;
+ (BOOL)isTPPlayerTakeOverDownloadForMusic;
+ (BOOL)isEncryptExptEnable;
+ (BOOL)getTPPlayerTakeOverDownloadValueForOtherType;
+ (BOOL)isTPHearingAidExpt;
+ (BOOL)isHearingTtsScene:(id)arg1;
@end

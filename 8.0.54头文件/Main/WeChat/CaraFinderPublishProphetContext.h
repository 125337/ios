@interface CaraFinderPublishProphetContext : CaraNativeFinderPublishProphetContext <CaraNativeFinderPublishProphetContextBase>
{
    WCFinderPostSessionModel * _postSession; // +0x8
}
- (id)zidl;
- (int)videoDurationMs;
- (int)videoEmojiNum;
- (int)videoTextNum;
- (BOOL)videoMusicIdValid;
- (int)videoMusicIndex;
- (BOOL)isSearchMusic;
- (int)longDescLength;
- (int)shortDescLength;
- (BOOL)hasExtReading;
- (BOOL)postFromDraft;
- (BOOL)hasInvalidWatermark;
- (BOOL)enterBackgroundOnPostPage;
- (float)originBitrate;
- (int)originWidth;
- (float)originAudioBitrate;
- (float)originVideoFrameRate;
- (int)editTimeMs;
- (float)fileSize;
- (BOOL)useVideoTemplateInfo;
- (int)videoPlayDuration;
- (BOOL)newSelectOnPostPage;
- (BOOL)hasOriginalStatementEntry;
- (BOOL)hasClickLongDescTextView;
- (BOOL)hasClickShortDescTextView;
- (BOOL)hasCleanUpLongDesc;
- (BOOL)hasCleanUpShortDesc;
- (int)videoSourceType;
- (int)patMusicType;
- (id)postSession;
- (void)setPostSession:(id)arg1;
- (void).cxx_destruct;
@end


@interface CaraNativeFinderPublishProphetContext : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    CaraNativeFinderPublishProphetContextCppCover cpp_cover; // +0x80
    weak_ptr<cara::CaraNativeFinderPublishProphetContextDispatcher> cpp_dispatcher; // +0xd0
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2;
- (shared_ptr<cara::CaraNativeFinderPublishProphetContextDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (float)predictProbThreshold;
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
- (int)originHight;
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
- (int)poiType;
- (int)patMusicType;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

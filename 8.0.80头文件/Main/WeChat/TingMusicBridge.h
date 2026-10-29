@interface TingMusicBridge : NSObject
+ (id)listenMusicInfoFromMusicInfo:(id)arg1;
+ (id)listenArticleInfoFromMusicInfo:(id)arg1;
+ (id)musicInfoFromListenMusicInfo:(id)arg1;
+ (void)copyPropertiesFromListenMusicInfo:(id)arg1 toMMMusicInfo:(id)arg2;
+ (id)musicInfoFromTingItem:(id)arg1;
+ (id)createListenItem;
+ (id)tingItemFromMusicInfo:(id)arg1 type:(int)arg2;
+ (id)musicInfoFromWCDataItem:(id)arg1;
+ (id)tingItemFromMessageWrap:(id)arg1 readerWrap:(id)arg2 index:(int)arg3;
+ (id)tingItemFromChatMessageWrap:(id)arg1;
+ (id)tingItemFromLyricsMessageWrap:(id)arg1;
+ (id)tingItemFromMomentDataItem:(id)arg1;
+ (id)finderInfoFromWCFinderDataItem:(id)arg1;
+ (id)tingItemFromWCFinderDataItem:(id)arg1 type:(int)arg2;
+ (id)tingItemFromMPArticleUrl:(id)arg1;
+ (id)tingItemFromLocalFileInfo:(id)arg1;
+ (id)tingItemFromLocalFileDataInfo:(id)arg1;
+ (id)tingLocalFileInfoFromMessageWrap:(id)arg1;
+ (id)tingLocalFileInfoFromFavData:(id)arg1;
+ (id)tingLocalFileInfoFromMsgRecordDataWrap:(id)arg1;
+ (id)tingLocalFileInfoFromGroupNoticeItem:(id)arg1 favData:(id)arg2;
+ (id)tingLocalFileInfoFromFavItem:(id)arg1 favData:(id)arg2;
+ (id)tingItemFromListenPlayableInfo:(id)arg1;
+ (id)categoryItemFromRawDictionary:(id)arg1;
@end

@interface WCFinderProfileFeedHelper : NSObject
+ (id)cellConfigForContentVM:(id)arg1 fullScreen:(BOOL)arg2 useStreamCell:(BOOL)arg3 justWatchInfo:(id)arg4 halfScreen:(BOOL)arg5 hiddenSticker:(BOOL)arg6 showPostTime:(BOOL)arg7 useFullCover:(BOOL)arg8;
+ (id)cellForContentVM:(id)arg1 inCollectionView:(id)arg2 indexPath:(id)arg3 coverCost:(id)arg4 config:(id)arg5;
+ (id)findCellWithTid:(id)arg1 inCollectionView:(id)arg2 indexPath:(id *)arg3;
+ (void)onClickFeedCollection:(id)arg1 fromVC:(id)arg2 username:(id)arg3 justWatchItem:(id)arg4 complete:(id /* block */)arg5;
+ (void)goCollectionFeedListWithDataFetcher:(id)arg1 destinationFeedID:(id)arg2 autoPresentCollectionHalfScreen:(BOOL)arg3 username:(id)arg4 fromVC:(id)arg5 complete:(id /* block */)arg6;
+ (void)checkFinderSwitch:(id /* block */)arg1;
+ (id)findShowPostTimeFeedTid:(id)arg1;
@end

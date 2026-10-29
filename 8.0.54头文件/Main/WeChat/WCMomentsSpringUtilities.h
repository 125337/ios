@interface WCMomentsSpringUtilities : NSObject
+ (unsigned long long)lengthOfSpringText:(id)arg1;
+ (void)fixTextForSpringTextView:(id)arg1 croppedText:(BOOL *)arg2;
+ (id)stringByRemovingLinesInString:(id)arg1;
+ (id)stringByRemovingFirstSpacesInString:(id)arg1;
+ (BOOL)canPostSpringText:(id)arg1;
+ (BOOL)canPostSpringFeed:(id)arg1 maxImageCount:(unsigned long long)arg2 selectedSightDraft:(id)arg3 inputText:(id)arg4;
+ (BOOL)canDisplaySpringStyleForDataItem:(id)arg1;
+ (BOOL)canDisplaySpringStyleForCommentsInDataItem:(id)arg1;
+ (BOOL)canDisplaySpringStyleForComment:(id)arg1 inDataItem:(id)arg2;
+ (BOOL)canDisplaySpringStyleForCommentText:(id)arg1 inDataItem:(id)arg2;
+ (id)getLiveShareItemThatDisplaysSpringSourceForDataItem:(id)arg1;
+ (id)getLiveShareItemThatDisplaysSpringSourceForDataItem:(id)arg1 enterLiveMode:(long long)arg2;
+ (BOOL)canEnterFinderLiveUsingLiveInfoModeWithShareItem:(id)arg1;
+ (BOOL)canEnterFinderLiveUsingFinderUsernameModeWithShareItem:(id)arg1;
+ (BOOL)canDisplaySpringSourceForDataItem:(id)arg1;
+ (BOOL)openSpringSourceWithDataItem:(id)arg1 urlString:(id)arg2;
+ (id)springActionSheetItemTitle;
+ (id)createSpringActionSheetItem;
+ (void)customizeSpringActionItemView:(id)arg1 forActionSheetItem:(id)arg2;
+ (void)printFinderShareItem:(id)arg1;
+ (void)printLiveShareItem:(id)arg1;
@end


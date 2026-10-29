@interface FTSUtil : NSObject
+ (id)getUserFTSRootDir;
+ (id)getFTSDBPath;
+ (long long)GetMd5Int64:(id)arg1;
+ (id)FTSOpenIMAppIdLogFromContact:(id)arg1;
+ (void)commonSearchClickReport:(id)arg1;
+ (double)getSearchCancelButtonWidth;
+ (id)encryptForLog:(id)arg1;
+ (unsigned int)ConvertClickTypeFromFeedType:(unsigned int)arg1;
+ (unsigned int)CalMMContactCountForGroupContact:(id)arg1 dicCache:(id)arg2;
+ (id)GetStatTopHitInfoWithTotal:(unsigned int)arg1 specCount:(unsigned int)arg2;
+ (id)GetClickCountFormatForFeature:(id)arg1;
+ (id)GetClickDaysFormatForFeature:(id)arg1;
+ (unsigned int)GetLastSearchTimeForGroup:(id)arg1;
+ (id)FormatGroupMatchString:(id)arg1;
+ (id)parseForContent:(id)arg1 arrTagRanges:(id)arg2;
+ (id)getABTestItemWithKey:(id)arg1;
@end


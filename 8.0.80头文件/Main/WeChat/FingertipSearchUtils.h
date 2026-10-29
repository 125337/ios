@interface FingertipSearchUtils : NSObject
+ (long long)getFootprintResidentMemory;
+ (id)fingerSearchDirPath;
+ (id)getMainKeywordsPath;
+ (id)getRealTimeDataPath;
+ (id)getByteSearchModelPath;
+ (unsigned int)getMatchContentMinLength;
+ (unsigned int)getMatchContentMaxLength;
+ (unsigned int)getMaxKeywordCount;
+ (unsigned int)getSearchMaxCount;
+ (BOOL)isCloseFingertipSearch;
+ (unsigned int)getSearchPrime;
+ (BOOL)IsOpenBytesSearch;
+ (BOOL)IsCloseBytesSearch;
+ (BOOL)IsOpenRegexSearch;
+ (void)refreshResourceWithPath:(id)arg1 TargetPath:(id)arg2;
+ (unsigned int)checkMainKeywordResource;
+ (int)getMaxPrimeWithValue:(int)arg1;
@end

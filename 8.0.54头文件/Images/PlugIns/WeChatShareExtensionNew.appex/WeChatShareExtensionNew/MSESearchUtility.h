@interface MSESearchUtility : NSObject
+ (void)initialize;
+ (BOOL)isTrailSurrogates:(unsigned short)arg1;
+ (id)trimString:(id)arg1;
+ (BOOL)isLeadSurrogates:(unsigned short)arg1;
+ (BOOL)isEnglishWord:(id)arg1;
+ (BOOL)isEnglishLetter:(unsigned short)arg1;
+ (BOOL)isNumber:(id)arg1;
+ (id)makeSearchItemFromQuery:(id)arg1;
+ (id)searchFromSessionItems:(id)arg1 SearchText:(id)arg2 DicMatchTip:(id)arg3;
+ (id)getAllMatchType;
+ (BOOL)isMultiMatchObject:(id)arg1 sessionInfo:(id)arg2 matchTips:(id)arg3;
+ (id)getShowPrefix:(id)arg1;
+ (id)tryMatchPinYinWithTargetText:(id)arg1 searchText:(id)arg2 matchTypeConfig:(id)arg3 matchKey:(id)arg4;
+ (id)tryMatchSessionItem:(id)arg1 targetText:(id)arg2 searchItem:(id)arg3 matchTypeConfig:(id)arg4 matchKey:(id)arg5;
+ (BOOL)isMultiMatchText:(id)arg1 searchItem:(id)arg2 matchInfo:(id)arg3;
+ (id)getMatchPinYinText:(id)arg1 searchText:(id)arg2 isShort:(BOOL)arg3;
@end


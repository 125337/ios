@interface MMSpecialMsgSearchPayReport : NSObject
+ (unsigned long long)accountTypeWithContact:(id)arg1;
+ (unsigned long long)accountTypeWithBusinessType:(unsigned int)arg1;
+ (void)reportAccountType:(unsigned long long)arg1 action:(unsigned long long)arg2 text:(id)arg3 useTime:(long long)arg4 result:(unsigned int)arg5 oprationTime:(long long)arg6 arrResultItem:(id)arg7;
+ (void)reportClickAccountWithContact:(id)arg1;
+ (void)reportClickDateWithContact:(id)arg1 date:(id)arg2;
+ (id)resultItemsWithBusinessType:(unsigned int)arg1 msgItems:(id)arg2;
+ (id)resultItemsWithMsgItems:(id)arg1 maxCount:(unsigned long long)arg2;
+ (id)resultContentWithArrResultItem:(id)arg1;
+ (id)truncateString:(id)arg1 toMaxUTF8Bytes:(unsigned long long)arg2;
@end

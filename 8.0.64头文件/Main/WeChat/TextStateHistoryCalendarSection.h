@interface TextStateHistoryCalendarSection : NSObject
{
    BOOL _isLastMonthOfYear; // +0x8
    unsigned long long _year; // +0x10
    unsigned long long _month; // +0x18
    NSMutableDictionary * _keyToItemDict; // +0x20
    NSMutableIndexSet * _dayIndexes; // +0x28
    NSMutableDictionary * _iconIdToCountDict; // +0x30
    NSMutableDictionary * _customDescriptionToCountDict; // +0x38
    NSMutableArray * _itemList; // +0x40
}
+ (id)identifierFromYear:(unsigned long long)arg1 month:(unsigned long long)arg2;
- (id)identifier;
- (id)initWithYear:(unsigned long long)arg1 month:(unsigned long long)arg2;
- (_NSRange)dayRange;
- (id)topUseDescription;
- (void)appendInfo:(id)arg1 day:(unsigned long long)arg2;
- (void)removeInfo:(id)arg1 itemIndex:(unsigned long long)arg2;
- (id)itemList;
- (id)itemForDay:(unsigned long long)arg1;
- (unsigned long long)year;
- (void)setYear:(unsigned long long)arg1;
- (unsigned long long)month;
- (void)setMonth:(unsigned long long)arg1;
- (BOOL)isLastMonthOfYear;
- (void)setIsLastMonthOfYear:(BOOL)arg1;
- (id)keyToItemDict;
- (void)setKeyToItemDict:(id)arg1;
- (id)dayIndexes;
- (void)setDayIndexes:(id)arg1;
- (id)iconIdToCountDict;
- (void)setIconIdToCountDict:(id)arg1;
- (id)customDescriptionToCountDict;
- (void)setCustomDescriptionToCountDict:(id)arg1;
- (void)setItemList:(id)arg1;
- (void).cxx_destruct;
@end

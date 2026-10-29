@interface TextStateHistoryDay : NSObject
{
    unsigned long long _year; // +0x8
    unsigned long long _month; // +0x10
    unsigned long long _day; // +0x18
    NSMutableArray * _privateInfoList; // +0x20
}
+ (id)identifierFromYear:(unsigned long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3;
- (id)initWithYear:(unsigned long long)arg1 month:(unsigned long long)arg2 day:(unsigned long long)arg3;
- (id)infoList;
- (void)insertInfoAtBegin:(id)arg1;
- (void)insertInfoAtEnd:(id)arg1;
- (void)removeInfo:(id)arg1;
- (id)identifier;
- (unsigned long long)year;
- (void)setYear:(unsigned long long)arg1;
- (unsigned long long)month;
- (void)setMonth:(unsigned long long)arg1;
- (unsigned long long)day;
- (void)setDay:(unsigned long long)arg1;
- (id)privateInfoList;
- (void)setPrivateInfoList:(id)arg1;
- (void).cxx_destruct;
@end


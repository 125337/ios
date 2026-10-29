@interface TextStateHistoryCalendarItem : NSObject
{
    unsigned long long _day; // +0x8
    NSMutableArray * _privateInfoList; // +0x10
}
+ (id)identifierFromDay:(unsigned long long)arg1;
- (id)identifier;
- (id)initWithDay:(unsigned long long)arg1;
- (void)insertInfoAtBegin:(id)arg1;
- (void)appendInfo:(id)arg1;
- (void)removeInfo:(id)arg1;
- (id)infoList;
- (unsigned long long)day;
- (void)setDay:(unsigned long long)arg1;
- (id)privateInfoList;
- (void)setPrivateInfoList:(id)arg1;
- (void).cxx_destruct;
@end


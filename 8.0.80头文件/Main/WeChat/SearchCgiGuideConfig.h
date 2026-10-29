@interface SearchCgiGuideConfig : NSObject
{
    NSString * _vertTitle; // +0x8
    NSMutableArray * _arrVertEntryData; // +0x10
}
- (id)getTitleForBusinessType:(unsigned long long)arg1;
- (id)vertTitle;
- (void)setVertTitle:(id)arg1;
- (id)arrVertEntryData;
- (void)setArrVertEntryData:(id)arg1;
- (void).cxx_destruct;
@end

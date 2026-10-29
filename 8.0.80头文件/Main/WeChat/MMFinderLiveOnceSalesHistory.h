@interface MMFinderLiveOnceSalesHistory : NSObject
{
    unsigned long long _sales; // +0x8
    NSDate * _date; // +0x10
}
+ (id)nowWithSales:(unsigned long long)arg1;
- (unsigned long long)sales;
- (void)setSales:(unsigned long long)arg1;
- (id)date;
- (void)setDate:(id)arg1;
- (void).cxx_destruct;
@end

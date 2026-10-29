@interface FTSSectionCountLimitConfig : NSObject
{
    unsigned long long _maxDisplayItemsCount; // +0x8
    NSString * _titleForMore; // +0x10
}
- (id)init;
- (unsigned long long)maxDisplayItemsCount;
- (void)setMaxDisplayItemsCount:(unsigned long long)arg1;
- (id)titleForMore;
- (void)setTitleForMore:(id)arg1;
- (void).cxx_destruct;
@end


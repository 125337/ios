@interface MMAutoSearchItem : MMObject
{
    BOOL _startFromFirst; // +0x8
    NSString * _keyWord; // +0x10
}
+ (id)itemWithKeyWord:(id)arg1 startFromFirst:(BOOL)arg2;
- (id)keyWord;
- (void)setKeyWord:(id)arg1;
- (BOOL)startFromFirst;
- (void)setStartFromFirst:(BOOL)arg1;
- (void).cxx_destruct;
@end


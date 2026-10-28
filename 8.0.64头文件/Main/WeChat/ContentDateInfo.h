@interface ContentDateInfo : MMObject
{
    BOOL _isDefaultDate; // +0x8
    NSDate * _date; // +0x10
}
- (id)date;
- (void)setDate:(id)arg1;
- (BOOL)isDefaultDate;
- (void)setIsDefaultDate:(BOOL)arg1;
- (void).cxx_destruct;
@end

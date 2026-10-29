@interface WAMemoryPressureRecordItem : MMObject
{
    unsigned long long _level; // +0x8
    unsigned long long _timeStamp; // +0x10
    unsigned long long _interval; // +0x18
    NSString * _recordDescription; // +0x20
}
- (id)recordDescription;
- (unsigned long long)level;
- (void)setLevel:(unsigned long long)arg1;
- (unsigned long long)timeStamp;
- (void)setTimeStamp:(unsigned long long)arg1;
- (unsigned long long)interval;
- (void)setInterval:(unsigned long long)arg1;
- (void)setRecordDescription:(id)arg1;
- (void).cxx_destruct;
@end


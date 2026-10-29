@interface AudioMonoServiceObj : NSObject
{
    BOOL _isPaused; // +0x8
    unsigned long long _monoServiceBusinessType; // +0x10
    unsigned long long _subBusinessType; // +0x18
    NSString * _monoServiceId; // +0x20
}
- (unsigned long long)monoServiceBusinessType;
- (void)setMonoServiceBusinessType:(unsigned long long)arg1;
- (unsigned long long)subBusinessType;
- (void)setSubBusinessType:(unsigned long long)arg1;
- (BOOL)isPaused;
- (void)setIsPaused:(BOOL)arg1;
- (id)monoServiceId;
- (void)setMonoServiceId:(id)arg1;
- (void).cxx_destruct;
@end


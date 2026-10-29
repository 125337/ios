@interface WCFinderHSVModel : NSObject
{
    unsigned long long _hValue; // +0x8
    unsigned long long _sValue; // +0x10
    unsigned long long _vValue; // +0x18
}
- (unsigned long long)hValue;
- (void)setHValue:(unsigned long long)arg1;
- (unsigned long long)sValue;
- (void)setSValue:(unsigned long long)arg1;
- (unsigned long long)vValue;
- (void)setVValue:(unsigned long long)arg1;
@end

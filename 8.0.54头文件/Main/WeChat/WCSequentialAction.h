@interface WCSequentialAction : NSObject
{
    long long _type; // +0x8
    id /* block */ _block; // +0x10
    double _duration; // +0x18
    unsigned long long _options; // +0x20
}
- (long long)type;
- (void)setType:(long long)arg1;
- (id /* block */)block;
- (void)setBlock:(id /* block */)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (unsigned long long)options;
- (void)setOptions:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


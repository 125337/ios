@interface WCFinderCompressImageConfig : NSObject
{
    unsigned long long _type; // +0x8
    NSString * _resolution; // +0x10
    double _defaultRate; // +0x18
    double _maxSize; // +0x20
    double _heightResolution; // +0x28
    double _widthResolution; // +0x30
}
- (id)initWithType:(unsigned long long)arg1 resolution:(id)arg2 defaultRate:(double)arg3 maxSize:(double)arg4;
- (id)description;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)resolution;
- (void)setResolution:(id)arg1;
- (double)defaultRate;
- (void)setDefaultRate:(double)arg1;
- (double)maxSize;
- (void)setMaxSize:(double)arg1;
- (double)heightResolution;
- (void)setHeightResolution:(double)arg1;
- (double)widthResolution;
- (void)setWidthResolution:(double)arg1;
- (void).cxx_destruct;
@end

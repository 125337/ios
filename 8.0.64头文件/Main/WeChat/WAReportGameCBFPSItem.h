@interface WAReportGameCBFPSItem : WAReportBaseItem
{
    unsigned int _duration; // +0x8
    unsigned int _useCommandBuffer; // +0xc
    NSString * _appname; // +0x10
    long long _drawCall; // +0x18
    long long _time; // +0x20
    long long _fps; // +0x28
}
- (id)reportString;
- (id)appname;
- (void)setAppname:(id)arg1;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (unsigned int)useCommandBuffer;
- (void)setUseCommandBuffer:(unsigned int)arg1;
- (long long)drawCall;
- (void)setDrawCall:(long long)arg1;
- (long long)time;
- (void)setTime:(long long)arg1;
- (long long)fps;
- (void)setFps:(long long)arg1;
- (void).cxx_destruct;
@end

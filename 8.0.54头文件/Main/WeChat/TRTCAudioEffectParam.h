@interface TRTCAudioEffectParam : NSObject
{
    BOOL _publish; // +0x8
    int _effectId; // +0xc
    int _loopCount; // +0x10
    int _volume; // +0x14
    NSString * _path; // +0x18
}
- (id)initWith:(int)arg1 path:(id)arg2;
- (int)effectId;
- (void)setEffectId:(int)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (int)loopCount;
- (void)setLoopCount:(int)arg1;
- (BOOL)publish;
- (void)setPublish:(BOOL)arg1;
- (int)volume;
- (void)setVolume:(int)arg1;
- (void).cxx_destruct;
@end


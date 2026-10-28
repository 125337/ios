@interface TPPlayerLogContext : NSObject
{
    int _lifeId; // +0x8
    int _playId; // +0xc
    NSString * _prefix; // +0x10
    NSString * _module; // +0x18
    NSString * _tag; // +0x20
}
- (id)initWithDefaultValues;
- (id)initWithIncrementalValues;
- (id)initWithModule:(id)arg1;
- (id)initWithPrefix:(id)arg1 lifeId:(int)arg2 playId:(int)arg3 module:(id)arg4;
- (void)increasePlayId;
- (void)setLifeId:(int)arg1;
- (void)setPlayId:(int)arg1;
- (void)setPrefix:(id)arg1;
- (void)setModule:(id)arg1;
- (int)lifeId;
- (int)playId;
- (id)prefix;
- (id)module;
- (id)tag;
- (void)setTag:(id)arg1;
- (void).cxx_destruct;
@end

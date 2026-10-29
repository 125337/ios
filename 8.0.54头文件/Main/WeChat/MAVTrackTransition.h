@interface MAVTrackTransition : NSObject
{
    BOOL _changed; // +0x8
    NSString * _path; // +0x10
    MAVVLogEffect * _effect; // +0x18
    struct _duration; // +0x20
}
- (id)initWithPath:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (void)setPath:(id)arg1;
- (void)setDuration:(struct)arg1;
- (BOOL)isVaild;
- (id)path;
- (id)effect;
- (void)setEffect:(id)arg1;
- (struct)duration;
- (BOOL)changed;
- (void)setChanged:(BOOL)arg1;
- (void).cxx_destruct;
@end


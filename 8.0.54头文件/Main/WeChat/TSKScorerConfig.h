@interface TSKScorerConfig : NSObject
{
    BOOL _seekAsync; // +0x8
    BOOL _enablePitch; // +0x9
    TSKMidiParam * _midiParam; // +0x10
    TSKMultiParam * _multiParam; // +0x18
    NSArray * _sectionInfoArr; // +0x20
    NSString * _roleName; // +0x28
    TSKModelParam * _modelParam; // +0x30
}
- (id)init;
- (BOOL)seekAsync;
- (void)setSeekAsync:(BOOL)arg1;
- (BOOL)enablePitch;
- (void)setEnablePitch:(BOOL)arg1;
- (id)midiParam;
- (void)setMidiParam:(id)arg1;
- (id)multiParam;
- (void)setMultiParam:(id)arg1;
- (id)sectionInfoArr;
- (void)setSectionInfoArr:(id)arg1;
- (id)roleName;
- (void)setRoleName:(id)arg1;
- (id)modelParam;
- (void)setModelParam:(id)arg1;
- (void).cxx_destruct;
@end


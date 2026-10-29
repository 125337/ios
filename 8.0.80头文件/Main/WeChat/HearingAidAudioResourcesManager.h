@interface HearingAidAudioResourcesManager : NSObject
{
    NSString * _testPreAudioL1; // +0x8
    NSString * _testPreAudioL3; // +0x10
    NSString * _testPreAudioL5; // +0x18
    NSString * _chooseModeAudioStep1DjL2; // +0x20
    NSString * _chooseModeAudioStep1DjL4; // +0x28
    NSString * _chooseModeAudioStep1DjNA; // +0x30
    NSString * _chooseModeAudioStep1PsL2; // +0x38
    NSString * _chooseModeAudioStep1PsL4; // +0x40
    NSString * _chooseModeAudioStep1PsNA; // +0x48
    NSString * _chooseModeAudioStep2DjL2; // +0x50
    NSString * _chooseModeAudioStep2DjL4; // +0x58
    NSString * _chooseModeAudioStep2DjNA; // +0x60
    NSString * _chooseModeAudioStep2PsL2; // +0x68
    NSString * _chooseModeAudioStep2PsL4; // +0x70
    NSString * _chooseModeAudioStep2PsNA; // +0x78
    NSString * _chooseModeAudioStep2PxL2; // +0x80
    NSString * _chooseModeAudioStep2PxL4; // +0x88
    NSString * _chooseModeAudioStep2PxNA; // +0x90
}
+ (id)sharedInstance;
- (id)createHearingAidPatternWithType:(id)arg1 level:(long long)arg2 isNA:(BOOL)arg3 isChooseMode:(BOOL)arg4;
- (id)getRootFiles;
- (id)getChooseModeAudioStep1DjL2;
- (id)getChooseModeAudioStep1DjL4;
- (id)getChooseModeAudioStep1DjNA;
- (id)getChooseModeAudioStep1PsL2;
- (id)getChooseModeAudioStep1PsL4;
- (id)getChooseModeAudioStep1PsNA;
- (id)getChooseModeAudioStep2DjL2;
- (id)getChooseModeAudioStep2DjL4;
- (id)getChooseModeAudioStep2DjNA;
- (id)getChooseModeAudioStep2PsL2;
- (id)getChooseModeAudioStep2PsL4;
- (id)getChooseModeAudioStep2PsNA;
- (id)getChooseModeAudioStep2PxL2;
- (id)getChooseModeAudioStep2PxL4;
- (id)getChooseModeAudioStep2PxNA;
- (id)getTestPreAudioL1;
- (id)getTestPreAudioL3;
- (id)getTestPreAudioL5;
- (BOOL)setHearingAidAudioResources;
- (BOOL)setHearingAidTestPreAudio;
- (BOOL)setHearingAidChooseModeAudio;
- (id)testPreAudioL1;
- (void)setTestPreAudioL1:(id)arg1;
- (id)testPreAudioL3;
- (void)setTestPreAudioL3:(id)arg1;
- (id)testPreAudioL5;
- (void)setTestPreAudioL5:(id)arg1;
- (id)chooseModeAudioStep1DjL2;
- (void)setChooseModeAudioStep1DjL2:(id)arg1;
- (id)chooseModeAudioStep1DjL4;
- (void)setChooseModeAudioStep1DjL4:(id)arg1;
- (id)chooseModeAudioStep1DjNA;
- (void)setChooseModeAudioStep1DjNA:(id)arg1;
- (id)chooseModeAudioStep1PsL2;
- (void)setChooseModeAudioStep1PsL2:(id)arg1;
- (id)chooseModeAudioStep1PsL4;
- (void)setChooseModeAudioStep1PsL4:(id)arg1;
- (id)chooseModeAudioStep1PsNA;
- (void)setChooseModeAudioStep1PsNA:(id)arg1;
- (id)chooseModeAudioStep2DjL2;
- (void)setChooseModeAudioStep2DjL2:(id)arg1;
- (id)chooseModeAudioStep2DjL4;
- (void)setChooseModeAudioStep2DjL4:(id)arg1;
- (id)chooseModeAudioStep2DjNA;
- (void)setChooseModeAudioStep2DjNA:(id)arg1;
- (id)chooseModeAudioStep2PsL2;
- (void)setChooseModeAudioStep2PsL2:(id)arg1;
- (id)chooseModeAudioStep2PsL4;
- (void)setChooseModeAudioStep2PsL4:(id)arg1;
- (id)chooseModeAudioStep2PsNA;
- (void)setChooseModeAudioStep2PsNA:(id)arg1;
- (id)chooseModeAudioStep2PxL2;
- (void)setChooseModeAudioStep2PxL2:(id)arg1;
- (id)chooseModeAudioStep2PxL4;
- (void)setChooseModeAudioStep2PxL4:(id)arg1;
- (id)chooseModeAudioStep2PxNA;
- (void)setChooseModeAudioStep2PxNA:(id)arg1;
- (void).cxx_destruct;
@end

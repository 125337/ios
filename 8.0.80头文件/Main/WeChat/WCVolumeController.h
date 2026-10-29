@interface WCVolumeController : NSObject
{
    BOOL _needHidden; // +0x8
    WCVolumeView * _volumeView; // +0x10
}
+ (void)VoIP_queryValueWithCompletion:(id /* block */)arg1;
+ (void)VoIP_executeInAudioSessionQueue:(id /* block */)arg1;
+ (void)queryValueWithCompletion:(id /* block */)arg1 inQueue:(id)arg2;
+ (void)queryValueWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)dealloc;
- (void)configValue:(float)arg1 withCompletion:(id /* block */)arg2;
- (void)needHiddenVolumeSlider:(BOOL)arg1;
- (BOOL)addVolumeViewToSystem:(id /* block */)arg1;
- (id)volumeView;
- (void)setVolumeView:(id)arg1;
- (BOOL)needHidden;
- (void)setNeedHidden:(BOOL)arg1;
- (void).cxx_destruct;
@end

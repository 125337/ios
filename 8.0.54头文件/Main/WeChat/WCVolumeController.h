@interface WCVolumeController : NSObject
{
    WCVolumeView * _volumeView; // +0x8
}
+ (void)VoIP_queryValueWithCompletion:(id /* block */)arg1;
+ (void)VoIP_executeInAudioSessionQueue:(id /* block */)arg1;
+ (void)queryValueWithCompletion:(id /* block */)arg1 inQueue:(id)arg2;
+ (void)queryValueWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)dealloc;
- (void)configValue:(float)arg1 withCompletion:(id /* block */)arg2;
- (id)volumeView;
- (void)setVolumeView:(id)arg1;
- (void).cxx_destruct;
@end


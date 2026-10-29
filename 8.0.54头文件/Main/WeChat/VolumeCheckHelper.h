@interface VolumeCheckHelper : MMObject
{
    BOOL m_bHasShowVolumeTip; // +0x8
    WeToast * _toast; // +0x10
}
+ (id)getVolumeCheckHelper;
+ (void)freeVolumeCheckHelper;
- (id)init;
- (void)dealloc;
- (void)checkVolume;
- (void)stopShowVolumeTip;
- (void)showVolumeTip;
- (void)volumeChanged:(id)arg1;
- (id)toast;
- (void)setToast:(id)arg1;
- (void).cxx_destruct;
@end


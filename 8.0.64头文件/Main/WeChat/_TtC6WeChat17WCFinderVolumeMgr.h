@interface _TtC6WeChat17WCFinderVolumeMgr : NSObject
{
     contentVM; // +0x8
     playerView; // +0x10
     muteEntryVC; // +0x18
     shouldMute; // +0x20
     debugFloatView; // +0x28
     hiddenVolumeView; // +0x30
     addTimesPerSec; // +0x38
     addPerSecTotal; // +0x40
     enableAutoSwitch; // +0x48
     enableAutoSwitch_v; // +0x50
     enableReport; // +0x59
     $__lazy_storage_$_finderShareFeedSupportMutePlay; // +0x5a
     targetVolume; // +0x60
     playerCurrentVolume; // +0x68
     playerAdditionVolume; // +0x70
     playerDecreaseVolume; // +0x78
     isAutoIncreaseAvalible; // +0x80
     autoIncreaseVolumetimer; // +0x88
}
+ (id)shared;
- (BOOL)mutePlayEnable;
- (void)configMute:(BOOL)arg1;
- (void)configMuteVC:(id)arg1;
- (void)didEnterBackGround;
- (void)volumeChangedAfterIOS15WithNotification:(id)arg1;
- (void)volumeChangedBeforeIOS15WithNotification:(id)arg1;
- (void)autoIncreaseVolumetimerFired;
- (id)init;
- (void)enableAutoVolumeCheck;
- (void)immediatelyFinishAutoVolumeCheck;
- (void)attachAutoVolumeCheck:(id)arg1 contentVM:(id)arg2;
- (void)enableReport:(BOOL)arg1;
- (BOOL)needMute;
- (void).cxx_destruct;
@end

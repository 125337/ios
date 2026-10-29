@interface MJCamSetupTemplateParams : NSObject
{
    unsigned long long _cameraPosition; // +0x8
    long long _ostSoundOn; // +0x10
    NSMutableArray * _musicIds; // +0x18
    id <WCMJCameraMusicPlayableData> _musicData; // +0x20
}
- (id)init;
- (BOOL)isOstSoundNotSet;
- (id)musicIds;
- (unsigned long long)cameraPosition;
- (void)setCameraPosition:(unsigned long long)arg1;
- (long long)ostSoundOn;
- (void)setOstSoundOn:(long long)arg1;
- (void)setMusicIds:(id)arg1;
- (id)musicData;
- (void)setMusicData:(id)arg1;
- (void).cxx_destruct;
@end

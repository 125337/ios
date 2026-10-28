@interface MJShootComposingConfiguration : NSObject
{
    BOOL _shouldEnableCamera; // +0x8
    BOOL _shouldEnableRecording; // +0x9
    unsigned long long _bizScene; // +0x10
}
- (id)initWithBizScene:(unsigned long long)arg1 shouldEnableCamera:(BOOL)arg2 shouldEnableRecording:(BOOL)arg3;
- (id)description;
- (unsigned long long)bizScene;
- (BOOL)shouldEnableCamera;
- (BOOL)shouldEnableRecording;
@end

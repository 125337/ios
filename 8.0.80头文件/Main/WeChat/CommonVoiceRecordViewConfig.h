@interface CommonVoiceRecordViewConfig : NSObject
{
    long long _cgiScene; // +0x8
    long long _voiceFormat; // +0x10
}
- (id)init;
- (long long)cgiScene;
- (void)setCgiScene:(long long)arg1;
- (long long)voiceFormat;
- (void)setVoiceFormat:(long long)arg1;
@end

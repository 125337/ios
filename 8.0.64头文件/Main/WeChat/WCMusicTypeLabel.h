@interface WCMusicTypeLabel : MMUILabel
{
    int _audioType; // +0x8
}
- (void)updateWithType:(int)arg1;
- (void)setAudioType:(int)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (int)audioType;
@end

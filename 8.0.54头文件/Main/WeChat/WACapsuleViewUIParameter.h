@interface WACapsuleViewUIParameter : NSObject
{
    BOOL _needToPutBackIfInterrupted; // +0x8
    NSString * _iconUrl; // +0x10
    NSString * _darkModeIconUrl; // +0x18
    NSString * _text; // +0x20
    double _duration; // +0x28
    unsigned long long _state; // +0x30
}
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)darkModeIconUrl;
- (void)setDarkModeIconUrl:(id)arg1;
- (id)text;
- (void)setText:(id)arg1;
- (double)duration;
- (void)setDuration:(double)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (BOOL)needToPutBackIfInterrupted;
- (void)setNeedToPutBackIfInterrupted:(BOOL)arg1;
- (void).cxx_destruct;
@end


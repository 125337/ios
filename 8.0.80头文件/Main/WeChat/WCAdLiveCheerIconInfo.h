@interface WCAdLiveCheerIconInfo : NSObject <NSCoding>
{
    int _sampleRate; // +0x8
    NSString * _iconUrl; // +0x10
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (int)sampleRate;
- (void)setSampleRate:(int)arg1;
- (void).cxx_destruct;
@end

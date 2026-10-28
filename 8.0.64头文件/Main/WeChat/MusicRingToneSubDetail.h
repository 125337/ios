@interface MusicRingToneSubDetail : AbstractRingToneSubDetail
{
    unsigned int _sid; // +0x30
    NSString * _cover; // +0x38
    NSString * _url; // +0x40
    unsigned long long _duration; // +0x48
    unsigned long long _sourceType; // +0x50
}
- (id)initFromPb:(id)arg1;
- (unsigned int)sid;
- (void)setSid:(unsigned int)arg1;
- (id)cover;
- (void)setCover:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (unsigned long long)duration;
- (void)setDuration:(unsigned long long)arg1;
- (unsigned long long)sourceType;
- (void)setSourceType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

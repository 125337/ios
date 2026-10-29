@interface WCPlayerHttpMediaDownloadInfo : NSObject
{
    BOOL _bTaskStart; // +0x8
    unsigned int _count; // +0xc
    float _duration; // +0x10
    long long _createTime; // +0x18
    unsigned long long _moovoffset; // +0x20
    unsigned long long _moovlength; // +0x28
    NSString * _nsIdentifier; // +0x30
    WCPlayerHttpMediaWrap * _mediaWrap; // +0x38
}
- (id)initWithMediaWrap:(id)arg1;
- (BOOL)isSameMediaWrap:(id)arg1;
- (id)description;
- (unsigned int)count;
- (void)setCount:(unsigned int)arg1;
- (BOOL)bTaskStart;
- (void)setBTaskStart:(BOOL)arg1;
- (long long)createTime;
- (void)setCreateTime:(long long)arg1;
- (unsigned long long)moovoffset;
- (void)setMoovoffset:(unsigned long long)arg1;
- (unsigned long long)moovlength;
- (void)setMoovlength:(unsigned long long)arg1;
- (float)duration;
- (void)setDuration:(float)arg1;
- (id)nsIdentifier;
- (void)setNsIdentifier:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (void).cxx_destruct;
@end


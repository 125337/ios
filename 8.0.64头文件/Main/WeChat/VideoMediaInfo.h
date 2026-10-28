@interface VideoMediaInfo : NSObject
{
    unsigned int _duration; // +0x8
    unsigned int _timescale; // +0xc
    unsigned int _trakduration; // +0x10
    unsigned int _traktimescale; // +0x14
    unsigned int _rate; // +0x18
    unsigned int _flages; // +0x1c
    unsigned int _version; // +0x20
    unsigned int _createTime; // +0x24
    unsigned int _modifiyTime; // +0x28
    NSString * _vcodec; // +0x30
    NSString * _acodec; // +0x38
}
- (id)description;
- (unsigned int)duration;
- (void)setDuration:(unsigned int)arg1;
- (unsigned int)timescale;
- (void)setTimescale:(unsigned int)arg1;
- (unsigned int)trakduration;
- (void)setTrakduration:(unsigned int)arg1;
- (unsigned int)traktimescale;
- (void)setTraktimescale:(unsigned int)arg1;
- (unsigned int)rate;
- (void)setRate:(unsigned int)arg1;
- (unsigned int)flages;
- (void)setFlages:(unsigned int)arg1;
- (unsigned int)version;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)modifiyTime;
- (void)setModifiyTime:(unsigned int)arg1;
- (id)vcodec;
- (void)setVcodec:(id)arg1;
- (id)acodec;
- (void)setAcodec:(id)arg1;
- (void).cxx_destruct;
@end

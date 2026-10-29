@interface TPHlsTag : NSObject
{
    float _framerate; // +0x8
    NSString * _name; // +0x10
    NSString * _language; // +0x18
    long long _bandwidth; // +0x20
    NSString * _resolution; // +0x28
    NSString * _codecs; // +0x30
    NSString * _groupId; // +0x38
}
- (id)init;
- (id)name;
- (void)setName:(id)arg1;
- (id)language;
- (void)setLanguage:(id)arg1;
- (long long)bandwidth;
- (void)setBandwidth:(long long)arg1;
- (id)resolution;
- (void)setResolution:(id)arg1;
- (float)framerate;
- (void)setFramerate:(float)arg1;
- (id)codecs;
- (void)setCodecs:(id)arg1;
- (id)groupId;
- (void)setGroupId:(id)arg1;
- (void).cxx_destruct;
@end


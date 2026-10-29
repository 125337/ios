@interface TPProgramInfo : NSObject
{
    BOOL _actived; // +0x8
    long long _programId; // +0x10
    long long _bandwidth; // +0x18
    NSString * _resolution; // +0x20
    NSString * _url; // +0x28
}
+ (id)programWithProgramId:(long long)arg1 bandwidth:(long long)arg2 resolution:(id)arg3 url:(id)arg4 actived:(BOOL)arg5;
- (BOOL)actived;
- (void)setActived:(BOOL)arg1;
- (long long)programId;
- (void)setProgramId:(long long)arg1;
- (long long)bandwidth;
- (void)setBandwidth:(long long)arg1;
- (id)resolution;
- (void)setResolution:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end


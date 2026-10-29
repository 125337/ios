@interface TPVCodecCapabilityForSet : NSObject
{
    long long _upperboundWidth; // +0x8
    long long _upperboundHeight; // +0x10
    long long _lowerboundWidth; // +0x18
    long long _lowerboundHeight; // +0x20
    long long _profile; // +0x28
    long long _level; // +0x30
}
- (id)initWithUpperBoundWidth:(long long)arg1 upperboundHeight:(long long)arg2 lowerboundWidth:(long long)arg3 lowerboundHeight:(long long)arg4 profile:(long long)arg5 level:(long long)arg6;
- (long long)upperboundWidth;
- (void)setUpperboundWidth:(long long)arg1;
- (long long)upperboundHeight;
- (void)setUpperboundHeight:(long long)arg1;
- (long long)lowerboundWidth;
- (void)setLowerboundWidth:(long long)arg1;
- (long long)lowerboundHeight;
- (void)setLowerboundHeight:(long long)arg1;
- (long long)profile;
- (void)setProfile:(long long)arg1;
- (long long)level;
- (void)setLevel:(long long)arg1;
@end


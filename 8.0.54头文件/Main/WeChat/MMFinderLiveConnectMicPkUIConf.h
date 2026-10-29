@interface MMFinderLiveConnectMicPkUIConf : NSObject <NSCopying>
{
    unsigned long long _leftPkProgressGradientColorType; // +0x8
    unsigned long long _rightPkProgressGradientColorType; // +0x10
    NSMutableArray * _teamUIs; // +0x18
}
- (id)copyWithZone:(_NSZone *)arg1;
- (unsigned long long)leftPkProgressGradientColorType;
- (void)setLeftPkProgressGradientColorType:(unsigned long long)arg1;
- (unsigned long long)rightPkProgressGradientColorType;
- (void)setRightPkProgressGradientColorType:(unsigned long long)arg1;
- (id)teamUIs;
- (void)setTeamUIs:(id)arg1;
- (void).cxx_destruct;
@end


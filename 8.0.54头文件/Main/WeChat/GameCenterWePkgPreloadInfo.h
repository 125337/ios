@interface GameCenterWePkgPreloadInfo : NSObject
{
    unsigned int _alwaysDisplayAfterTime; // +0x8
    NSString * _pkgId; // +0x10
    long long _displayTypeWithWePkg; // +0x18
}
- (id)pkgId;
- (void)setPkgId:(id)arg1;
- (long long)displayTypeWithWePkg;
- (void)setDisplayTypeWithWePkg:(long long)arg1;
- (unsigned int)alwaysDisplayAfterTime;
- (void)setAlwaysDisplayAfterTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end


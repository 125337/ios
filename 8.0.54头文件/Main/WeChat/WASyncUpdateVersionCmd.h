@interface WASyncUpdateVersionCmd : WASyncBaseCmd
{
    unsigned int _lastVersion; // +0x40
    unsigned int _launchFallbackDirectlyMinVersion; // +0x44
}
- (id)description;
- (unsigned int)lastVersion;
- (void)setLastVersion:(unsigned int)arg1;
- (unsigned int)launchFallbackDirectlyMinVersion;
- (void)setLaunchFallbackDirectlyMinVersion:(unsigned int)arg1;
@end


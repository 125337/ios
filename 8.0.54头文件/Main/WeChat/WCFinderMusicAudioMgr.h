@interface WCFinderMusicAudioMgr : MMUserService <MMServiceProtocol>
{
    NSMutableSet * _pages; // +0x8
}
- (void)onServiceInit;
- (void)pushMonitorStack:(id)arg1;
- (id)pageNameForVC:(id)arg1;
- (void)popMonitorStack:(id)arg1;
- (id)pages;
- (void)setPages:(id)arg1;
- (void).cxx_destruct;
@end


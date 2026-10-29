@interface WAAppMgr : MMUserService <PBMessageObserverDelegate, IMMLanguageMgrExt, MMServiceProtocol>
{
    unsigned int _lastUpdate; // +0x8
}
- (id)init;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onLanguageChange;
- (void)updateSearchPlaceHolder;
- (unsigned int)lastUpdate;
- (void)setLastUpdate:(unsigned int)arg1;
@end


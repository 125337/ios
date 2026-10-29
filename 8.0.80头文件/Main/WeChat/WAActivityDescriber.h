@interface WAActivityDescriber : NSObject
{
    unsigned int _allTaskCount; // +0x8
    unsigned int _weappCount; // +0xc
    unsigned int _gameCount; // +0x10
    unsigned int _foregroundCount; // +0x14
    unsigned int _backgroundCount; // +0x18
    unsigned int _suspendCount; // +0x1c
    NSMutableArray * _weappAppidList; // +0x20
    NSMutableArray * _gameAppidList; // +0x28
}
- (id)description;
- (unsigned int)allTaskCount;
- (void)setAllTaskCount:(unsigned int)arg1;
- (unsigned int)weappCount;
- (void)setWeappCount:(unsigned int)arg1;
- (id)weappAppidList;
- (void)setWeappAppidList:(id)arg1;
- (unsigned int)gameCount;
- (void)setGameCount:(unsigned int)arg1;
- (id)gameAppidList;
- (void)setGameAppidList:(id)arg1;
- (unsigned int)foregroundCount;
- (void)setForegroundCount:(unsigned int)arg1;
- (unsigned int)backgroundCount;
- (void)setBackgroundCount:(unsigned int)arg1;
- (unsigned int)suspendCount;
- (void)setSuspendCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end

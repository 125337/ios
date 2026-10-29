@interface WASyncIssueLaunchCmd : WASyncBaseCmd
{
    unsigned int _useBeginTime; // +0x40
    unsigned int _useEndTime; // +0x44
    NSString * _launchInfoString; // +0x48
    NSMutableArray * _sceneList; // +0x50
}
- (id)description;
- (id)launchInfoString;
- (void)setLaunchInfoString:(id)arg1;
- (id)sceneList;
- (void)setSceneList:(id)arg1;
- (unsigned int)useBeginTime;
- (void)setUseBeginTime:(unsigned int)arg1;
- (unsigned int)useEndTime;
- (void)setUseEndTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end


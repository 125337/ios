@interface WAReportKFSessionOpItem : WAReportBaseItem
{
    unsigned int _actionTime; // +0x8
    unsigned long long _enterScene; // +0x10
    NSString * _sceneID; // +0x18
    unsigned long long _action; // +0x20
}
- (id)reportString;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (id)sceneID;
- (void)setSceneID:(id)arg1;
- (unsigned long long)action;
- (void)setAction:(unsigned long long)arg1;
- (unsigned int)actionTime;
- (void)setActionTime:(unsigned int)arg1;
- (void).cxx_destruct;
@end

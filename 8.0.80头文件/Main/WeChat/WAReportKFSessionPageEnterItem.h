@interface WAReportKFSessionPageEnterItem : WAReportBaseItem
{
    int _unreadcount; // +0x8
    unsigned int _entryTime; // +0xc
    unsigned long long _enterScene; // +0x10
    NSString * _sceneID; // +0x18
    unsigned long long _extendedEnterScene; // +0x20
    NSString * _extendedEnterSceneNote; // +0x28
    NSString * _fromAppId; // +0x30
}
- (id)reportString;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (int)unreadcount;
- (void)setUnreadcount:(int)arg1;
- (id)sceneID;
- (void)setSceneID:(id)arg1;
- (unsigned int)entryTime;
- (void)setEntryTime:(unsigned int)arg1;
- (unsigned long long)extendedEnterScene;
- (void)setExtendedEnterScene:(unsigned long long)arg1;
- (id)extendedEnterSceneNote;
- (void)setExtendedEnterSceneNote:(id)arg1;
- (id)fromAppId;
- (void)setFromAppId:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCGetCameraTemplateListParams : NSObject
{
    NSString * _fromTmplId; // +0x8
    unsigned long long _fromEventId; // +0x10
    NSString * _musicId; // +0x18
    unsigned long long _tabId; // +0x20
    unsigned long long _enterScene; // +0x28
}
- (id)fromTmplId;
- (void)setFromTmplId:(id)arg1;
- (unsigned long long)fromEventId;
- (void)setFromEventId:(unsigned long long)arg1;
- (id)musicId;
- (void)setMusicId:(id)arg1;
- (unsigned long long)tabId;
- (void)setTabId:(unsigned long long)arg1;
- (unsigned long long)enterScene;
- (void)setEnterScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


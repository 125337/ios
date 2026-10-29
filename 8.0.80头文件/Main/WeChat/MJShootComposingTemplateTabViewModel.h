@interface MJShootComposingTemplateTabViewModel : NSObject
{
    unsigned int _tabType; // +0x8
    unsigned long long _camEffectBizScene; // +0x10
    unsigned long long _templateScene; // +0x18
    NSString * _tabName; // +0x20
    MJPublisherEffectReporter * _editingEffectReporter; // +0x28
    unsigned long long _tabID; // +0x30
    NSString * _username; // +0x38
    NSString * _selectedTemplateID; // +0x40
    WCGetCameraTemplateListParams * _optionalParams; // +0x48
}
- (id)initWithCamEffectBizScene:(unsigned long long)arg1;
- (unsigned long long)camEffectBizScene;
- (unsigned long long)templateScene;
- (void)setTemplateScene:(unsigned long long)arg1;
- (id)tabName;
- (void)setTabName:(id)arg1;
- (id)editingEffectReporter;
- (void)setEditingEffectReporter:(id)arg1;
- (unsigned long long)tabID;
- (void)setTabID:(unsigned long long)arg1;
- (unsigned int)tabType;
- (void)setTabType:(unsigned int)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (id)selectedTemplateID;
- (void)setSelectedTemplateID:(id)arg1;
- (id)optionalParams;
- (void)setOptionalParams:(id)arg1;
- (void).cxx_destruct;
@end

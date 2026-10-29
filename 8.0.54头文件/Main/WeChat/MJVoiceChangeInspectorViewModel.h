@interface MJVoiceChangeInspectorViewModel : MJSegmentInspectorViewModel <MJSpeechTextInspectorViewModelProtocol>
{
    BOOL _isVoiceCloneEnabledByConfig; // +0x8
    id /* block */ updateSelectionHandler; // +0x10
    id /* block */ applyAllWillBeginHandler; // +0x18
    id /* block */ applyAllDidFinishHandler; // +0x20
    id /* block */ beginVoiceCloneHandler; // +0x28
    id /* block */ deleteVoiceCloneRoleHandler; // +0x30
    MJNarrationSegmentViewModel * _segmentVM; // +0x38
    NSArray * _itemGroups; // +0x40
    unsigned long long _narrationType; // +0x48
    MJSpeechManager * _speechManager; // +0x50
    NSString * _originRoleID; // +0x58
}
- (id)initWithSegmentVM:(id)arg1 type:(unsigned long long)arg2 narrationType:(unsigned long long)arg3 speechManager:(id)arg4;
- (void)dealloc;
- (id)title;
- (id)subTitle;
- (id)selectedRoleID;
- (BOOL)isCancelEnabled;
- (BOOL)isApplyAllSwitchEnabled;
- (void)notifyDidFinish;
- (void)bindSignals;
- (void)speechRequestStatusDidUpdateWithAudioID:(id)arg1 roleID:(id)arg2 status:(unsigned long long)arg3;
- (void)loadItemsWithCompletion:(id /* block */)arg1;
- (id)itemsWithMaterialCategories:(id)arg1;
- (id)defaultItems;
- (id)defaultVoiceChangeItems;
- (void)_loadItemsInNarrationSpeakWithCompletion:(id /* block */)arg1;
- (id)_itemsInNarrationSpeakWithMaterialCategories:(id)arg1;
- (id)_defaultItemsInNarrationSpeak;
- (id)_defaultVoiceChangeItemsInNarrationSpeak;
- (void)_loadItemsInNarrationTextInputWithCompletion:(id /* block */)arg1;
- (id)_itemsInNarrationTextInputWithMaterialCategories:(id)arg1;
- (id)_defaultItemsInNarrationTextInput;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)indexPathForItemWithRoleID:(id)arg1;
- (id)itemWithRoleID:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)handleSelectItemAtIndexPath:(id)arg1 autoPlay:(BOOL)arg2 forceRequest:(BOOL)arg3;
- (id /* block */)updateSelectionHandler;
- (void)setUpdateSelectionHandler:(id /* block */)arg1;
- (id /* block */)applyAllWillBeginHandler;
- (void)setApplyAllWillBeginHandler:(id /* block */)arg1;
- (id /* block */)applyAllDidFinishHandler;
- (void)setApplyAllDidFinishHandler:(id /* block */)arg1;
- (id /* block */)beginVoiceCloneHandler;
- (void)setBeginVoiceCloneHandler:(id /* block */)arg1;
- (id /* block */)deleteVoiceCloneRoleHandler;
- (void)setDeleteVoiceCloneRoleHandler:(id /* block */)arg1;
- (id)segmentVM;
- (void)setSegmentVM:(id)arg1;
- (id)itemGroups;
- (void)setItemGroups:(id)arg1;
- (unsigned long long)narrationType;
- (id)speechManager;
- (void)setSpeechManager:(id)arg1;
- (id)originRoleID;
- (void)setOriginRoleID:(id)arg1;
- (BOOL)isVoiceCloneEnabledByConfig;
- (void)setIsVoiceCloneEnabledByConfig:(BOOL)arg1;
- (void).cxx_destruct;
@end


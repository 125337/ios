@interface MJTTSInspectorViewModel : MJSegmentInspectorViewModel <MJSpeechTextInspectorViewModelProtocol>
{
    BOOL _shouldApplyToAll; // +0x8
    id /* block */ updateSelectionHandler; // +0x10
    id /* block */ applyAllWillBeginHandler; // +0x18
    id /* block */ applyAllDidFinishHandler; // +0x20
    id /* block */ beginVoiceCloneHandler; // +0x28
    id /* block */ deleteVoiceCloneRoleHandler; // +0x30
    NSArray * _items; // +0x38
    NSString * _originRoleID; // +0x40
    NSString * _originalRoleName; // +0x48
    NSString * _originalAudioFilePath; // +0x50
    NSArray * _ttsRequestItems; // +0x58
    MJSpeechManager * _speechManager; // +0x60
    NSString * _selectedRoleID; // +0x68
    MJSegmentViewModel * _segmentVM; // +0x70
}
- (id)initWithSegmentVM:(id)arg1 type:(unsigned long long)arg2 speechManager:(id)arg3;
- (void)dealloc;
- (id)title;
- (BOOL)isNoneSpeechRoleID:(id)arg1;
- (BOOL)isNewCloneSpeechRoleID:(id)arg1;
- (id)segmentID;
- (id)selectedRoleID;
- (id)roleID;
- (id)roleName;
- (id)ttsSegment;
- (BOOL)isCancelEnabled;
- (BOOL)isApplyAllSwitchEnabled;
- (void)notifyDidCancel;
- (void)notifyDidFinish;
- (void)bindSignals;
- (void)speechRequestStatusDidUpdateWithRoleID:(id)arg1 status:(unsigned long long)arg2;
- (void)loadItemsWithCompletion:(id /* block */)arg1;
- (id)itemsWithMaterialCategories:(id)arg1;
- (id)defaultItems;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)indexPathForItemWithRoleID:(id)arg1;
- (id)itemWithRoleID:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (void)handleSelectItemAtIndexPath:(id)arg1 autoPlay:(BOOL)arg2 forceRequest:(BOOL)arg3;
- (void)requestTTSWithRoleID:(id)arg1 roleName:(id)arg2 takeSnapshot:(BOOL)arg3 autoPlay:(BOOL)arg4 completion:(id /* block */)arg5;
- (void)resetVoiceToNoneWithTakeSnapshot:(BOOL)arg1 autoPlay:(BOOL)arg2;
- (void)resetVoiceToOriginalWithTakeSnapshot:(BOOL)arg1 autoPlay:(BOOL)arg2;
- (void)cancelCurrentTTSRequestIfNeeded;
- (void)cancelTTSRequestsIfNeeded:(id)arg1;
- (void)_updateRoleID:(id)arg1 roleName:(id)arg2;
- (BOOL)_replaceVoiceWithRoleID:(id)arg1 roleName:(id)arg2 audioFilePath:(id)arg3 takeSnapshot:(BOOL)arg4 autoPlay:(BOOL)arg5;
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
- (id)items;
- (void)setItems:(id)arg1;
- (id)originRoleID;
- (void)setOriginRoleID:(id)arg1;
- (id)originalRoleName;
- (void)setOriginalRoleName:(id)arg1;
- (id)originalAudioFilePath;
- (void)setOriginalAudioFilePath:(id)arg1;
- (BOOL)shouldApplyToAll;
- (void)setShouldApplyToAll:(BOOL)arg1;
- (id)ttsRequestItems;
- (void)setTtsRequestItems:(id)arg1;
- (id)speechManager;
- (void)setSpeechManager:(id)arg1;
- (void)setSelectedRoleID:(id)arg1;
- (id)segmentVM;
- (void)setSegmentVM:(id)arg1;
- (void).cxx_destruct;
@end

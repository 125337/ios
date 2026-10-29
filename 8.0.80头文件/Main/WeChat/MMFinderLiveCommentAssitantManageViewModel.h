@interface MMFinderLiveCommentAssitantManageViewModel : NSObject <MultiSelectContactsViewControllerDelegate, RoomContactSelectDelegate>
{
    UINavigationController * _navigationController; // +0x8
    MMFinderLiveCommentAssitantManageView * _manageView; // +0x10
    unsigned long long _maxAssistantAllowed; // +0x18
    id /* block */ _onRequirePortrait; // +0x20
    NSArray * _assistants; // +0x28
    RoomContactSelectViewController * _delVC; // +0x30
    WCColorProxy * _colorProxy; // +0x38
    NSMutableArray * _assistantsToRemove; // +0x40
    MMFinderLiveTaskId * _taskId; // +0x48
    NSMutableDictionary * _sourceTypeMap; // +0x50
    NSMutableDictionary * _liveContactMap; // +0x58
    MMUINavigationController * _presentedNavigationVC; // +0x60
}
- (id)initWithTaskId:(id)arg1;
- (id)currentAssistants;
- (void)tryOpenAssistantRemove;
- (void)tryOpenAssistantSelect;
- (void)showUserProfileWithContact:(id)arg1;
- (id)finderLiveContactFromContact:(id)arg1;
- (void)_doShowProfileWithContact:(id)arg1;
- (void)openStreamProfile:(id)arg1;
- (void)gotoChatViewVCWithContact:(id)arg1 liveContactExtInfo:(id)arg2;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onCancelSelectContact;
- (void)didSelectContact:(id)arg1;
- (void)onViewContact:(id)arg1;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)updateRightBtn;
- (void)confirmRemove;
- (id)getCurrentNavigationController;
- (void)requirePortraitThen:(id /* block */)arg1;
- (void)getAssistantsFromServer;
- (void)doAddAssistants:(id)arg1;
- (void)doRemoveAssistants:(id)arg1;
- (id)liveTask;
- (id)navigationController;
- (void)setNavigationController:(id)arg1;
- (id)manageView;
- (void)setManageView:(id)arg1;
- (unsigned long long)maxAssistantAllowed;
- (void)setMaxAssistantAllowed:(unsigned long long)arg1;
- (id /* block */)onRequirePortrait;
- (void)setOnRequirePortrait:(id /* block */)arg1;
- (id)assistants;
- (void)setAssistants:(id)arg1;
- (id)delVC;
- (void)setDelVC:(id)arg1;
- (id)colorProxy;
- (void)setColorProxy:(id)arg1;
- (id)assistantsToRemove;
- (void)setAssistantsToRemove:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)sourceTypeMap;
- (void)setSourceTypeMap:(id)arg1;
- (id)liveContactMap;
- (void)setLiveContactMap:(id)arg1;
- (id)presentedNavigationVC;
- (void)setPresentedNavigationVC:(id)arg1;
- (void).cxx_destruct;
@end

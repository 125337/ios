@interface WCFinderFeedVisibilityViewController : WCFinderPrivacyViewController <WCFinderPrivacyViewControllerDelegate>
{
    unsigned long long _editableOptions; // +0x70
    id /* block */ _onConfirm; // +0x78
    WCFinderFeedVisibility * _initialVisibility; // +0x80
    NSArray * _selectedUsernames; // +0x88
    NSArray * _selectedTagIDs; // +0x90
}
- (id)initWithVisibility:(id)arg1 editableOptions:(unsigned long long)arg2 onConfirm:(id /* block */)arg3;
- (id)resolvedTagNames;
- (BOOL)hasUnresolvedContacts;
- (BOOL)hasUnresolvedTags;
- (void)reloadTableView;
- (BOOL)hasSelectedContactsOrTags;
- (BOOL)scopeHasChanged;
- (void)openAddFromFriend;
- (void)openAddFromTag;
- (void)updateWithSelectedContactSet:(id)arg1;
- (void)updateWithSelectedContactTags:(id)arg1;
- (void)updateWithAllContactsSelected:(BOOL)arg1;
- (void)updateWithSaveAsTag:(id)arg1;
- (void)confirmReplacingSelectionWithMessage:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)privacyViewController:(id)arg1 canSelectPrivacySetting:(long long)arg2;
- (void)privacyViewController:(id)arg1 didSelectPrivacy:(long long)arg2 Contacts:(id)arg3 contactTags:(id)arg4 isAllContactsSelected:(BOOL)arg5;
- (void)privacyViewControllerDidClickCancel:(id)arg1;
- (BOOL)privacyViewController:(id)arg1 multiSelectContactReturn:(id)arg2 finished:(BOOL)arg3;
- (unsigned long long)editableOptions;
- (void)setEditableOptions:(unsigned long long)arg1;
- (id /* block */)onConfirm;
- (void)setOnConfirm:(id /* block */)arg1;
- (id)initialVisibility;
- (void)setInitialVisibility:(id)arg1;
- (id)selectedUsernames;
- (void)setSelectedUsernames:(id)arg1;
- (id)selectedTagIDs;
- (void)setSelectedTagIDs:(id)arg1;
- (void).cxx_destruct;
@end

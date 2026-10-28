@interface NewContactTagViewController : ContactTagViewController <NewContactTagTableViewDelegate>
{
    unsigned int m_curEventID; // +0xd0
    unsigned int _fromSourceScene; // +0xd4
    unsigned int _uiContactEnterScene; // +0xd8
    NSString * _reportSessionId; // +0xe0
    id <NewContactTagViewControllerDelegate> _m_delegate; // +0xe8
    NSSet * _originalAllTags; // +0xf0
    NSMutableSet * _editViewNewlyCreatedTags; // +0xf8
    NSMutableSet * _editViewAddedTags; // +0x100
    NSMutableSet * _tableViewNewlyCreatedTags; // +0x108
    NSMutableSet * _tableViewAddedTags; // +0x110
}
- (void)setupReportData;
- (void)reportClickCreateTagButton;
- (void)reportClickSearchInput;
- (void)reportClickTagItemWithIsSelected:(BOOL)arg1;
- (id)getReportPageParams;
- (void)initView;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)genFavTagEditView;
- (id)genFavTagTableView;
- (void)onTextFieldMoved:(id)arg1;
- (void)onEditTags;
- (BOOL)onTextFieldShouldBeginEditing:(id)arg1;
- (void)onAddButtonFromTagTableView:(id)arg1;
- (void)onDeleteButtonFromTagTableView:(id)arg1;
- (void)onAddButtonFromTagEditView:(id)arg1;
- (void)onDeleteButtonFromTagEditView:(id)arg1;
- (void)onDidClickCreateTagButton;
- (BOOL)isNewlyCreatedTag:(id)arg1;
- (void)didSelectedOrCancelTagButtonWithTagId:(unsigned int)arg1 tagName:(id)arg2 isSelected:(BOOL)arg3 tagTableView:(id)arg4;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (unsigned int)fromSourceScene;
- (void)setFromSourceScene:(unsigned int)arg1;
- (unsigned int)uiContactEnterScene;
- (void)setUiContactEnterScene:(unsigned int)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)originalAllTags;
- (void)setOriginalAllTags:(id)arg1;
- (id)editViewNewlyCreatedTags;
- (void)setEditViewNewlyCreatedTags:(id)arg1;
- (id)editViewAddedTags;
- (void)setEditViewAddedTags:(id)arg1;
- (id)tableViewNewlyCreatedTags;
- (void)setTableViewNewlyCreatedTags:(id)arg1;
- (id)tableViewAddedTags;
- (void)setTableViewAddedTags:(id)arg1;
- (void).cxx_destruct;
@end

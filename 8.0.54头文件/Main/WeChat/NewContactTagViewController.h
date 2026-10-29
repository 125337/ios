@interface NewContactTagViewController : ContactTagViewController <NewContactTagTableViewDelegate>
{
    unsigned int m_curEventID; // +0xc8
    id <NewContactTagViewControllerDelegate> _m_delegate; // +0xd0
    NSSet * _originalAllTags; // +0xd8
    NSMutableSet * _editViewNewlyCreatedTags; // +0xe0
    NSMutableSet * _editViewAddedTags; // +0xe8
    NSMutableSet * _tableViewNewlyCreatedTags; // +0xf0
    NSMutableSet * _tableViewAddedTags; // +0xf8
}
- (void)initView;
- (void)viewDidLoad;
- (id)genFavTagEditView;
- (id)genFavTagTableView;
- (void)onTextFieldMoved:(id)arg1;
- (void)onEditTags;
- (void)onAddButtonFromTagTableView:(id)arg1;
- (void)onDeleteButtonFromTagTableView:(id)arg1;
- (void)onAddButtonFromTagEditView:(id)arg1;
- (void)onDeleteButtonFromTagEditView:(id)arg1;
- (BOOL)isNewlyCreatedTag:(id)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
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


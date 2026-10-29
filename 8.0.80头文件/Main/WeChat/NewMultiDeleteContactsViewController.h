@interface NewMultiDeleteContactsViewController : MultiDeleteContactsViewController
{
    BOOL _deleteAllMessagesForCurrentBatch; // +0x70
}
- (void)onDeleteButtonTapped;
- (id)selectedContactsInDisplayOrder;
- (void)deleteContacts:(id)arg1 deleteAllMessages:(BOOL)arg2;
- (void)reconcileDeletedContacts:(id)arg1;
- (void)OnContactBatchModify:(id)arg1 withRet:(unsigned int)arg2 errorMsg:(id)arg3 isNetWorkError:(BOOL)arg4;
- (BOOL)deleteAllMessagesForCurrentBatch;
- (void)setDeleteAllMessagesForCurrentBatch:(BOOL)arg1;
@end

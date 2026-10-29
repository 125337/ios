@interface FavoritesOnTopOnAuthSync : MMUserService <MMKernelExt, MMServiceProtocol>
{
    BOOL _fOnSync; // +0x8
    BOOL _fWaitingOnSyncAllCallback; // +0x9
    unsigned int _topNoteOnFavor; // +0xc
    int _favIdForSyncAll; // +0x10
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (BOOL)isOnSync;
- (void)doneSync;
- (BOOL)isWaitingOnSyncAllCallback;
- (void)doneWatingOnSyncAllCallback;
- (void)syncLocalOnTopItemToServerDeprecated;
- (void)syncAllNotesCallback;
- (void)handleOnAuthSync:(BOOL)arg1 favId:(unsigned int)arg2;
- (void)onAuthOK;
- (BOOL)fOnSync;
- (void)setFOnSync:(BOOL)arg1;
- (unsigned int)topNoteOnFavor;
- (void)setTopNoteOnFavor:(unsigned int)arg1;
- (int)favIdForSyncAll;
- (void)setFavIdForSyncAll:(int)arg1;
- (BOOL)fWaitingOnSyncAllCallback;
- (void)setFWaitingOnSyncAllCallback:(BOOL)arg1;
@end

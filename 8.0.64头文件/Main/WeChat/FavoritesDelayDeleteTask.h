@interface FavoritesDelayDeleteTask : NSObject
{
    id _deleteObject; // +0x8
    id /* block */ _onDeleteFinish; // +0x10
    unsigned long long _showSnackBarTime; // +0x18
    MMSnackBar * _snackBar; // +0x20
}
+ (void)deleteFavoritesObject:(id)arg1;
- (void)updateDeleteObject:(id)arg1;
- (void)start;
- (void)cancel;
- (void)commit;
- (void)hideFavoritesObject:(id)arg1;
- (void)showFavoritesObject:(id)arg1;
- (id)getDeleteTipsForItemType:(int)arg1;
- (void)showSnackBarTips;
- (double)getDelayDuration;
- (void)hideSnackBar;
- (id)getFavoritesItem;
- (unsigned int)getLocalId;
- (id)getTitle;
- (id)deleteObject;
- (void)setDeleteObject:(id)arg1;
- (id /* block */)onDeleteFinish;
- (void)setOnDeleteFinish:(id /* block */)arg1;
- (unsigned long long)showSnackBarTime;
- (void)setShowSnackBarTime:(unsigned long long)arg1;
- (id)snackBar;
- (void)setSnackBar:(id)arg1;
- (void).cxx_destruct;
@end

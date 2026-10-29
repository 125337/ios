@interface FavoritesDelayDeleteTask : NSObject
{
    id _deleteObject; // +0x8
    id /* block */ _onDeleteFinish; // +0x10
    id /* block */ _onHideObject; // +0x18
    id /* block */ _onShowObject; // +0x20
    unsigned long long _showSnackBarTime; // +0x28
    MMSnackBar * _snackBar; // +0x30
}
+ (void)deleteFavoritesObject:(id)arg1;
- (void)updateDeleteObject:(id)arg1;
- (void)start;
- (void)cancel;
- (void)commit;
- (void)hideFavoritesObject:(id)arg1;
- (void)showFavoritesObject:(id)arg1;
- (id)getDeleteTipsForItemType:(id)arg1;
- (void)showSnackBarTips;
- (void)reportSnackBar:(unsigned char)arg1 item:(id)arg2;
- (double)getDelayDuration;
- (void)hideSnackBar;
- (id)getFavoritesItem;
- (unsigned int)getLocalId;
- (id)getTitle;
- (id)deleteObject;
- (void)setDeleteObject:(id)arg1;
- (id /* block */)onDeleteFinish;
- (void)setOnDeleteFinish:(id /* block */)arg1;
- (id /* block */)onHideObject;
- (void)setOnHideObject:(id /* block */)arg1;
- (id /* block */)onShowObject;
- (void)setOnShowObject:(id /* block */)arg1;
- (unsigned long long)showSnackBarTime;
- (void)setShowSnackBarTime:(unsigned long long)arg1;
- (id)snackBar;
- (void)setSnackBar:(id)arg1;
- (void).cxx_destruct;
@end

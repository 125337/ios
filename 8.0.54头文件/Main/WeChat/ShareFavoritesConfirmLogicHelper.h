@interface ShareFavoritesConfirmLogicHelper : MMObject <ShareConfirmViewDelegate>
{
    ShareConfirmView * _confirmView; // +0x8
    FavoritesItem * _favItem; // +0x10
    id <ShareFavoritesConfirmLogicHelperDelegate> _delegate; // +0x18
    NSString * _thumbImageUrl; // +0x20
    BOOL _hasBeenHidden; // +0x28
    NSDictionary * _userData; // +0x30
    NSData * _thumbData; // +0x38
    NSData * _fileData; // +0x40
}
- (id)initWithFavoritesItem:(id)arg1;
- (void)dealloc;
- (void)showConfirmView;
- (void)hideConfirmView;
- (void)rotateToCurrentOrietation;
- (void)rotateToOrientaion:(long long)arg1;
- (void)layoutSubviewToOrientation:(long long)arg1;
- (void)OnSend:(id)arg1;
- (void)handleDoFavEnd;
- (void)OnCancel:(id)arg1;
- (void)OnError:(id)arg1;
- (void)OnBackToApp:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)favItem;
- (void)setFavItem:(id)arg1;
- (id)thumbImageUrl;
- (void)setThumbImageUrl:(id)arg1;
- (id)userData;
- (void)setUserData:(id)arg1;
- (id)thumbData;
- (void)setThumbData:(id)arg1;
- (id)fileData;
- (void)setFileData:(id)arg1;
- (void).cxx_destruct;
@end


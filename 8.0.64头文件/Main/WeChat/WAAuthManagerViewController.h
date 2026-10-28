@interface WAAuthManagerViewController : ZZFLEXCollectionViewController <WAAppDetailInfoManagerExtension, MMNavBarInteractiveDelegate>
{
    BOOL _isEditMode; // +0x70
    WAContact * _contact; // +0x78
    WAAppAuthRespData * _authData; // +0x80
    NSMutableArray * _editList; // +0x88
}
- (id)initWithContact:(id)arg1 authData:(id)arg2;
- (void)loadView;
- (void)viewDidLoad;
- (void)reloadUI;
- (void)deleteUserInfo:(id)arg1;
- (void)onGetAppAuthInfo:(id)arg1 appid:(id)arg2 errorCode:(int)arg3;
- (void)onDeleteAppUseUserInfo:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (id)editedItemByDeleteList:(id)arg1;
- (id)normalTintColor;
- (BOOL)isSetNormalToBlackStyle;
- (id)contact;
- (id)authData;
- (BOOL)isEditMode;
- (void)setIsEditMode:(BOOL)arg1;
- (id)editList;
- (void)setEditList:(id)arg1;
- (void).cxx_destruct;
@end

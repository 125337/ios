@interface EditImageForwardAndEditLogicController : NSObject <EditImageInitialViewDelegate, ForwardMessageLogicDelegate, WCActionSheetDelegate, IMsgRevokeExt, IFavoritesExt, ImageEditContinueEditHandler, EditImageXiaoWeiServiceHost>
{
    EditImageIntialView * _editImageInitialView; // +0x8
    MMLoadingView * _loadingView; // +0x10
    EditImageAttr * _editImageAttr; // +0x18
    ForwardMessageLogicController * _forwardMessageLogicController; // +0x20
    FavoritesItem * _addingFavItem; // +0x28
    WCActionSheet * _actionsheet; // +0x30
    BOOL isImgSaved; // +0x38
    BOOL _directlyReturnReplaceOriginResult; // +0x39
    BOOL _isEmoticonBoardSearchEnabled; // +0x3a
    int _editImageScene; // +0x3c
    id <EditImageForwardAndEditLogicDelegate> _delegate; // +0x40
    CMessageWrap * _originalMessageWrap; // +0x48
    UIImage * _originalImage; // +0x50
    NSString * _originalImagePath; // +0x58
    UIViewController * _currentViewController; // +0x60
    FavoritesItem * _favItem; // +0x68
    UIViewController * _forwardBasedViewController; // +0x70
    unsigned long long _editImageEntrance; // +0x78
    unsigned long long _editImageCompletion; // +0x80
    NSString * _xiaoweiSessionId; // +0x88
}
- (id)initWithOriginalImage:(id)arg1 atPath:(id)arg2 withDelegate:(id)arg3 withCurrentViewController:(id)arg4;
- (void)fillEditImageReportObjOriginMediaInfo;
- (void)checkValidity;
- (void)startLogic;
- (void)reloadViews;
- (BOOL)isSaved;
- (void)setupEditImageReportObj;
- (BOOL)shouldRunXiaoWeiEditorFlow;
- (void)beginXiaoWeiEditorSessionIfNeeded;
- (void)startEditImage;
- (void)editImageActionSheetClickedButtonWithTitle:(id)arg1;
- (void)callbackSaveImageSuccess;
- (void)checkNonActionsheetOptionsAfterProcessDone;
- (void)forwardMessage:(id)arg1;
- (id)xiaoWeiCurrentViewController;
- (id)xiaoWeiEditImageInitialView;
- (BOOL)editImageInitialView:(id)arg1 shouldEnableXiaoWeiEntryForScene:(unsigned int)arg2 entrance:(unsigned int)arg3;
- (void)onClickAskXiaoWeiWithImage:(id)arg1 buttonFrame:(CGRect)arg2;
- (void)finishXiaoWeiEditorSessionWithExitType:(unsigned long long)arg1;
- (void)getDisplayImage:(id /* block */)arg1;
- (void)getOriginalImage:(id /* block */)arg1;
- (void)OnClickEditImageBackBarButton;
- (void)OnClickEditImageDoneBarButton;
- (void)reportEditConfirmActionSheetEvent:(id)arg1 buttonTitle:(id)arg2 isCancel:(BOOL)arg3;
- (id)c2CUserName;
- (unsigned int)c2CRoomSize;
- (void)processEditImage:(id /* block */)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (id)getEditImageAttr;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnAddNewFavoritesItems:(id)arg1;
- (void)showXiaoWeiMenuWithImage:(id)arg1;
- (void)goToXiaoWeiWithImage:(id)arg1 shortcutsList:(id)arg2 query:(id)arg3;
- (void)applyContinueEditAiImage:(id)arg1 sessionId:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)originalMessageWrap;
- (void)setOriginalMessageWrap:(id)arg1;
- (id)originalImage;
- (void)setOriginalImage:(id)arg1;
- (id)originalImagePath;
- (void)setOriginalImagePath:(id)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)favItem;
- (void)setFavItem:(id)arg1;
- (id)forwardBasedViewController;
- (void)setForwardBasedViewController:(id)arg1;
- (unsigned long long)editImageEntrance;
- (void)setEditImageEntrance:(unsigned long long)arg1;
- (int)editImageScene;
- (void)setEditImageScene:(int)arg1;
- (unsigned long long)editImageCompletion;
- (void)setEditImageCompletion:(unsigned long long)arg1;
- (BOOL)directlyReturnReplaceOriginResult;
- (void)setDirectlyReturnReplaceOriginResult:(BOOL)arg1;
- (BOOL)isEmoticonBoardSearchEnabled;
- (void)setIsEmoticonBoardSearchEnabled:(BOOL)arg1;
- (id)xiaoweiSessionId;
- (void)setXiaoweiSessionId:(id)arg1;
- (void).cxx_destruct;
@end

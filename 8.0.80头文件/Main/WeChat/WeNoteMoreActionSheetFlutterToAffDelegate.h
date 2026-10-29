@interface WeNoteMoreActionSheetFlutterToAffDelegate : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    shared_ptr<wenote::WeNoteMoreActionSheetFlutterToAffDelegateCppCover> cpp_cover; // +0x80
    weak_ptr<wenote::WeNoteMoreActionSheetFlutterToAffDelegateDispatcher> cpp_dispatcher; // +0x90
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<wenote::WeNoteMoreActionSheetFlutterToAffDelegateDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (void)onUserConfirmDeleteNote;
- (void)onForwardNoteToConversation:(id)arg1;
- (id)getInfoForShareSns;
- (id)getCurrentMoreActionSheetState;
- (void)onShareNoteToSns;
- (void)onTriggerStar;
- (void)onClickMiniWindow;
- (void)onClickExportAsImageAsync:(id /* block */)arg1;
- (void)onClickExportAsImageAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onExportAsImageResultAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)onExportAsImageResultAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)onClickEditTag;
- (void)onSetTopAtChatList:(BOOL)arg1;
- (BOOL)isSetTopAtChatListAllowed;
- (void)onConvertToEditableNote;
- (void)onAddFavorite;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

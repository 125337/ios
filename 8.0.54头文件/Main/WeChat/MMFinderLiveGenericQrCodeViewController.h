@interface MMFinderLiveGenericQrCodeViewController : MMCPUIViewController <MMFinderLiveGenericQrCodeViewDelegate, MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate, ForwardMessageLogicDelegate, WCCommitViewResultDelegate>
{
    WCFinderContact * _anchorContact; // +0x68
    MMFinderLiveTaskId * _taskId; // +0x70
    FinderLiveShareLiveQRCodeInfo * _qrCodeInfo; // +0x78
    MMFinderLiveNoticePosterModel * _posterModel; // +0x80
    NSString * _selectedStyleId; // +0x88
    unsigned long long _state; // +0x90
    UIView * _editorLandingStateCommandsContainer; // +0x98
    MMLiveVerticalTextButtonView * _editorEnterEditingButton; // +0xa0
    MMLiveVerticalTextButtonView * _editorSaveImageButton; // +0xa8
    MMLiveVerticalTextButtonView * _editorShareButton; // +0xb0
    UIView * _editingStateCommandsContainer; // +0xb8
    MMUIButton * _editingCommitButton; // +0xc0
    MMUIButton * _editingAdvanceStyleButton; // +0xc8
    MMFinderLiveGenericQrCodeView * _qrCodeView; // +0xd0
    MMScrollActionSheet * _shareActionSheet; // +0xd8
    ForwardMessageLogicController * _forwardLogic; // +0xe0
    WCForwardViewController * _forwardVc; // +0xe8
}
- (id)init;
- (id)shareActionSheet;
- (void)setState:(unsigned long long)arg1;
- (id)liveTask;
- (void)fetchDetailsQRCodeInfoWithLiveTaskId:(id)arg1 contact:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)createQrCodeView;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)onShareButtonTapped;
- (void)onAdvanceStyleButtonTapped;
- (void)onSaveImageButtonTapped;
- (void)onEnterEditingButtonTapped;
- (void)onEditingCommitButtonTapped;
- (void)onBackButtonTapped;
- (void)onLiveGenericQrCodeViewBackgroundImageChangeRequested:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)initializeComponents;
- (void)initializeShareActionSheet;
- (void)shareToChat:(id)arg1;
- (void)shareToMoment;
- (void)addToFavorites;
- (void)commitPosterChangesWithCompletionBlock:(id /* block */)arg1;
- (void)revertPosterChangesWithCompletionBlock:(id /* block */)arg1;
- (void)setPreviewBackgroundImage:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)clearPreviewBackgroundImageWithCompletionBlock:(id /* block */)arg1;
- (void)reportAnchorShareAction;
- (id)anchorContact;
- (void)setAnchorContact:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)qrCodeInfo;
- (void)setQrCodeInfo:(id)arg1;
- (id)posterModel;
- (void)setPosterModel:(id)arg1;
- (id)selectedStyleId;
- (void)setSelectedStyleId:(id)arg1;
- (unsigned long long)state;
- (id)editorLandingStateCommandsContainer;
- (void)setEditorLandingStateCommandsContainer:(id)arg1;
- (id)editorEnterEditingButton;
- (void)setEditorEnterEditingButton:(id)arg1;
- (id)editorSaveImageButton;
- (void)setEditorSaveImageButton:(id)arg1;
- (id)editorShareButton;
- (void)setEditorShareButton:(id)arg1;
- (id)editingStateCommandsContainer;
- (void)setEditingStateCommandsContainer:(id)arg1;
- (id)editingCommitButton;
- (void)setEditingCommitButton:(id)arg1;
- (id)editingAdvanceStyleButton;
- (void)setEditingAdvanceStyleButton:(id)arg1;
- (id)qrCodeView;
- (void)setQrCodeView:(id)arg1;
- (void)setShareActionSheet:(id)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (id)forwardVc;
- (void)setForwardVc:(id)arg1;
- (void).cxx_destruct;
@end


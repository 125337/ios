@interface EmoticonCustomAddLogicController : NSObject <MMUIViewControllerDelegate, EmoticonCameraDelegate, WCActionSheetDelegate, EmoticonCustomManageAddLogicDelegate>
{
    MMUIViewController * m_tmpViewController; // +0x8
    EmoticonCameraReportObject * m_reportObject; // +0x10
    AddEmoticonWrap * m_addEmoticonWrap; // +0x18
    BOOL m_needAsyncUpload; // +0x20
    BOOL _useNewSnackStyle; // +0x21
    BOOL _disableAutoShowSucToast; // +0x22
    id <MMUIViewControllerDelegate> _vcDelegate; // +0x28
    id <EmoticonCustomAddLogicControllerDelegate> _delegate; // +0x30
    unsigned long long _recentPulledByCameraEmoticonLabelTime; // +0x38
    EmoticonCustomManageAddLogic * _addEmoticonLogic; // +0x40
    EmoticonCheckCameraFollowLogic * _checkCameraFollowLogic; // +0x48
}
+ (BOOL)shouldShowEmoticonCameraEntrance;
+ (BOOL)shouldShowEmoticonCameraFollow;
+ (BOOL)shouldEnableEmoticonCameraNewYearPendant;
+ (BOOL)shouldForbiddenEmoticonCameraNewYearPendantMessageTail;
+ (BOOL)isEmoticonCameraSceneRedEnvelope:(unsigned int)arg1;
+ (id)localizedStringForEmoticonAsyncUploadOperate:(unsigned long long)arg1;
+ (SEL)selectorForEmoticonAsyncUploadOperate:(unsigned long long)arg1;
- (BOOL)showTakePhotoWithModel:(id)arg1;
- (BOOL)realDoTakePhotoWithModel:(id)arg1;
- (void)setUseNewSnackStyle:(BOOL)arg1;
- (void)setDisableAutoShowSucToast:(BOOL)arg1;
- (id)addEmoticonLogic;
- (id)checkCameraFollowLogic;
- (void)DismissModalViewControllerAnimated:(BOOL)arg1;
- (void)DismissModalViewControllerAnimated:(BOOL)arg1 completion:(id /* block */)arg2;
- (BOOL)startExchangePackAndAddEmoticonWithWrap:(id)arg1;
- (BOOL)startAddEmoticonWithWrap:(id)arg1;
- (BOOL)deleteEmoticonWithWrap:(id)arg1;
- (void)handleEmoticonAsyncUploadWithWrap:(id)arg1;
- (void)onReuploadButtonClick;
- (void)onDeleteButtonClick;
- (id)getViewController;
- (void)onEmoticonCameraDidTakeImgWithUploadInfo:(id)arg1 viewController:(id)arg2;
- (void)AddEmoticonFinishedWithWrap:(id)arg1 IsSuccessed:(BOOL)arg2;
- (void)onAddEmoticonPendingUploadWithWrap:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)handleGIFInfo:(id)arg1;
- (void)handleEmoticonUploadInfo:(id)arg1 source:(int)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)onEmoticonCameraClose;
- (id)vcDelegate;
- (void)setVcDelegate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)useNewSnackStyle;
- (BOOL)disableAutoShowSucToast;
- (unsigned long long)recentPulledByCameraEmoticonLabelTime;
- (void)setRecentPulledByCameraEmoticonLabelTime:(unsigned long long)arg1;
- (void)setAddEmoticonLogic:(id)arg1;
- (void)setCheckCameraFollowLogic:(id)arg1;
- (void).cxx_destruct;
@end

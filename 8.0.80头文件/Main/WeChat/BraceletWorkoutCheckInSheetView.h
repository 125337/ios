@interface BraceletWorkoutCheckInSheetView : MMPageSheetBaseView <TextStatePublishViewControllerDelegate, MMImagePickerManagerDelegate, UITextFieldDelegate, WCActionSheetDelegate, IDeviceRankWorkoutMgrExt>
{
    BOOL _isInlineCheckInEditing; // +0x8
    BOOL _isInlineCheckInRequesting; // +0x9
    id /* block */ _onRecordSuccess; // +0x10
    long long _step; // +0x18
    NSString * _reportSessionId; // +0x20
    NSMutableArray * _targetList; // +0x28
    NSMutableArray * _originTargetList; // +0x30
    UIButton * _manageButton; // +0x38
    UIButton * _inlineBackButton; // +0x40
    UIView * _containerView; // +0x48
    UIScrollView * _listScrollView; // +0x50
    UIView * _listContentView; // +0x58
    unsigned long long _inlineCheckInRequestID; // +0x60
    unsigned long long _editingTargetSeq; // +0x68
    WeRunTarget * _editingTarget; // +0x70
    UIView * _inlineCheckInCardView; // +0x78
    UILabel * _inlineTargetLabel; // +0x80
    UILabel * _inlineUnitLabel; // +0x88
    UITextField * _inlineAmountInput; // +0x90
    UIButton * _inlineAddPhotoButton; // +0x98
    UIImageView * _inlineSelectedImageView; // +0xa0
    UIButton * _inlineCheckInButton; // +0xa8
    UIImage * _inlineSelectedImage; // +0xb0
    NSString * _stateDesc; // +0xb8
    unsigned long long _cgiStartTime; // +0xc0
    CHHapticEngine * _checkInHapticEngine; // +0xc8
    id <CHHapticPatternPlayer> _checkInHapticPlayer; // +0xd0
}
- (id)initWithTargetList:(id)arg1;
- (id)initWithTargetList:(id)arg1 step:(long long)arg2;
- (void)pageSheetDidAppear;
- (void)inlineStatusChange:(BOOL)arg1;
- (void)reportWorkoutTargetClkAction:(unsigned long long)arg1;
- (void)reportCheckInGoalClkAction:(unsigned long long)arg1;
- (void)p_sortTargetsCheckedInToBottom;
- (void)initConfig;
- (void)initView;
- (double)p_fixedSheetHeight;
- (double)p_layoutTargetCards:(double)arg1;
- (double)p_layoutEmptyState:(double)arg1;
- (double)p_inlineCheckInSheetHeight;
- (void)p_setTransitionTargetFrame:(CGRect)arg1 forView:(id)arg2;
- (void)p_setTransitionTargetAlpha:(double)arg1 forView:(id)arg2;
- (CGRect)p_transitionTargetFrameForView:(id)arg1;
- (double)p_transitionTargetAlphaForView:(id)arg1;
- (void)p_transitionTargetFrameKey;
- (void)p_transitionTargetAlphaKey;
- (void)p_applyInlineTransitionTargetOnCard:(id)arg1;
- (id)p_makeInlineTransitionCardWithTarget:(id)arg1 startFrame:(CGRect)arg2 endFrame:(CGRect)arg3 entering:(BOOL)arg4;
- (id)p_makeInlineBackButton;
- (void)p_enterInlineCheckInModeWithTargetSeq:(unsigned long long)arg1;
- (void)p_exitInlineCheckInMode;
- (void)p_playOtherTargetCardsFadeInAnimationExceptTargetSeq:(unsigned long long)arg1;
- (void)p_restoreListPageConfig;
- (void)p_reloadListLayoutWithHeight:(double)arg1 animated:(BOOL)arg2;
- (double)p_layoutInlineCheckInEditorWithWidth:(double)arg1;
- (id)p_unitForTarget:(id)arg1;
- (id)p_amountFromTargetValue:(unsigned int)arg1 unit:(id)arg2;
- (BOOL)p_hasInlineActualAmountInput:(id)arg1;
- (BOOL)p_isValidInlineActualAmount:(id)arg1;
- (BOOL)p_isValidInlineActualAmountInput:(id)arg1;
- (void)p_updateInlineAmountInputTextColor;
- (void)p_setInlineCheckInButtonLoading:(BOOL)arg1;
- (void)p_refreshInlineCheckInButtonEnable;
- (void)p_restoreInlineCheckInRequestStateWithAmount:(id)arg1;
- (double)p_inlineAmountInputWidthForText:(id)arg1 fontSize:(double)arg2;
- (double)p_inlineAmountInputWidthForText:(id)arg1;
- (void)p_layoutInlineAmountInputIfNeeded;
- (void)onInlineAmountChanged:(id)arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(_NSRange)arg2 replacementString:(id)arg3;
- (void)onInlineCheckInBackButtonClick;
- (void)onInlineAddPhotoButtonClick;
- (void)p_showInlineAddPhotoSourceSheet;
- (void)p_updateInlineSelectedImage:(id)arg1;
- (void)onInlineSelectedImageTap:(id)arg1;
- (void)p_startInlineCheckInClickAnimation;
- (void)p_resetInlineCheckInPrepareStateWithAmount:(id)arg1;
- (id)p_makeInlineCheckedDecorationGroupWithFinalCardHeight:(double)arg1;
- (void)p_finishInlineCheckInAnimationWithTarget:(id)arg1;
- (void)onInlineCheckInButtonClick;
- (void)p_startInlineCheckInRequestWithActualValue:(unsigned int)arg1 unit:(int)arg2 requestID:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (double)p_setStatusButtonTopWithCardsBottom:(double)arg1 buttonHeight:(double)arg2;
- (id)p_makeSetStatusButton;
- (void)onSetStatusButtonClick;
- (void)p_jumpToState:(id)arg1;
- (void)onAddTargetButtonClick;
- (id)p_makeTargetCardWithTarget:(id)arg1 index:(unsigned long long)arg2 width:(double)arg3;
- (id)p_amountTextForValue:(unsigned int)arg1 unit:(id)arg2;
- (id)p_targetAmountTextForTarget:(id)arg1;
- (id)p_checkInAmountTextForTarget:(id)arg1;
- (id)p_displayTitleForTarget:(id)arg1;
- (id)p_makeSelectableCardWithTarget:(id)arg1 index:(unsigned long long)arg2 width:(double)arg3;
- (id)p_makeCheckedInCardWithTarget:(id)arg1 index:(unsigned long long)arg2 width:(double)arg3;
- (long long)p_indexForDotControl:(id)arg1;
- (void)onUncheckedDotClick:(id)arg1;
- (void)onCheckedDotClick:(id)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)p_openUpdateTargetSheetWithTargetSeq:(unsigned long long)arg1;
- (void)p_showImagePickerWithSourceType:(long long)arg1 targetSeq:(unsigned long long)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (id)p_checkInImageUrlForTargetSeq:(unsigned long long)arg1;
- (void)p_showFullScreenCheckInImagePreview:(id)arg1 targetSeq:(unsigned long long)arg2 sourceView:(id)arg3;
- (void)p_deleteTargetWithSeq:(unsigned long long)arg1;
- (void)p_cancelCheckInWithTargetSeq:(unsigned long long)arg1;
- (void)onCardClick:(id)arg1;
- (void)p_handleTargetCheckedIn:(id)arg1;
- (id)p_makeCardDotIconWithColor:(id)arg1;
- (id)p_cardForTargetSeq:(unsigned long long)arg1;
- (void)p_cardTargetSeqKey;
- (void)p_playCheckInPAGOnSheetWithDelay:(double)arg1 duration:(double)arg2 anchorView:(id)arg3 touchX:(double)arg4;
- (id)p_currentKeyWindow;
- (void)openCreateTargetSheet;
- (void)p_handleTargetAdded:(id)arg1;
- (void)p_handleTargetUpdated:(id)arg1;
- (long long)p_indexOfTargetSeq:(unsigned long long)arg1;
- (void)p_playCheckInHaptic;
- (void)p_stopCheckInHaptic;
- (id)p_makeCheckInHapticPatternWithError:(id *)arg1;
- (void)p_playCheckInFallbackHaptic;
- (id /* block */)onRecordSuccess;
- (void)setOnRecordSuccess:(id /* block */)arg1;
- (long long)step;
- (void)setStep:(long long)arg1;
- (id)reportSessionId;
- (void)setReportSessionId:(id)arg1;
- (id)targetList;
- (void)setTargetList:(id)arg1;
- (id)originTargetList;
- (void)setOriginTargetList:(id)arg1;
- (id)manageButton;
- (void)setManageButton:(id)arg1;
- (id)inlineBackButton;
- (void)setInlineBackButton:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)listScrollView;
- (void)setListScrollView:(id)arg1;
- (id)listContentView;
- (void)setListContentView:(id)arg1;
- (BOOL)isInlineCheckInEditing;
- (void)setIsInlineCheckInEditing:(BOOL)arg1;
- (BOOL)isInlineCheckInRequesting;
- (void)setIsInlineCheckInRequesting:(BOOL)arg1;
- (unsigned long long)inlineCheckInRequestID;
- (void)setInlineCheckInRequestID:(unsigned long long)arg1;
- (unsigned long long)editingTargetSeq;
- (void)setEditingTargetSeq:(unsigned long long)arg1;
- (id)editingTarget;
- (void)setEditingTarget:(id)arg1;
- (id)inlineCheckInCardView;
- (void)setInlineCheckInCardView:(id)arg1;
- (id)inlineTargetLabel;
- (void)setInlineTargetLabel:(id)arg1;
- (id)inlineUnitLabel;
- (void)setInlineUnitLabel:(id)arg1;
- (id)inlineAmountInput;
- (void)setInlineAmountInput:(id)arg1;
- (id)inlineAddPhotoButton;
- (void)setInlineAddPhotoButton:(id)arg1;
- (id)inlineSelectedImageView;
- (void)setInlineSelectedImageView:(id)arg1;
- (id)inlineCheckInButton;
- (void)setInlineCheckInButton:(id)arg1;
- (id)inlineSelectedImage;
- (void)setInlineSelectedImage:(id)arg1;
- (id)stateDesc;
- (void)setStateDesc:(id)arg1;
- (unsigned long long)cgiStartTime;
- (void)setCgiStartTime:(unsigned long long)arg1;
- (id)checkInHapticEngine;
- (void)setCheckInHapticEngine:(id)arg1;
- (id)checkInHapticPlayer;
- (void)setCheckInHapticPlayer:(id)arg1;
- (void).cxx_destruct;
@end

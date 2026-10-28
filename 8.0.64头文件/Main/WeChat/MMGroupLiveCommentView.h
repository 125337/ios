@interface MMGroupLiveCommentView : MMLiveCommentView <MMGroupLiveMgrExt, WCActionSheetDelegate>
{
    WCFinderAnimationLoadingView * _forbiddCommentLoadingView; // +0x8
}
+ (double)commentTableWidth;
+ (double)commentTableWidthForPortrait;
+ (double)commentTableWidthForLandscape;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)layoutUI;
- (void)layoutInputView;
- (void)layoutContentBackView;
- (void)layoutCommentTableTapView;
- (void)layoutCommentButton;
- (double)commentButtonLeft;
- (void)createCommentButton;
- (void)hideContent;
- (void)showContent;
- (double)commentTableBackViewBottom;
- (double)commentTableHeightForInputShow:(BOOL)arg1;
- (id)createCommentTableViewModel;
- (BOOL)applyUpdateLiveCommentEnabled:(BOOL)arg1 taskId:(id)arg2;
- (id)commentFetchEngine;
- (Class)commentTableCellClass;
- (id)registerCellClasses;
- (void)showToastForBanOrAllowComment:(BOOL)arg1 success:(BOOL)arg2;
- (id)createCommentPostEngine;
- (void)onBanLiveCommentResult:(id)arg1 liveId:(unsigned long long)arg2 andRoomId:(id)arg3 enableComment:(BOOL)arg4;
- (void)onLiveIsEnableComment:(BOOL)arg1 notifyContent:(id)arg2 liveId:(unsigned long long)arg3;
- (void)onCommentButtonClick;
- (BOOL)checkCommentAbilityForAudience;
- (void)showBanCommentActionSheet;
- (void)banOrOpenComment;
- (void)onCancelEditTouched:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)handleLiveIsEnableCommentForAnchor:(BOOL)arg1;
- (void)handleLiveIsEnableCommentForAudience:(BOOL)arg1;
- (void)updateCommentState:(unsigned long long)arg1 banOrAllowCommentNotify:(id)arg2;
- (void)updateCommentStateForAnchorWithNotifyCommentItem:(id)arg1;
- (void)updateCommentStateForAudienceWithNotifyCommentItem:(id)arg1;
- (void)reportForCommentStateUpdated;
- (void)onPostFailError:(id)arg1 localSeq:(double)arg2 taskId:(id)arg3 extraInfo:(id)arg4 clientMsgId:(id)arg5;
- (void)handleBanOrOpenCommentFailed:(BOOL)arg1;
- (void)updateComponentHiddenForCommentEnableChanged;
- (id)createUnReadCountLabel;
- (id)forbiddCommentLoadingView;
- (double)commentTableWidth;
- (double)commentTableHeight;
- (void)updateInputViewAccessibility:(BOOL)arg1;
- (void)setForbiddCommentLoadingView:(id)arg1;
- (void).cxx_destruct;
@end

@interface MMFinderLiveFansGroupFansNoticeModifyPanel : MMPageSheetBaseView <MMImagePickerManagerDelegate, WCActionSheetDelegate, UITextViewDelegate, MMFinderLiveFansGroupNoticeVisibilitySheetDelegate>
{
    BOOL _isKeyBoardShow; // +0x8
    id <MMFinderLiveFansGroupFansNoticeModifyPanelDelegate> _panelDelegate; // +0x10
    id <MMFinderLiveFansGroupOperationReportDelegate> _reportDelegate; // +0x18
    MMFinderLiveTaskId * _taskId; // +0x20
    UIScrollView * _contentView; // +0x28
    UIView * _visibilityContainerView; // +0x30
    UIView * _visibilityUpperlineView; // +0x38
    UIView * _visibilityLowerlineView; // +0x40
    MMUILabel * _visibilityTipLabel; // +0x48
    MMUILabel * _visibilityTitleLabel; // +0x50
    UIImageView * _visibilityRightChevronView; // +0x58
    MMUIButton * _imageSelectButton; // +0x60
    MMUIButton * _modifyButton; // +0x68
    MMFinderLiveFansGroupAnchorEditFansNoticeInfo * _editedNoticeInfo; // +0x70
    MMWebImageView * _noticeImageView; // +0x78
    UIView * _removeImageButtonView; // +0x80
    MMUIButton * _removeImageButton; // +0x88
    MMTextView * _noticeTextView; // +0x90
    double _keyBoardHeight; // +0x98
    UIImage * _latestNoticeImage; // +0xa0
    NSArray * _levelTitles; // +0xa8
    MMFinderLiveFansGroupNoticeVisibilitySheet * _visibilityPageSheet; // +0xb0
}
- (id)initWithTaskId:(id)arg1;
- (void)initNotifications;
- (void)setupPageSheetConfig;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)createAllViews;
- (void)layoutContentView;
- (void)layoutVisibilityViews;
- (void)layoutNoticeInputViews;
- (void)updateModifyButtonStyle;
- (double)contentWidth;
- (double)contentHeight;
- (double)getPanelContentHeight;
- (double)getMaxPanelHeight;
- (void)updateDetailViewFrameAnimated:(BOOL)arg1;
- (void)onContentSizeUpdated;
- (id)navigationBackButton;
- (void)onCancelButtonClicked;
- (void)onModifyButtonClicked:(id)arg1;
- (void)onSelectImageClicked:(id)arg1;
- (void)onRemoveImageClicked;
- (void)onChangeVisibility:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)noticeVisibilitySheetWillDisappear:(id)arg1;
- (void)noticeVisibilitySheetDidConfirm:(id)arg1 newInfo:(id)arg2;
- (void)textViewDidChange:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void)resizeInputViewsIfNeeded;
- (double)expectedHeightForTextView;
- (double)maxWidthForTextView;
- (BOOL)getModifyButtonEnable;
- (void)updateImageSelectButtonImage;
- (void)openImageSelect;
- (void)syncCurrentNoticeInfoToServer:(id)arg1 completion:(id /* block */)arg2;
- (void)configWithInfo:(id)arg1;
- (void)updateVisibilityTipLabel;
- (void)makeInputBecomeFirstResponder;
- (BOOL)superfanEnabled;
- (id)panelDelegate;
- (void)setPanelDelegate:(id)arg1;
- (id)reportDelegate;
- (void)setReportDelegate:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)visibilityContainerView;
- (void)setVisibilityContainerView:(id)arg1;
- (id)visibilityUpperlineView;
- (void)setVisibilityUpperlineView:(id)arg1;
- (id)visibilityLowerlineView;
- (void)setVisibilityLowerlineView:(id)arg1;
- (id)visibilityTipLabel;
- (void)setVisibilityTipLabel:(id)arg1;
- (id)visibilityTitleLabel;
- (void)setVisibilityTitleLabel:(id)arg1;
- (id)visibilityRightChevronView;
- (void)setVisibilityRightChevronView:(id)arg1;
- (id)imageSelectButton;
- (void)setImageSelectButton:(id)arg1;
- (id)modifyButton;
- (void)setModifyButton:(id)arg1;
- (id)editedNoticeInfo;
- (void)setEditedNoticeInfo:(id)arg1;
- (id)noticeImageView;
- (void)setNoticeImageView:(id)arg1;
- (id)removeImageButtonView;
- (void)setRemoveImageButtonView:(id)arg1;
- (id)removeImageButton;
- (void)setRemoveImageButton:(id)arg1;
- (id)noticeTextView;
- (void)setNoticeTextView:(id)arg1;
- (BOOL)isKeyBoardShow;
- (void)setIsKeyBoardShow:(BOOL)arg1;
- (double)keyBoardHeight;
- (void)setKeyBoardHeight:(double)arg1;
- (id)latestNoticeImage;
- (void)setLatestNoticeImage:(id)arg1;
- (id)levelTitles;
- (void)setLevelTitles:(id)arg1;
- (id)visibilityPageSheet;
- (void)setVisibilityPageSheet:(id)arg1;
- (void).cxx_destruct;
@end

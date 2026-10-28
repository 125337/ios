@interface ContactSelectToolView : UIView <MMMenuControllerExt>
{
    unsigned int _msgSelectedCount; // +0x8
    double m_viewTop; // +0x10
    UIView * m_viewBottomLine; // +0x18
    NSMutableArray * m_arrMenu; // +0x20
    CContact * m_menuContactToShow; // +0x28
    CContact * m_menuContactShowing; // +0x30
    CContact * m_menuContactSelected; // +0x38
    UIButton * _completeButton; // +0x40
    MMLaconButton * _msgHistoryButton; // +0x48
    UIView * _selectContactsView; // +0x50
    id /* block */ _completeHandler; // +0x58
    id /* block */ _retryHandler; // +0x60
    id /* block */ _viewMsgHistoryHandler; // +0x68
    id /* block */ _deselectContactHandler; // +0x70
    id /* block */ _previewSelectedContactHandler; // +0x78
    KeepRotateImageView * _progressView; // +0x80
    UIImageView * _msgHistorySelectedMark; // +0x88
    UIImageView * _msgHistoryGoSelectMark; // +0x90
    MMUIButton * _msgRetryButton; // +0x98
    MMUIButton * _foldButton; // +0xa0
    NSMutableArray * _selectedContacts; // +0xa8
    NSMutableDictionary * _headImageViews; // +0xb0
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)initViews;
- (id)generateCompleteButton;
- (void)updateWithCompleteBarButtonItem:(id)arg1;
- (void)updateSelectedContacts:(id)arg1;
- (void)updateHeadImageViews;
- (void)updateHeadPositionAnimated;
- (void)updateHeadPosition;
- (void)layoutSubviews;
- (id)historyButtonTitle;
- (void)resetSelectContactViewAndHistoryButtonWithViewTop:(double)arg1;
- (void)onDone:(id)arg1;
- (void)onViewMsgHistory:(id)arg1;
- (void)updateMsgHistoryCount:(unsigned int)arg1;
- (void)onStartUpload;
- (void)onFinishUpload;
- (void)onFailUpload;
- (void)onUpdateUploadProgress:(double)arg1;
- (void)onClickRetry:(id)arg1;
- (void)onShowAllSelectedContacts;
- (void)onTapHeadImage:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)initMenu;
- (void)deSelectContactInMune;
- (void)showMenuForContact:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onMenuControllerDidHide;
- (id)completeButton;
- (void)setCompleteButton:(id)arg1;
- (id)msgHistoryButton;
- (void)setMsgHistoryButton:(id)arg1;
- (id)selectContactsView;
- (id /* block */)completeHandler;
- (void)setCompleteHandler:(id /* block */)arg1;
- (id /* block */)retryHandler;
- (void)setRetryHandler:(id /* block */)arg1;
- (id /* block */)viewMsgHistoryHandler;
- (void)setViewMsgHistoryHandler:(id /* block */)arg1;
- (id /* block */)deselectContactHandler;
- (void)setDeselectContactHandler:(id /* block */)arg1;
- (id /* block */)previewSelectedContactHandler;
- (void)setPreviewSelectedContactHandler:(id /* block */)arg1;
- (id)progressView;
- (void)setProgressView:(id)arg1;
- (id)msgHistorySelectedMark;
- (void)setMsgHistorySelectedMark:(id)arg1;
- (id)msgHistoryGoSelectMark;
- (void)setMsgHistoryGoSelectMark:(id)arg1;
- (id)msgRetryButton;
- (void)setMsgRetryButton:(id)arg1;
- (id)foldButton;
- (void)setFoldButton:(id)arg1;
- (id)selectedContacts;
- (void)setSelectedContacts:(id)arg1;
- (id)headImageViews;
- (void)setHeadImageViews:(id)arg1;
- (void).cxx_destruct;
@end

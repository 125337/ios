@interface CBTAsstAttachmentView : UIView
{
    BOOL _isShowing; // +0x8
    BOOL _isHalfScreenMode; // +0x9
    id <CBTAsstAttachmentViewDelegate> _delegate; // +0x10
    UIView * _containerView; // +0x18
    NSMutableArray * _itemViews; // +0x20
    NSMutableArray * _itemBottomConstraints; // +0x28
    double _appliedAttachmentBottomPadding; // +0x30
}
- (id)initWithHalfScreenMode:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setupViews;
- (id)createAttachmentItemWithTitle:(id)arg1 iconName:(id)arg2 type:(unsigned long long)arg3;
- (double)attachmentBottomPadding;
- (void)updateAttachmentBottomPaddingIfNeeded;
- (void)safeAreaInsetsDidChange;
- (void)layoutSubviews;
- (void)showAnimated:(BOOL)arg1;
- (void)hideAnimated:(BOOL)arg1;
- (void)onAttachmentItemTap:(id)arg1;
- (void)openPhotoPicker;
- (void)openCamera;
- (void)openFileBrowser;
- (void)openChatPicker;
- (BOOL)isShowing;
- (void)setIsShowing:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isHalfScreenMode;
- (void)setIsHalfScreenMode:(BOOL)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)itemViews;
- (void)setItemViews:(id)arg1;
- (id)itemBottomConstraints;
- (void)setItemBottomConstraints:(id)arg1;
- (double)appliedAttachmentBottomPadding;
- (void)setAppliedAttachmentBottomPadding:(double)arg1;
- (void).cxx_destruct;
@end

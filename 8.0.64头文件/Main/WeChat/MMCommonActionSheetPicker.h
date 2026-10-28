@interface MMCommonActionSheetPicker : MMUIView <MMCommonPickerDelegate>
{
    BOOL _shouldManualDismiss; // +0x8
    BOOL _showInView; // +0x9
    NSString * _title; // +0x10
    NSString * _confirmText; // +0x18
    id <MMCommonActionSheetPickerDelegate> _delegate; // +0x20
    MMCommonPickerView * _pickerView; // +0x28
    PickerTitleBar * _titleBar; // +0x30
    PickerToolBar * _pickerToolBar; // +0x38
    UIView * _containerView; // +0x40
    UIView * _transparentView; // +0x48
    MMCommonPickerView * _customPickerView; // +0x50
}
+ (UIEdgeInsets)realSafeAreaInsets;
- (id)initWithCustomPickerView:(id)arg1 frame:(CGRect)arg2;
- (id)init;
- (void)dealloc;
- (void)createViews;
- (void)addNotifications;
- (void)UISplitViewWillChangeSplitMode;
- (void)layoutSubviews;
- (void)setTopRoundCorner;
- (void)setTitle:(id)arg1;
- (void)setConfirmText:(id)arg1;
- (void)setData:(id)arg1;
- (void)setData:(id)arg1 inComponent:(long long)arg2;
- (void)setSelected:(id)arg1;
- (void)setSelected:(id)arg1 inComponent:(long long)arg2;
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 animated:(BOOL)arg3;
- (void)showInView:(id)arg1;
- (void)showInView:(id)arg1 maskAlpha:(double)arg2;
- (void)dismissActionSheetPicker;
- (void)dismiss;
- (id)selectedData;
- (id)selectedRows;
- (void)centerTitle;
- (void)setBottomTips:(id)arg1;
- (void)setBottomTips:(id)arg1 autoExpandHeight:(BOOL)arg2;
- (id)confirmButton;
- (id)cancelButton;
- (void)onCancel;
- (void)onConfirm;
- (void)handleTap:(id)arg1;
- (id)getTransparentView;
- (id)getContainView;
- (double)pickerViewHeight;
- (id)titleBar;
- (id)pickerView;
- (id)pickerToolBar;
- (void)onPickerViewDidSelectRow:(long long)arg1 inComponent:(long long)arg2 PickItem:(id)arg3;
- (id)title;
- (id)confirmText;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setPickerView:(id)arg1;
- (BOOL)shouldManualDismiss;
- (void)setShouldManualDismiss:(BOOL)arg1;
- (void)setTitleBar:(id)arg1;
- (void)setPickerToolBar:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)transparentView;
- (void)setTransparentView:(id)arg1;
- (id)customPickerView;
- (void)setCustomPickerView:(id)arg1;
- (BOOL)showInView;
- (void)setShowInView:(BOOL)arg1;
- (void).cxx_destruct;
@end

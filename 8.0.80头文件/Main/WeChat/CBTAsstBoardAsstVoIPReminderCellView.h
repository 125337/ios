@interface CBTAsstBoardAsstVoIPReminderCellView : CBTAsstBoardBaseCellView
{
    UILabel * _reminderLabel; // +0x8
}
+ (id)reminderFont;
+ (double)containerTopInset;
+ (double)containerBottomInset;
+ (double)containerHorizontalInset;
- (BOOL)disablesLongPressMenu;
- (BOOL)needsLeftShiftForSelectMode;
- (UIEdgeInsets)mainContainerInset;
- (void)prepareForReuse;
- (void)setupCellWithViewModel:(id)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (id)reminderLabel;
- (void)setReminderLabel:(id)arg1;
- (void).cxx_destruct;
@end

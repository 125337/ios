@interface _TtC6WeChat24WCPayLedgerCanlendarView : UIView
{
     days; // +0x8
     weekdayOffset; // +0x10
     todayOffset; // +0x18
     taggedDays; // +0x20
     selectionStart; // +0x28
     selectionEnd; // +0x38
     calendarDirty; // +0x41
     imageView; // +0x48
     hintLabels; // +0x50
     selectionBaseLayer; // +0x58
     kHintHeight; // +0x60
     kTodayHintTag; // +0x68
     ledgerDate; // +0x70
     onRangeSelectionUpdated; // +0x90
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void).cxx_destruct;
@end


@interface MMPickerQuickTimeButton : MMUIButton
{
    BOOL _isSelected; // +0x8
    long long _reminderInterval; // +0x10
}
- (long long)reminderInterval;
- (void)setReminderInterval:(long long)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
@end

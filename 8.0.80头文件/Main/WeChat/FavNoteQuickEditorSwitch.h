@interface FavNoteQuickEditorSwitch : MMObject
{
    BOOL _isEnabled; // +0x8
}
+ (id)sharedInstance;
- (id)init;
- (BOOL)isEnabled;
- (void)setIsEnabled:(BOOL)arg1;
@end

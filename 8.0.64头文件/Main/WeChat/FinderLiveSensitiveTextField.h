@interface FinderLiveSensitiveTextField : MMUITextField
{
    BOOL _ignoreResignFirstResponder; // +0x8
}
- (BOOL)resignFirstResponder;
- (BOOL)ignoreResignFirstResponder;
- (void)setIgnoreResignFirstResponder:(BOOL)arg1;
@end

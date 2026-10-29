@interface MMTextAttachment : NSTextAttachment
{
    id /* block */ _onAccessibilityActivate; // +0x8
}
- (BOOL)accessibilityActivate;
- (id /* block */)onAccessibilityActivate;
- (void)setOnAccessibilityActivate:(id /* block */)arg1;
- (void).cxx_destruct;
@end


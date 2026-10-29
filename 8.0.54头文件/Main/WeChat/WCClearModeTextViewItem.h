@interface WCClearModeTextViewItem : WCBaseTextViewItem
{
    UIButton * m_clearButton; // +0x58
}
- (id)scaleImage:(id)arg1 toSize:(CGSize)arg2;
- (void)initView:(CGRect)arg1;
- (void)OnClear:(id)arg1;
- (void)setClearButtonHidden:(BOOL)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (void).cxx_destruct;
@end


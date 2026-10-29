@interface FavMultiSelectToolView : WCBottomBar
{
    NSMutableArray * m_btnArray; // +0x8
}
- (void)addButtonType:(unsigned long long)arg1 selector:(SEL)arg2 target:(id)arg3;
- (void)clearAllBtn;
- (id)createBtnWithImg:(id)arg1 accessibilityStr:(id)arg2 Sel:(SEL)arg3 Target:(id)arg4;
- (void)layoutView;
- (void)setBtnsEnabled:(BOOL)arg1;
- (void).cxx_destruct;
@end


@interface MMUIHookView : MMUIView
{
    id <MMUIHookViewDelegate> m_delegate; // +0x8
}
- (void)setFrame:(CGRect)arg1;
- (void)didMoveToWindow;
- (void)setHidden:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

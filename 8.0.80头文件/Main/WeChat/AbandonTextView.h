@interface AbandonTextView : UILabel
{
    BOOL _bIsTouchesEnded; // +0x8
    id <AbandonTextViewDelegate> _delegate; // +0x10
}
- (id)init;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)initMembers;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end

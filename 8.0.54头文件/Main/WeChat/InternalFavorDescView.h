@interface InternalFavorDescView : UIView
{
    id <InternalFavorDescViewDelegate> _m_delegate; // +0x8
}
- (id)init;
- (void)onClick;
- (void)updateDescList:(id)arg1 selected:(BOOL)arg2 totalDiscount:(id)arg3;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end


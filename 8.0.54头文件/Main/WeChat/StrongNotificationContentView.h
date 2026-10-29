@interface StrongNotificationContentView : MMUIView
{
    MMUIView * m_maskContainerView; // +0x8
    UIView * _contentView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initView;
- (void)addSubviewToContentView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end


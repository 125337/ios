@interface ContactRemarkPhoneListPageSheet : MMPageSheetBaseView
{
    NSArray * m_arrPhone; // +0x8
    MMUIView * _containerView; // +0x10
}
- (id)initWithArrPhone:(id)arg1;
- (void)initConfig;
- (void)initView;
- (id)genPhoneItemView:(id)arg1;
- (void)tryCopy:(id)arg1;
- (void)tryCall:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (void).cxx_destruct;
@end

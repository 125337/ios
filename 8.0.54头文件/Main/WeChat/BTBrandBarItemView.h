@interface BTBrandBarItemView : BTBaseBarItemView
{
    BOOL _showBottomLiveBtn; // +0x8
}
- (void)initHeaderView;
- (void)updateHeaderView;
- (void)bindYSdkReport:(id)arg1 andViewId:(id)arg2 andViewModel:(id)arg3;
- (BOOL)showBottomLiveBtn;
- (void)setShowBottomLiveBtn:(BOOL)arg1;
@end


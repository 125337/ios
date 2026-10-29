@interface WCPayGPLaunchModeDetailView : UIView
{
    id <WCPayGPLaunchModeDetailViewDelegate> _delegate; // +0x8
    UIImageView * _checkCommonAA; // +0x10
    UIImageView * _checkActicityAA; // +0x18
    UIImageView * _checkCustomizeAA; // +0x20
    UIView * _commonAAView; // +0x28
    UIView * _activityAAView; // +0x30
    UIView * _customizeAAView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (void)updateCheckMarkStatusWithLaunchType:(unsigned long long)arg1;
- (void)setupContentView;
- (id)getTitleLabel:(id)arg1;
- (id)getDescLabel:(id)arg1;
- (void)commonAAClick;
- (void)activityAAClick;
- (void)customizeAAClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)checkCommonAA;
- (void)setCheckCommonAA:(id)arg1;
- (id)checkActicityAA;
- (void)setCheckActicityAA:(id)arg1;
- (id)checkCustomizeAA;
- (void)setCheckCustomizeAA:(id)arg1;
- (id)commonAAView;
- (void)setCommonAAView:(id)arg1;
- (id)activityAAView;
- (void)setActivityAAView:(id)arg1;
- (id)customizeAAView;
- (void)setCustomizeAAView:(id)arg1;
- (void).cxx_destruct;
@end

@interface CameraScanEnergyInfoView : UIView
{
    UILabel * _fpsLabel; // +0x8
    UILabel * _thermalLabel; // +0x10
    UILabel * _cpuLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (id)init;
- (void)setupUI;
- (id)createInfoLabel;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateWithLiveData:(id)arg1;
- (id)thermalStateString:(long long)arg1;
- (id)thermalStateColor:(long long)arg1;
- (void)reset;
- (id)fpsLabel;
- (void)setFpsLabel:(id)arg1;
- (id)thermalLabel;
- (void)setThermalLabel:(id)arg1;
- (id)cpuLabel;
- (void)setCpuLabel:(id)arg1;
- (void).cxx_destruct;
@end

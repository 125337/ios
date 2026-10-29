@interface BraceletAbroadRankView : UIView <ShareViewDelegate>
{
    DeviceRankInfo * m_rankInfo; // +0x8
    UILabel * m_oShareLabel; // +0x10
    id <BraceletAbroadRankViewDelegate><NSObject> _delegate; // +0x18
}
- (id)initWithFrame:(CGRect)arg1 DeviceRankInfo:(id)arg2;
- (void)initView;
- (void)onClick;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

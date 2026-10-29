@interface BraceletRankLikeButton : MMUIButton
{
    DeviceRankInfo * m_rankInfo; // +0x8
}
- (id)initWithDeviceRankInfo:(id)arg1;
- (void)initView;
- (void)animatChangeToLikeState:(BOOL)arg1;
- (id)m_rankInfo;
- (void)setM_rankInfo:(id)arg1;
- (void).cxx_destruct;
@end


@interface WCPayAvaliableFavorView : MMUIView <CAAnimationDelegate>
{
    WCPayControlData * m_data; // +0x8
    CGRect m_frame; // +0x10
    UIImageView * m_backgroundView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1 Data:(id)arg2;
- (void)showAnimation;
- (void)closeView;
- (BOOL)shouldPreventedAutorotateToInterfaceOrientation;
- (void).cxx_destruct;
@end

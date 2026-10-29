@interface WCPayCouponsListView : MMUIView <CAAnimationDelegate>
{
    WCPayFavorComposeInfo * m_oOldSelectedComposeInfo; // +0x8
    UIImageView * m_backgroundView; // +0x10
    UIButton * comleteButton; // +0x18
    UILabel * topTitleLabel; // +0x20
    NSMutableArray * m_arrCouponsView; // +0x28
    NSMutableArray * m_arrFilterTradeFavInfo; // +0x30
    WCPayControlData * m_data; // +0x38
    id <WCPayCouponsListViewDelegate> m_delegate; // +0x40
}
- (BOOL)is_open_field_area;
- (BOOL)useChangeCardViewV2;
- (id)initWithFrame:(CGRect)arg1 andData:(id)arg2 delegate:(id)arg3;
- (void)showAnimation;
- (void)OnCompleteButtonDone:(id)arg1;
- (void)onCancelButtonDone;
- (void)OnSelectedFavor:(id)arg1;
- (void)closeView;
- (BOOL)shouldPreventedAutorotateToInterfaceOrientation;
- (void).cxx_destruct;
@end


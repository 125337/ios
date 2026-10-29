@interface MMFinderLiveNoticeCouponsGuideViewHeader : UIView
{
    UIImageView * _doneView; // +0x8
    UILabel * _reservedLabel; // +0x10
    UILabel * _willNoticeLabel; // +0x18
    UILabel * _canReceiveLabel; // +0x20
}
- (id)initWithNotices:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)doneView;
- (void)setDoneView:(id)arg1;
- (id)reservedLabel;
- (void)setReservedLabel:(id)arg1;
- (id)willNoticeLabel;
- (void)setWillNoticeLabel:(id)arg1;
- (id)canReceiveLabel;
- (void)setCanReceiveLabel:(id)arg1;
- (void).cxx_destruct;
@end


@interface GCGroupMemberHeadCell : GCBaseCollectionViewCell
{
    MMWebImageView * _headImgView; // +0x8
    GCStatusView * _statusView; // +0x10
    UIView * _backHeadCircles; // +0x18
    UIView * _normalContainerView; // +0x20
    UILabel * _useAsTextLabel; // +0x28
    MMWebImageView * _leftUpImgView; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)configureWithCellModel:(id)arg1;
- (void)setHeadCycles:(int)arg1;
- (void)playStatusAnimation;
- (id)headImgView;
- (void)setHeadImgView:(id)arg1;
- (id)statusView;
- (void)setStatusView:(id)arg1;
- (id)backHeadCircles;
- (void)setBackHeadCircles:(id)arg1;
- (id)normalContainerView;
- (void)setNormalContainerView:(id)arg1;
- (id)useAsTextLabel;
- (void)setUseAsTextLabel:(id)arg1;
- (id)leftUpImgView;
- (void)setLeftUpImgView:(id)arg1;
- (void).cxx_destruct;
@end


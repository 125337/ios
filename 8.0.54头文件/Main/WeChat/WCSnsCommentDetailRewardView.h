@interface WCSnsCommentDetailRewardView : MMUIView
{
    UIView * _rewardTipView; // +0x8
    UIView * m_lineView; // +0x10
    UIView * m_rewardContainer; // +0x18
    id <ILinkEventExt> m_urlDelegate; // +0x20
    WCDataItem * _dataItem; // +0x28
}
+ (double)getCommentViewLeftMarginCurOri;
+ (id)getNickNameForDataItem:(id)arg1;
- (id)initWithUrlDelegate:(id)arg1;
- (void)setDataItem:(id)arg1;
- (void)initView;
- (void)initRewardContainer;
- (void)initLineView;
- (void)initRewardTipView;
- (void)rewardDetailViewTapped;
- (BOOL)isShowRewardContainer;
- (void).cxx_destruct;
@end


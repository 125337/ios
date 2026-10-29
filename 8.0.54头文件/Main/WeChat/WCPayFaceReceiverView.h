@interface WCPayFaceReceiverView : MMUIView <IWCPayFaceHBMgrExt, UIScrollViewDelegate>
{
    BOOL _bScrollViewAnimating; // +0x8
    NSMutableArray * _arrReceiverInfos; // +0x10
    long long _balanceNum; // +0x18
    id <WCPayFaceReceiverViewDelegate> _m_delegate; // +0x20
    NSMutableArray * _receiverHeadImages; // +0x28
    UIView * _backgroundView; // +0x30
    UIScrollView * _backgroundScrollView; // +0x38
    MMUIActivityIndicatorView * _activityIndicatorView; // +0x40
}
- (id)init;
- (id)initWithFrame:(CGRect)arg1;
- (void)initDataAndView;
- (void)addReceiver:(id)arg1;
- (void)addReceiver:(id)arg1 animated:(BOOL)arg2;
- (void)clearAllReceiversAndDisappear;
- (void)refreshViewWithName:(id)arg1;
- (void)makeHeadImageView:(id)arg1;
- (BOOL)checkExisted:(id)arg1;
- (void)viewDetail;
- (void)scrollViewDidScroll:(id)arg1;
- (void)clearIndicatorView;
- (void)updateFaceHB:(id)arg1;
- (void)setArrReceiverInfos:(id)arg1;
- (id)arrReceiverInfos;
- (long long)balanceNum;
- (void)setBalanceNum:(long long)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)receiverHeadImages;
- (void)setReceiverHeadImages:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)backgroundScrollView;
- (void)setBackgroundScrollView:(id)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (BOOL)bScrollViewAnimating;
- (void)setBScrollViewAnimating:(BOOL)arg1;
- (void).cxx_destruct;
@end


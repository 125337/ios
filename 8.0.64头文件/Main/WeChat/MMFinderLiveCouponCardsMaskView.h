@interface MMFinderLiveCouponCardsMaskView : UIView <MMFinderLiveCouponCardViewDelegate>
{
    id <MMFinderLiveCouponCardsMaskViewDelegate> _delegate; // +0x8
    MMFinderLiveCouponCardView * _cardView; // +0x10
    UIButton * _closeButton; // +0x18
    NSArray * _cardInfos; // +0x20
    MMFinderLiveTaskId * _taskID; // +0x28
}
- (id)initWithDelegate:(id)arg1 cardInfos:(id)arg2 frame:(CGRect)arg3;
- (void)initSubviews;
- (void)initCardsView;
- (void)initCloseButton;
- (void)layoutSubviews;
- (void)onCouponCardButtonClicked:(id)arg1;
- (void)onCloseButtonClicked;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)cardInfos;
- (void)setCardInfos:(id)arg1;
- (id)taskID;
- (void)setTaskID:(id)arg1;
- (void).cxx_destruct;
@end

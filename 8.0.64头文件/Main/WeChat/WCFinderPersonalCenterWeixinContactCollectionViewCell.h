@interface WCFinderPersonalCenterWeixinContactCollectionViewCell : UICollectionViewCell
{
    id <WCFinderPersonalCenterWeixinContactCollectionViewCellDelegate> _delegate; // +0x8
    NSMutableArray * _cells; // +0x10
    WCFinderPersonalCenterSidesButton * _historyCell; // +0x18
    WCFinderPersonalCenterSidesButton * _interactiveCell; // +0x20
    WCFinderPersonalCenterSidesButton * _ompactnessCell; // +0x28
    WCFinderPersonalCenterSidesButton * _fellowCell; // +0x30
    WCFinderPersonalCenterSidesButton * _paymentCell; // +0x38
    WCFinderPersonalCenterSidesButton * _messageCell; // +0x40
    WCFinderPersonalCenterSidesButton * _privateMsgCell; // +0x48
    WCFinderPersonalCenterSidesButton * _orderCell; // +0x50
    WCFinderPersonalCenterSidesButton * _managerCell; // +0x58
}
+ (id)cellID;
+ (BOOL)isInLimitState;
+ (BOOL)showPrivateMsgCell;
- (id)initWithFrame:(CGRect)arg1;
- (id)createActionButton:(id)arg1 action:(SEL)arg2;
- (void)_setupHistoryCell;
- (void)_setupInteractiveCell;
- (void)_setupCompactnessInteractiveCell;
- (void)_setupFellowCell;
- (void)_setupPaymentCell;
- (void)_setupMessageCell;
- (void)_setupPrivateMsgCell;
- (void)_setupOrderCell;
- (void)_setupManagerCell;
- (void)updateLikeCount:(unsigned long long)arg1 favCount:(unsigned long long)arg2 displayPurchasedEntrance:(BOOL)arg3 displayInteractive:(BOOL)arg4 enableOrder:(BOOL)arg5 historyCell:(long long)arg6;
- (void)_updateReddot;
- (void)layoutSubviews;
- (void)setupLayout;
- (void)applyLayout;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (id)getInteractiveRightText;
- (id)createIconAttrText:(id)arg1;
- (void)onClickInteractive;
- (void)onClickCompactness;
- (void)onClickFollowList;
- (void)onClickLikeList;
- (void)onClickPaymentList;
- (void)onClickGoodFavList;
- (void)onClickFavList;
- (void)onClickNotificationList;
- (void)onClickPrivateMsgList;
- (void)onClickOrderCenter;
- (void)onClickHistory;
- (void)onClickBlockManager;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cells;
- (void)setCells:(id)arg1;
- (id)historyCell;
- (void)setHistoryCell:(id)arg1;
- (id)interactiveCell;
- (void)setInteractiveCell:(id)arg1;
- (id)ompactnessCell;
- (void)setOmpactnessCell:(id)arg1;
- (id)fellowCell;
- (void)setFellowCell:(id)arg1;
- (id)paymentCell;
- (void)setPaymentCell:(id)arg1;
- (id)messageCell;
- (void)setMessageCell:(id)arg1;
- (id)privateMsgCell;
- (void)setPrivateMsgCell:(id)arg1;
- (id)orderCell;
- (void)setOrderCell:(id)arg1;
- (id)managerCell;
- (void)setManagerCell:(id)arg1;
- (void).cxx_destruct;
@end

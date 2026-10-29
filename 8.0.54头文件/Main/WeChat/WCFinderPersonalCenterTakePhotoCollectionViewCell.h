@interface WCFinderPersonalCenterTakePhotoCollectionViewCell : UICollectionViewCell
{
    BOOL _canShowIncomeContainer; // +0x8
    id <WCFinderPersonalCenterTakePhotoCollectionViewCellDelegate> _delegate; // +0x10
    UIImageView * _iconView; // +0x18
    UILabel * _label; // +0x20
    UILabel * _redDotLabel; // +0x28
    UIView * _postContainer; // +0x30
    MMUIButton * _arrowBtn; // +0x38
    MMUIButton * _incomeContainer; // +0x40
    UILabel * _incomeLabel; // +0x48
    UIView * _incomeRedDot; // +0x50
}
+ (id)cellID;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupReport:(id)arg1;
- (id)arrowBtn;
- (void)setupContainers;
- (void)setupIcomContainerView;
- (void)setupPostViews;
- (void)updateRedPointHiddedState:(BOOL)arg1;
- (void)updateCanShowIncome:(BOOL)arg1;
- (void)showIncomeRedDot:(BOOL)arg1;
- (void)updateDisplayElements;
- (void)updateLayoutWithViewArray:(id)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (id)iconView;
- (id)label;
- (id)redDotLabel;
- (void)tapGesture:(id)arg1;
- (void)onTapRedPacketEventView;
- (void)clickIncomeAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setRedDotLabel:(id)arg1;
- (id)postContainer;
- (void)setPostContainer:(id)arg1;
- (void)setArrowBtn:(id)arg1;
- (id)incomeContainer;
- (void)setIncomeContainer:(id)arg1;
- (id)incomeLabel;
- (void)setIncomeLabel:(id)arg1;
- (BOOL)canShowIncomeContainer;
- (void)setCanShowIncomeContainer:(BOOL)arg1;
- (id)incomeRedDot;
- (void)setIncomeRedDot:(id)arg1;
- (void).cxx_destruct;
@end


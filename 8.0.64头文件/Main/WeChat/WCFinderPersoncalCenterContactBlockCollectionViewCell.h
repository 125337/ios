@interface WCFinderPersoncalCenterContactBlockCollectionViewCell : UICollectionViewCell
{
    BOOL _showIncomeEntrance; // +0x8
    id <WCFinderPersoncalCenterContactBlockCollectionViewCellDelegate> _delegate; // +0x10
    UIImageView * _headerView; // +0x18
    UILabel * _label; // +0x20
    UILabel * _infoLabel; // +0x28
    UIImageView * _arrowIconView; // +0x30
    UIView * _redDot; // +0x38
    UIView * _separator; // +0x40
    WCFinderPersonalCenterSidesButton * _incomeButton; // +0x48
}
+ (id)cellID;
+ (BOOL)canShowIncomeView;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSeparator;
- (void)setupIcomContainerView;
- (void)setupSubViews;
- (void)resize;
- (void)prepareForReuse;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)updateWithIncomeEntrance:(BOOL)arg1 infoTips:(id)arg2;
- (id)headerView;
- (id)label;
- (id)redDot;
- (id)arrowIconView;
- (void)clickIncomeAction;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg1;
- (void)setArrowIconView:(id)arg1;
- (void)setRedDot:(id)arg1;
- (id)separator;
- (void)setSeparator:(id)arg1;
- (id)incomeButton;
- (void)setIncomeButton:(id)arg1;
- (BOOL)showIncomeEntrance;
- (void)setShowIncomeEntrance:(BOOL)arg1;
- (void).cxx_destruct;
@end

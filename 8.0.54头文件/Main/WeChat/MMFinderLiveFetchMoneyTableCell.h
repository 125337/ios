@interface MMFinderLiveFetchMoneyTableCell : WCTableViewNormalCellManager
{
    BOOL _isWaiting; // +0x8
    unsigned int _businessId; // +0xc
    UIView * _contentView; // +0x10
    MMWebImageView * _iconView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _subTitleLabel; // +0x28
    MMUIButton * _taxButton; // +0x30
    UILabel * _balanceLabel; // +0x38
    MMUILabel * _tipsLabel; // +0x40
    UIView * _pendingBalanceView; // +0x48
    UIImageView * _leftImageView; // +0x50
    UILabel * _pendingBalanceLabel; // +0x58
    MMUILabel * _subTipsLabel; // +0x60
    MMUIView * _tipsContainerView; // +0x68
    UIImageView * _arrowImageView; // +0x70
    UIView * _seperatorUpView; // +0x78
    UIView * _seperatorDownView; // +0x80
    MMUIButton * _encashLabel; // +0x88
    MMUIButton * _detailLabel; // +0x90
    double _maxContentWidth; // +0x98
    FinderLiveIncomePageItem * _incomePageItem; // +0xa0
    id <MMFinderLiveFetchMoneyTableCellDelegate> _delegate; // +0xa8
    MMUIActivityIndicatorView * _activityIndicatorView; // +0xb0
}
- (id)initWithIncomePageItem:(id)arg1 maxContentWidth:(double)arg2 delegate:(id)arg3;
- (void)initViews;
- (void)initAmount;
- (id)amountText;
- (void)initSubTips;
- (void)initDetailAndEncashButton;
- (void)initCell;
- (void)layoutUI;
- (long long)dealWithBalance:(long long)arg1 withBusinessId:(unsigned int)arg2;
- (void)clickBalance;
- (void)startEncash;
- (void)readDetail;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)taxButton;
- (void)setTaxButton:(id)arg1;
- (id)balanceLabel;
- (void)setBalanceLabel:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)pendingBalanceView;
- (void)setPendingBalanceView:(id)arg1;
- (id)leftImageView;
- (void)setLeftImageView:(id)arg1;
- (id)pendingBalanceLabel;
- (void)setPendingBalanceLabel:(id)arg1;
- (id)subTipsLabel;
- (void)setSubTipsLabel:(id)arg1;
- (id)tipsContainerView;
- (void)setTipsContainerView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)seperatorUpView;
- (void)setSeperatorUpView:(id)arg1;
- (id)seperatorDownView;
- (void)setSeperatorDownView:(id)arg1;
- (id)encashLabel;
- (void)setEncashLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (double)maxContentWidth;
- (void)setMaxContentWidth:(double)arg1;
- (id)incomePageItem;
- (void)setIncomePageItem:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned int)businessId;
- (void)setBusinessId:(unsigned int)arg1;
- (BOOL)isWaiting;
- (void)setIsWaiting:(BOOL)arg1;
- (id)activityIndicatorView;
- (void)setActivityIndicatorView:(id)arg1;
- (void).cxx_destruct;
@end


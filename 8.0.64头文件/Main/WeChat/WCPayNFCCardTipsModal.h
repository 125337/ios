@interface WCPayNFCCardTipsModal : UIView
{
    BOOL _isShowing; // +0x8
    MMUIActivityIndicatorView * _loadingView; // +0x10
    NFCCardTipsModalViewData * _viewData; // +0x18
    UIView * _backgroundView; // +0x20
    UIView * _contentView; // +0x28
    UIImageView * _iconImageView; // +0x30
    UIButton * _doneButton; // +0x38
    id /* block */ _onDoneBlk; // +0x40
    UILabel * _titleLabel; // +0x48
    UILabel * _descLabel; // +0x50
    double _originHeight; // +0x58
}
- (void)setOnDoneCallBack:(id /* block */)arg1;
- (id)initWithData:(id)arg1;
- (void)updateViewWithData:(id)arg1;
- (void)layoutSubviews;
- (void)updateView;
- (void)updateBackgroundView;
- (id)getStatusImage:(id)arg1;
- (void)updateContentView;
- (void)onClickConfirmButton:(id)arg1;
- (void)showInView:(id)arg1;
- (void)dissmiss;
- (BOOL)isShowing;
- (id)loadingView;
- (void)setLoadingView:(id)arg1;
- (id)viewData;
- (void)setViewData:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (id /* block */)onDoneBlk;
- (void)setOnDoneBlk:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (double)originHeight;
- (void)setOriginHeight:(double)arg1;
- (void).cxx_destruct;
@end

@interface MMLiveBuyTicketsView : UIView
{
    BOOL _isLandscapeLayout; // +0x8
    BOOL _needSmallImage; // +0x9
    unsigned int _remainTime; // +0xc
    unsigned int _limitTime; // +0x10
    id /* block */ _payTicketBlock; // +0x18
    id <MMLiveBuyTicketsViewDelegate> _delegate; // +0x20
    ConcertTicketInfo * _ticketInfo; // +0x28
    MMWebImageView * _titleImgView; // +0x30
    MMUILabel * _titleLabel; // +0x38
    MMUILabel * _detailLabel; // +0x40
    MMFinderLivePayButton * _actionButton; // +0x48
    long long _payButtonState; // +0x50
}
- (void)adaptLandscapeLayout:(BOOL)arg1 needSmallImage:(BOOL)arg2;
- (void)updateActionButtonOrientation;
- (double)getCurrentWidth;
- (double)getDefaultWidth;
- (id)initWithFrame:(CGRect)arg1;
- (double)getTitleLabelWidth;
- (void)layoutSubviews;
- (void)updateConcertTicketInfo:(id)arg1 limitTime:(unsigned int)arg2 remainTime:(unsigned int)arg3;
- (void)updateRetryViewTip;
- (void)startCountDown;
- (void)countDown;
- (void)updateForRemainTimeChanged;
- (void)layoutUI;
- (void)layoutTitleImgView;
- (void)layoutTitleLabel;
- (void)layoutdetailLabel;
- (void)layoutActionBtn;
- (void)onPayActionTimeout;
- (double)getMainHeight;
- (double)ticketActionButtonWidth;
- (double)ticketActionButtonTop;
- (void)actionButtonClick;
- (id /* block */)payTicketBlock;
- (void)setPayTicketBlock:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)ticketInfo;
- (void)setTicketInfo:(id)arg1;
- (unsigned int)remainTime;
- (void)setRemainTime:(unsigned int)arg1;
- (unsigned int)limitTime;
- (void)setLimitTime:(unsigned int)arg1;
- (id)titleImgView;
- (void)setTitleImgView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg1;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (long long)payButtonState;
- (void)setPayButtonState:(long long)arg1;
- (BOOL)isLandscapeLayout;
- (void)setIsLandscapeLayout:(BOOL)arg1;
- (BOOL)needSmallImage;
- (void)setNeedSmallImage:(BOOL)arg1;
- (void).cxx_destruct;
@end


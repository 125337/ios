@interface WCStartLiveHalfScreenView : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>
{
    id /* block */ _confirmCallback; // +0x70
    id /* block */ _cancelCallback; // +0x78
    UIImageView * _iconImageView; // +0x80
    UILabel * _topTitleLabel; // +0x88
}
- (void)viewDidLoad;
- (void)configdetailView;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id /* block */)confirmCallback;
- (void)setConfirmCallback:(id /* block */)arg1;
- (id /* block */)cancelCallback;
- (void)setCancelCallback:(id /* block */)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)topTitleLabel;
- (void)setTopTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

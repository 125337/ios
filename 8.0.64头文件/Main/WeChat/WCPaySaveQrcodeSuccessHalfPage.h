@interface WCPaySaveQrcodeSuccessHalfPage : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>
{
    id <WCPaySaveQrcodeSuccessHalfPageDelegate> _m_delegate; // +0x70
    MMUILabel * _titleLabel; // +0x78
    MMImageView * _iconView; // +0x80
    MMImageView * _pointView; // +0x88
    UIView * _halfPageContentView; // +0x90
    HalfPage * _halfPageInfo; // +0x98
}
- (id)initWithHalfPageInfo:(id)arg1;
- (void)viewDidLoad;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (double)pageSheetContentHeight;
- (id)pageSheetContentView;
- (id)iconView;
- (id)titleLabel;
- (id)pointView;
- (id)halfPageContentView;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setPointView:(id)arg1;
- (void)setHalfPageContentView:(id)arg1;
- (id)halfPageInfo;
- (void)setHalfPageInfo:(id)arg1;
- (void).cxx_destruct;
@end

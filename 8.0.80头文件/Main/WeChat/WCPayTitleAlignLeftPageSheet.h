@interface WCPayTitleAlignLeftPageSheet : NSObject <MMPageSheetBottomViewDelegate, MMPageSheetAdapterDelegate>
{
    double _imgWidthHeightRatio; // +0x8
    id <WCPayTitleAlignLeftPageSheetDelegate> _delegate; // +0x10
    PopUpWithHalfDialog * _pageData; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _descLabel; // +0x28
    WCPayWebImageView * _contentImgView; // +0x30
    MMPageSheetAdapter * _pageAdapter; // +0x38
    UIView * _pageSheetDetailView; // +0x40
}
- (id)initWithDelegate:(id)arg1;
- (void)updateDetailViewWithPopUpDialogData:(id)arg1;
- (void)showPageSheet;
- (void)setupDetailView;
- (void)dismissPageSheet;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetCancelButton;
- (long long)styleForPageSheetCancelButton;
- (id)titleLabel;
- (id)descLabel;
- (id)contentImgView;
- (id)pageSheetDetailView;
- (double)imgWidthHeightRatio;
- (void)setImgWidthHeightRatio:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)pageData;
- (void)setPageData:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setContentImgView:(id)arg1;
- (id)pageAdapter;
- (void)setPageAdapter:(id)arg1;
- (void)setPageSheetDetailView:(id)arg1;
- (void).cxx_destruct;
@end

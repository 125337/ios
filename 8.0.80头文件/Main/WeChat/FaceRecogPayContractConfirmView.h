@interface FaceRecogPayContractConfirmView : MMPageSheetBaseViewController <ILinkEventExt, MMPageSheetBottomViewDelegate>
{
    id <FaceRecogPayContractConfirmViewDelegate> _delegate; // +0x70
    UIView * _contentView; // +0x78
    UILabel * _titleLabel; // +0x80
    RichTextView * _linkTextView; // +0x88
    NSString * _contractUrl; // +0x90
    NSString * _contractTitle; // +0x98
    NSString * _contractDesc; // +0xa0
}
- (id)initWithLink:(id)arg1 Title:(id)arg2 Desc:(id)arg3;
- (void)viewDidLoad;
- (id)getTitleForPageSheet;
- (id)getDescForPageSheet;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)linkTextView;
- (void)setLinkTextView:(id)arg1;
- (id)contractUrl;
- (void)setContractUrl:(id)arg1;
- (id)contractTitle;
- (void)setContractTitle:(id)arg1;
- (id)contractDesc;
- (void)setContractDesc:(id)arg1;
- (void).cxx_destruct;
@end

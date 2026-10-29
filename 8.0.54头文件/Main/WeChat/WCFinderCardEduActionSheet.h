@interface WCFinderCardEduActionSheet : WCActionSheet
{
    NSString * _titleString; // +0x8
    NSString * _descString; // +0x10
    UIImage * _cardImage; // +0x18
    UIView * _tipsView; // +0x20
    MMUIButton * _closeBtn; // +0x28
    UILabel * _titleLabel; // +0x30
    RichTextView * _descTextView; // +0x38
    UIImageView * _eduImageView; // +0x40
}
- (double)heightOfWholeSheet;
- (double)getCustomView:(double)arg1;
- (id)closeBtn;
- (id)titleLabel;
- (id)descTextView;
- (id)eduImageView;
- (id)getTipsActionSheetView;
- (void)didClickClose;
- (id)titleString;
- (void)setTitleString:(id)arg1;
- (id)descString;
- (void)setDescString:(id)arg1;
- (id)cardImage;
- (void)setCardImage:(id)arg1;
- (id)tipsView;
- (void)setTipsView:(id)arg1;
- (void)setCloseBtn:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDescTextView:(id)arg1;
- (void)setEduImageView:(id)arg1;
- (void).cxx_destruct;
@end


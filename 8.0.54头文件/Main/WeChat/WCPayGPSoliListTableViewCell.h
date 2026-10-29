@interface WCPayGPSoliListTableViewCell : MMTableViewCell <ILinkEventExt>
{
    id <WCPayGPSoliListTableViewCellDelegate> _delegate; // +0x8
    SolitaireObj * _soliData; // +0x10
    double _containerWidth; // +0x18
    UIView * _cellContentView; // +0x20
    UIView * _cellHighlightView; // +0x28
    MMUILabel * _titleLabel; // +0x30
    MMUILabel * _dateLabel; // +0x38
    MMUILabel * _memberCountLabel; // +0x40
    RichTextView * _detailTextView; // +0x48
    UIImageView * _arrowImgView; // +0x50
    UIView * _sepLine1; // +0x58
    UIView * _sepLine2; // +0x60
}
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateCellWithSoliObj:(id)arg1 containerWidth:(double)arg2;
- (void)updateContentView;
- (void)setupCellContentView;
- (void)setupCellHighlightView;
- (void)setupTitleLabel;
- (void)setupDateLabel;
- (void)setupMemberCountLabel;
- (void)setupDetailTextView;
- (void)setupArrowImgView;
- (void)setupSepLine1;
- (void)setupSepLine2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)soliData;
- (void)setSoliData:(id)arg1;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (id)cellContentView;
- (void)setCellContentView:(id)arg1;
- (id)cellHighlightView;
- (void)setCellHighlightView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)dateLabel;
- (void)setDateLabel:(id)arg1;
- (id)memberCountLabel;
- (void)setMemberCountLabel:(id)arg1;
- (id)detailTextView;
- (void)setDetailTextView:(id)arg1;
- (id)arrowImgView;
- (void)setArrowImgView:(id)arg1;
- (id)sepLine1;
- (void)setSepLine1:(id)arg1;
- (id)sepLine2;
- (void)setSepLine2:(id)arg1;
- (void).cxx_destruct;
@end


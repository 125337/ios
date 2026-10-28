@interface MMFinderLivePaidConnectMicAudienceOperationPanelHeaderCell : UITableViewCell
{
    id /* block */ _onCancelApplyAction; // +0x8
    id /* block */ _onBidAction; // +0x10
    UIImageView * _clockImageView; // +0x18
    UILabel * _titleLabel; // +0x20
    UILabel * _descLabel; // +0x28
    UIButton * _bidButton; // +0x30
    UIButton * _cancelButton; // +0x38
    UILabel * _applyAudienceLabel; // +0x40
    UILabel * _audiencePriceLabel; // +0x48
}
+ (id)reuseId;
+ (double)cellHeightWithMaxWidth:(double)arg1;
+ (id)genDescLabel;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)initViews;
- (void)configWithWaitingCount:(unsigned long long)arg1 bidEnabled:(BOOL)arg2;
- (void)setShowBottomLabels:(BOOL)arg1;
- (id)genCommonAudienceDescLabelWithText:(id)arg1;
- (void)layoutSubviews;
- (void)onTapCancel;
- (void)onTapBid;
- (id /* block */)onCancelApplyAction;
- (void)setOnCancelApplyAction:(id /* block */)arg1;
- (id /* block */)onBidAction;
- (void)setOnBidAction:(id /* block */)arg1;
- (id)clockImageView;
- (void)setClockImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)bidButton;
- (void)setBidButton:(id)arg1;
- (id)cancelButton;
- (void)setCancelButton:(id)arg1;
- (id)applyAudienceLabel;
- (void)setApplyAudienceLabel:(id)arg1;
- (id)audiencePriceLabel;
- (void)setAudiencePriceLabel:(id)arg1;
- (void).cxx_destruct;
@end

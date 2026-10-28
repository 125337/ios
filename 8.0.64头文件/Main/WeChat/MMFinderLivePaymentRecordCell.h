@interface MMFinderLivePaymentRecordCell : MMTableViewCell
{
    BOOL _forceDarkMode; // +0x8
    id <MMFinderLivePaymentRecordCellDelegate> _cellDelegate; // +0x10
    MMCPLabel * _displayNameLabel; // +0x18
    MMFinderLivePaymentInfo * _paymentInfo; // +0x20
    UIImageView * _iconView; // +0x28
    MMCPLabel * _paymentValueLabel; // +0x30
}
+ (id)identifier;
+ (CGSize)getCellSize;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithPaymentInfo:(id)arg1 forceDarkMode:(BOOL)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)displayNameLabel;
- (void)setDisplayNameLabel:(id)arg1;
- (id)paymentInfo;
- (void)setPaymentInfo:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)paymentValueLabel;
- (void)setPaymentValueLabel:(id)arg1;
- (BOOL)forceDarkMode;
- (void)setForceDarkMode:(BOOL)arg1;
- (void).cxx_destruct;
@end

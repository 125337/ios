@interface MMFinderLivePaidConnectMicAnchorOperationPanelHeaderCell : UITableViewCell <ILinkEventExt>
{
    id /* block */ _modifyPaidConnectMicSettingAction; // +0x8
    UILabel * _titleLabel; // +0x10
    RichTextView * _summaryTextView; // +0x18
}
+ (id)ReuseIdentifier;
+ (double)cellHeightWithConnectPrice:(unsigned long long)arg1 serviceCount:(unsigned long long)arg2 cellWidth:(double)arg3;
+ (id)genSummaryRichTextView;
+ (id)cellTitleWithServiceCount:(unsigned long long)arg1;
+ (CGSize)titleLabelSizeWithText:(id)arg1 textFont:(id)arg2 andMaxWidth:(double)arg3;
+ (id)cellTextWithConnectPrice:(unsigned long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)configWithConnectPrice:(unsigned long long)arg1 serviceCount:(unsigned long long)arg2;
- (void)initViews;
- (void)layoutSubviews;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id /* block */)modifyPaidConnectMicSettingAction;
- (void)setModifyPaidConnectMicSettingAction:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)summaryTextView;
- (void)setSummaryTextView:(id)arg1;
- (void).cxx_destruct;
@end


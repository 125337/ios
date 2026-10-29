@interface MMFinderLiveConnectMicPkPanelNoneAudienceCell : UITableViewCell <MMFinderLiveConnectMicPkPanelCellBase>
{
    id <MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate; // +0x8
    UILabel * _titleLabel; // +0x10
}
+ (double)cellHeight;
+ (id)ReuseIdentifier;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1;
- (void)prepareForReuse;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end


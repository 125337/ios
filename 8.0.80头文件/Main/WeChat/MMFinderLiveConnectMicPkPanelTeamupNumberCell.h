@interface MMFinderLiveConnectMicPkPanelTeamupNumberCell : UITableViewCell <MMFinderLiveConnectMicPkPanelCellBase>
{
    id <MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate; // +0x8
    UIView * _bottomSeparatorLine; // +0x10
    UILabel * _titleLabel; // +0x18
}
+ (id)ReuseIdentifier;
+ (double)cellHeight;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)updateTeamNumber:(unsigned long long)arg1;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (id)bottomSeparatorLine;
- (void)setBottomSeparatorLine:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end

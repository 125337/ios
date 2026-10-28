@interface MMFinderLiveConnectMicPkPanelAudienceCell : MMFinderLiveConnectedMicAudienceCellView <MMFinderLiveConnectMicPkPanelCellBase>
{
    id <MMFinderLiveConnectMicPkPanelCellDelegate> cellDelegate; // +0x8
}
+ (double)cellHeight;
+ (double)applicantCellHeight;
- (void)configSubTitleLabel;
- (id)cellDelegate;
- (void)setCellDelegate:(id)arg1;
- (void).cxx_destruct;
@end

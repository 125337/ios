@interface MMBGMSelectedTabTableBaseCell : UITableViewCell
{
    id <MMBGMSelectedTabTableViewCellDelegate> _delegate; // +0x8
    id <MMBGMSelectedTabTableViewCellDataReportSource> _dataReportSource; // +0x10
    MMBGMPanelPublishContext * _publishContext; // +0x18
}
+ (id)cellID;
+ (double)cellHeight;
- (void)configDataReport;
- (id)genReportDict;
- (id)getMusicId;
- (id)getMusicInfo;
- (unsigned long long)tabType;
- (id)searchWord;
- (void)updateWithMusicData:(id)arg1 config:(id)arg2;
- (void)setIsCellSelected:(BOOL)arg1;
- (BOOL)isPlayable;
- (id)panelConfig;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dataReportSource;
- (void)setDataReportSource:(id)arg1;
- (id)publishContext;
- (void)setPublishContext:(id)arg1;
- (void).cxx_destruct;
@end


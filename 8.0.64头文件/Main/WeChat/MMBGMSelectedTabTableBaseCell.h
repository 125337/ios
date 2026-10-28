@interface MMBGMSelectedTabTableBaseCell : UITableViewCell
{
    BOOL _isCellSelected; // +0x8
    id <MMBGMSelectedTabTableViewCellDataReportSource> _dataReportSource; // +0x10
    MMBGMPanelPublishContext * _publishContext; // +0x18
    id <MMBGMSelectedMusicDataProtocol> _musicData; // +0x20
    MMBGMSelectedTabTableViewCellConfig * _config; // +0x28
    MMBGMSelectedConfig * _globalConfig; // +0x30
}
+ (id)cellID;
+ (double)cellHeight;
- (void)configDataReport;
- (id)genReportDict;
- (unsigned long long)tabType;
- (id)searchWord;
- (void)updateWithMusicData:(id)arg1 config:(id)arg2 globalConfig:(id)arg3;
- (void)setIsCellSelected:(BOOL)arg1;
- (BOOL)isPlayable;
- (id)panelConfig;
- (id)dataReportSource;
- (void)setDataReportSource:(id)arg1;
- (id)publishContext;
- (void)setPublishContext:(id)arg1;
- (BOOL)isCellSelected;
- (id)musicData;
- (void)setMusicData:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)globalConfig;
- (void)setGlobalConfig:(id)arg1;
- (void).cxx_destruct;
@end

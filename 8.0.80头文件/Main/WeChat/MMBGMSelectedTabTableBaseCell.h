@interface MMBGMSelectedTabTableBaseCell : UITableViewCell
{
    BOOL _isCellSelected; // +0x8
    id <MMBGMSelectedTabTableViewCellDataReportSource> _dataReportSource; // +0x10
    MMBGMPanelPublishContext * _publishContext; // +0x18
    long long _snsEditSource; // +0x20
    unsigned long long _sourceTabType; // +0x28
    id <MMBGMSelectedMusicDataProtocol> _musicData; // +0x30
    MMBGMSelectedTabTableViewCellConfig * _config; // +0x38
    MMBGMSelectedConfig * _globalConfig; // +0x40
}
+ (id)cellID;
+ (double)cellHeight;
- (void)configSnsDataReport;
- (id)genSnsReportDict;
- (void)configDataReport;
- (id)genReportDict;
- (unsigned long long)tabType;
- (id)searchWord;
- (void)updateWithMusicData:(id)arg1 config:(id)arg2 globalConfig:(id)arg3 sourceTabType:(unsigned long long)arg4;
- (void)setIsCellSelected:(BOOL)arg1;
- (BOOL)isPlayable;
- (id)panelConfig;
- (id)dataReportSource;
- (void)setDataReportSource:(id)arg1;
- (id)publishContext;
- (void)setPublishContext:(id)arg1;
- (long long)snsEditSource;
- (void)setSnsEditSource:(long long)arg1;
- (BOOL)isCellSelected;
- (unsigned long long)sourceTabType;
- (void)setSourceTabType:(unsigned long long)arg1;
- (id)musicData;
- (void)setMusicData:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)globalConfig;
- (void)setGlobalConfig:(id)arg1;
- (void).cxx_destruct;
@end

@interface MMBGMSelectedTabViewModel : NSObject <MMBGMTabViewModelProtocol>
{
    id <MMBGMSelectedTabViewModelDelegate> _delegate; // +0x8
    MMBGMSelectedConfig * _config; // +0x10
    MMBGMPanelPublishContext * _publishContext; // +0x18
    MMBGMSelectedTabViewModelParams * _optionalParams; // +0x20
}
- (id)tabTitle;
- (unsigned long long)tabType;
- (void)loadData;
- (BOOL)hasMoreData;
- (void)loadMoreData;
- (unsigned long long)dataCount;
- (id)dataAtIndex:(unsigned long long)arg1;
- (void)addMusicData:(id)arg1;
- (void)setMusicDataToFirst:(id)arg1;
- (BOOL)isReccommentdTabModel;
- (BOOL)shouldInsertSelectedMusicDataToFirst;
- (unsigned long long)indexOfMusicInfo:(id)arg1;
- (unsigned long long)getMaterialDuration;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)publishContext;
- (void)setPublishContext:(id)arg1;
- (id)optionalParams;
- (void)setOptionalParams:(id)arg1;
- (void).cxx_destruct;
@end

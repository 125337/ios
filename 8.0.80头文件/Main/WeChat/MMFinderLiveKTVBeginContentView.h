@interface MMFinderLiveKTVBeginContentView : MMFinderLiveKTVBaseView
{
    id /* block */ _requestSingerHeaderUIDescCallback; // +0x8
    NSString * _currUniqueId; // +0x10
    unsigned long long _contentMode; // +0x18
    MMUILabel * _songNameLabel; // +0x20
    MMUILabel * _descLabel; // +0x28
}
- (id)initWithTaskId:(id)arg1 mode:(unsigned long long)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutSongNameLabel;
- (void)updateSongNameLabelOrigin;
- (void)layoutDescLabel;
- (CGRect)getSingerHeaderRect;
- (BOOL)updateCurrUnique;
- (void)refreshSongNameLabel;
- (void)begin;
- (void)onCurrSongItemBasicInfoUpdated;
- (void)advanceDisplay;
- (void)onCurrSongNameUpdated;
- (void)clearStates;
- (id /* block */)requestSingerHeaderUIDescCallback;
- (void)setRequestSingerHeaderUIDescCallback:(id /* block */)arg1;
- (id)currUniqueId;
- (void)setCurrUniqueId:(id)arg1;
- (unsigned long long)contentMode;
- (void)setContentMode:(unsigned long long)arg1;
- (id)songNameLabel;
- (void)setSongNameLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end

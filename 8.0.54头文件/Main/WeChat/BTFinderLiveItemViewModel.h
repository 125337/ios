@interface BTFinderLiveItemViewModel : BTFinderItemViewModel
{
    BOOL _updateDataItemFinished; // +0x8
    NSString * _mediaUrl; // +0x10
    NSData * _joinLiveBuffer; // +0x18
    unsigned long long _autoPlayStartTs; // +0x20
    unsigned long long _exposeStartTs; // +0x28
    unsigned long long _validRatioExposeStartTs; // +0x30
    id /* block */ _liveEndAction; // +0x38
    WCFinderDataItem * _dataItem; // +0x40
    NSMutableArray * _completions; // +0x48
}
+ (id)cellIdentifier;
- (id)initWithBTRecommendFinderData:(id)arg1;
- (void)updateFinderDataItem;
- (void)getFinderDataItem:(id /* block */)arg1;
- (id)finderExportId;
- (BOOL)canShowTagView;
- (BOOL)enableAutoPlay;
- (void)onClearDataForExitLiveWithLiveTask:(id)arg1;
- (void)onLiveTaskUpdateStatus:(id)arg1;
- (id)mediaUrl;
- (void)setMediaUrl:(id)arg1;
- (id)joinLiveBuffer;
- (void)setJoinLiveBuffer:(id)arg1;
- (unsigned long long)autoPlayStartTs;
- (void)setAutoPlayStartTs:(unsigned long long)arg1;
- (unsigned long long)exposeStartTs;
- (void)setExposeStartTs:(unsigned long long)arg1;
- (unsigned long long)validRatioExposeStartTs;
- (void)setValidRatioExposeStartTs:(unsigned long long)arg1;
- (id /* block */)liveEndAction;
- (void)setLiveEndAction:(id /* block */)arg1;
- (BOOL)updateDataItemFinished;
- (void)setUpdateDataItemFinished:(BOOL)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)completions;
- (void)setCompletions:(id)arg1;
- (void).cxx_destruct;
@end


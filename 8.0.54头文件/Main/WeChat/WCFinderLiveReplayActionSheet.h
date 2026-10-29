@interface WCFinderLiveReplayActionSheet : MMScrollActionSheet
{
    MMFinderLiveReplayTask * _replayLiveTask; // +0x8
}
- (id)initWithLiveTask:(id)arg1;
- (void)loadData;
- (id)loadItemArray;
- (BOOL)isConcertTicket;
- (id)transparentViewBackgroundColor;
- (id)bottomPadddingViewBackgroundColor;
- (id)titleLabelColor;
- (id)cancelButtonTitleColor;
- (id)cancelButtonBackgroundColor;
- (id)containerViewBlurBackgroundColor;
- (id)seperatorBackgroundColor;
- (id)replayLiveTask;
- (void)setReplayLiveTask:(id)arg1;
- (void).cxx_destruct;
@end


@interface WCFinderHotWordsFeedViewModel : NSObject
{
    int _scene; // +0x8
    int _streamScene; // +0xc
    id <WCFinderHotWordsFeedViewModelDelegate> _delegate; // +0x10
    unsigned long long _state; // +0x18
    unsigned long long _refreshTime; // +0x20
    WCFinderHotWordsTriggerInfo * _triggerInfo; // +0x28
    NSMutableArray * _mutableContentVMS; // +0x30
    NSData * _lastBuff; // +0x38
    NSString * _dataScene; // +0x40
}
- (id)initWithTriggerInfo:(id)arg1 commentScene:(int)arg2 dataScene:(id)arg3 streamScene:(int)arg4;
- (id)init;
- (id)contentVMS;
- (id)displayTitle;
- (void)requestFirstPage;
- (void)requestNextPage;
- (void)appendDataItem:(id)arg1;
- (BOOL)couldFetchNextPage;
- (BOOL)canLoadMore;
- (id)listViewModelWithScene:(int)arg1 dataScene:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)triggerInfo;
- (void)setTriggerInfo:(id)arg1;
- (id)mutableContentVMS;
- (void)setMutableContentVMS:(id)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (id)dataScene;
- (void)setDataScene:(id)arg1;
- (int)streamScene;
- (void)setStreamScene:(int)arg1;
- (void).cxx_destruct;
@end

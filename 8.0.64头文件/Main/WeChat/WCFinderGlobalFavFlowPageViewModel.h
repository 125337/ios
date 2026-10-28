@interface WCFinderGlobalFavFlowPageViewModel : NSObject <WCFinderDataItemExt>
{
    BOOL _continueFlag; // +0x8
    WCFinderTopicInfo * _topicInfo; // +0x10
    id <WCFinderGlobalFavFlowPageViewModelDelegate> _delegate; // +0x18
    id <WCFinderGlobalFavFeedTopicListDelegate> _topicListDelegate; // +0x20
    NSMutableArray * _contentVMArray; // +0x28
    unsigned long long _refreshTime; // +0x30
    unsigned long long _finderTotalCount; // +0x38
    unsigned long long _megavideoTotalCount; // +0x40
    unsigned long long _totalCount; // +0x48
    unsigned long long _state; // +0x50
    long long _noMoreStyle; // +0x58
    NSData * _lastBuf; // +0x60
    WCFinderBaseCgi * _cgi; // +0x68
}
+ (id)pageViewModelWithTopicInfo:(id)arg1;
- (id)init;
- (id)initWithTopicInfo:(id)arg1;
- (void)dealloc;
- (unsigned long long)dataCount;
- (id)contentVMAtIndex:(unsigned long long)arg1;
- (id)contentVMFromTid:(id)arg1;
- (long long)indexRowForContentVM:(id)arg1;
- (long long)noMoreStyle;
- (BOOL)hasMoreData;
- (void)fetchServerDataWithLastBuffer:(id)arg1;
- (void)fetchFirstPageData;
- (void)fetchNextPageData;
- (void)getLocalFirstPageData;
- (id)generateSearchlistViewModel;
- (BOOL)shouldInsertFeedToList:(id)arg1;
- (void)deleteContentVM:(id)arg1;
- (id)topicInfo;
- (void)setTopicInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)topicListDelegate;
- (void)setTopicListDelegate:(id)arg1;
- (id)contentVMArray;
- (void)setContentVMArray:(id)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (unsigned long long)finderTotalCount;
- (void)setFinderTotalCount:(unsigned long long)arg1;
- (unsigned long long)megavideoTotalCount;
- (void)setMegavideoTotalCount:(unsigned long long)arg1;
- (unsigned long long)totalCount;
- (void)setTotalCount:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (void)setNoMoreStyle:(long long)arg1;
- (id)lastBuf;
- (void)setLastBuf:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)cgi;
- (void)setCgi:(id)arg1;
- (void).cxx_destruct;
@end

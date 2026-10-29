@interface WCFinderInspirationSquareFlowViewModel : NSObject
{
    BOOL _continueFlag; // +0x8
    int _tabId; // +0xc
    int _fromCommentScene; // +0x10
    id <WCFinderInspirationSquareFlowViewModelDelegate> _delegate; // +0x18
    long long _dataState; // +0x20
    NSMutableArray * _dataArray; // +0x28
    NSString * _byPassInfo; // +0x30
    NSString * _streamByPassInfo; // +0x38
    NSData * _lastBuffer; // +0x40
    NSMutableSet * _dataIdSet; // +0x48
}
- (id)initWithTabId:(int)arg1 byPassInfo:(id)arg2;
- (void)fetchData;
- (void)loadData;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)dataState;
- (void)setDataState:(long long)arg1;
- (id)dataArray;
- (void)setDataArray:(id)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (id)streamByPassInfo;
- (void)setStreamByPassInfo:(id)arg1;
- (int)tabId;
- (void)setTabId:(int)arg1;
- (int)fromCommentScene;
- (void)setFromCommentScene:(int)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)dataIdSet;
- (void)setDataIdSet:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCFinderBrandProfileViewModel : NSObject <WCFinderUserPageFetchExt>
{
    BOOL _continueFlag; // +0x8
    BOOL _isRequestingData; // +0x9
    id <WCFinderBrandProfileViewModelDelegate> _delegate; // +0x10
    unsigned long long _refreshTime; // +0x18
    NSString * _bizUsername; // +0x20
    NSDictionary * _jumpInfoDict; // +0x28
    NSMutableArray * _dataArray; // +0x30
    NSMutableSet * _containedTidSet; // +0x38
    unsigned long long _state; // +0x40
    NSData * _lastBuffer; // +0x48
    FinderBizInfo_BizInfo * _bizInfo; // +0x50
}
- (id)initWithBizUsername:(id)arg1 bizInfo:(id)arg2 brandFinderJumpInfo:(id)arg3 dataArray:(id)arg4 lastBuffer:(id)arg5 continueFlag:(BOOL)arg6;
- (unsigned long long)numberOfItem;
- (id)contentVMAtIndex:(long long)arg1;
- (long long)contentIndexOfTid:(id)arg1;
- (id)contentVMWithTid:(id)arg1;
- (void)requestDataFromTop;
- (void)requestNextData;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (void)updateState;
- (id)tranformDataItemArray:(id)arg1;
- (void)addContainedTid:(id)arg1;
- (id)filterDataArray:(id)arg1;
- (void)onFinderUserPageFetchSuccess:(id)arg1;
- (void)onFinderUserPageFetchFail:(int)arg1;
- (id)dataArray;
- (id)containedTidSet;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (id)jumpInfoDict;
- (void)setJumpInfoDict:(id)arg1;
- (void)setDataArray:(id)arg1;
- (void)setContainedTidSet:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (BOOL)isRequestingData;
- (void)setIsRequestingData:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)bizInfo;
- (void)setBizInfo:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCFinderTopicPageViewModel : NSObject
{
    BOOL _continueFlag; // +0x8
    int _commentScene; // +0xc
    int _topicType; // +0x10
    int _tabType; // +0x14
    int _fromType; // +0x18
    id <WCFinderTopicPageViewModelDelegate> _delegate; // +0x20
    NSMutableArray * _contentVMArray; // +0x28
    unsigned long long _refreshTime; // +0x30
    NSString * _topicTitle; // +0x38
    WCFinderTopicInfo * _topicInfo; // +0x40
    FinderTopicBgmInfo * _bgmInfo; // +0x48
    WCFinderEventTabInfo * _tabInfo; // +0x50
    unsigned long long _filterIndex; // +0x58
    unsigned long long _state; // +0x60
    NSString * _encryptedTopicId; // +0x68
    NSString * _refObjectId; // +0x70
    NSString * _latestRequestID; // +0x78
    NSData * _lastBuffer; // +0x80
    NSData * _byPassInfo; // +0x88
}
- (id)initWithTopicParams:(id)arg1 tabInfo:(id)arg2 filterIndex:(unsigned long long)arg3 commentScene:(int)arg4;
- (void)requestFirstPageData;
- (void)requestNextPageData;
- (id)generateTopicListDetailViewModel;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (void)updateState;
- (id)contentVMArray;
- (id)filterInfo;
- (id)streamReportPageTag;
- (id)genTopicPageTagTitle;
- (unsigned long long)getReportMusicType;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setContentVMArray:(id)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (id)topicTitle;
- (void)setTopicTitle:(id)arg1;
- (id)topicInfo;
- (void)setTopicInfo:(id)arg1;
- (id)bgmInfo;
- (void)setBgmInfo:(id)arg1;
- (id)tabInfo;
- (void)setTabInfo:(id)arg1;
- (unsigned long long)filterIndex;
- (void)setFilterIndex:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (int)topicType;
- (void)setTopicType:(int)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (int)fromType;
- (void)setFromType:(int)arg1;
- (id)encryptedTopicId;
- (void)setEncryptedTopicId:(id)arg1;
- (id)refObjectId;
- (void)setRefObjectId:(id)arg1;
- (id)latestRequestID;
- (void)setLatestRequestID:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (void).cxx_destruct;
@end

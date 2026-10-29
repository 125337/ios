@interface WCFinderEventPageViewModel : NSObject <WCFinderPostDataItemExt, WCFinderTopicDataKeyExt, WCFinderDataItemExt>
{
    BOOL _continueFlag; // +0x8
    int _commentScene; // +0xc
    int _topicType; // +0x10
    int _tabType; // +0x14
    int _fromType; // +0x18
    id <WCFinderEventPageViewModelDelegate> _delegate; // +0x20
    NSMutableArray * _contentVMArray; // +0x28
    NSString * _topicTitle; // +0x30
    WCFinderEventTabInfo * _eventTabInfo; // +0x38
    unsigned long long _filterIndex; // +0x40
    unsigned long long _state; // +0x48
    unsigned long long _eventTopicId; // +0x50
    NSString * _encryptedTopicId; // +0x58
    NSString * _refObjectId; // +0x60
    NSString * _latestRequestID; // +0x68
    WCFinderTopicInfo * _topicInfo; // +0x70
    FinderTopicBgmInfo * _bgmInfo; // +0x78
    FinderEventInfo * _eventInfo; // +0x80
    NSData * _lastBuffer; // +0x88
    NSData * _byPassInfo; // +0x90
}
- (id)initWithTopicParams:(id)arg1 eventTabInfo:(id)arg2 filterIndex:(unsigned long long)arg3 commentScene:(int)arg4 byPassInfo:(id)arg5;
- (void)requestFirstPageData;
- (void)requestNextPageData;
- (id)generateTopicListDetailViewModel;
- (void)setTopicInfo:(id)arg1;
- (id)eventIdStr;
- (unsigned long long)sortType;
- (void)requestDataWithPullType:(unsigned long long)arg1;
- (void)updateState;
- (void)removeFeedWithTid:(id)arg1;
- (id)contentVMArray;
- (id)filterInfo;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (void)fakeInsertPostEventDataItem:(id)arg1;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)finderFeedOfTopicBeDeleteWithTid:(id)arg1;
- (void)finderTopicFeedOrderChanged:(unsigned long long)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setContentVMArray:(id)arg1;
- (id)topicTitle;
- (void)setTopicTitle:(id)arg1;
- (id)eventTabInfo;
- (void)setEventTabInfo:(id)arg1;
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
- (unsigned long long)eventTopicId;
- (void)setEventTopicId:(unsigned long long)arg1;
- (id)encryptedTopicId;
- (void)setEncryptedTopicId:(id)arg1;
- (id)refObjectId;
- (void)setRefObjectId:(id)arg1;
- (id)latestRequestID;
- (void)setLatestRequestID:(id)arg1;
- (id)topicInfo;
- (id)bgmInfo;
- (void)setBgmInfo:(id)arg1;
- (id)eventInfo;
- (void)setEventInfo:(id)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (void).cxx_destruct;
@end


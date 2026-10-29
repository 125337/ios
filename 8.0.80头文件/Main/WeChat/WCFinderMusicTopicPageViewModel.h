@interface WCFinderMusicTopicPageViewModel : NSObject <WCFinderTopicDataKeyExt, WCFinderPostDataItemExt, WCFinderDataItemExt>
{
    BOOL _shouldShowRingtoneEntry; // +0x8
    BOOL _continueFlag; // +0x9
    int _tabType; // +0xc
    int _commentScene; // +0x10
    int _topicType; // +0x14
    int _fromType; // +0x18
    int _getTopicInfoFlag; // +0x1c
    id <WCFinderMusicTopicPageViewModelDelegate> _delegate; // +0x20
    NSMutableArray * _contentVMArray; // +0x28
    NSString * _topicTitle; // +0x30
    WCFinderEventTabInfo * _eventTabInfo; // +0x38
    unsigned long long _state; // +0x40
    WCFinderMusicTopicDataProvider * _dataProvider; // +0x48
    FinderMusicTopicInfo * _musicInfo; // +0x50
    unsigned long long _musicTopicId; // +0x58
    NSString * _encryptedTopicId; // +0x60
    NSString * _refObjectId; // +0x68
    NSString * _latestRequestID; // +0x70
    WCFinderTopicInfo * _topicInfo; // +0x78
    FinderTopicBgmInfo * _bgmInfo; // +0x80
    FinderEventInfo * _eventInfo; // +0x88
    NSData * _lastBuffer; // +0x90
    NSMutableSet * _feedIdSet; // +0x98
    NSData * _byPassInfo; // +0xa0
}
- (id)initWithTopicParams:(id)arg1 eventTabInfo:(id)arg2 commentScene:(int)arg3 byPassInfo:(id)arg4 musicInfo:(id)arg5;
- (id)dataProvider;
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
- (id)feedIdSet;
- (void)onFinderPostSessionStartUpload:(id)arg1;
- (void)fakeInsertPostEventDataItem:(id)arg1;
- (void)onFinderPostSessionUpLoadSuccessful:(id)arg1;
- (void)onFinderPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (long long)itemIndexForTid:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setContentVMArray:(id)arg1;
- (id)topicTitle;
- (void)setTopicTitle:(id)arg1;
- (id)eventTabInfo;
- (void)setEventTabInfo:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (BOOL)shouldShowRingtoneEntry;
- (void)setShouldShowRingtoneEntry:(BOOL)arg1;
- (void)setDataProvider:(id)arg1;
- (id)musicInfo;
- (void)setMusicInfo:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (int)topicType;
- (void)setTopicType:(int)arg1;
- (int)fromType;
- (void)setFromType:(int)arg1;
- (unsigned long long)musicTopicId;
- (void)setMusicTopicId:(unsigned long long)arg1;
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
- (void)setFeedIdSet:(id)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (int)getTopicInfoFlag;
- (void)setGetTopicInfoFlag:(int)arg1;
- (void).cxx_destruct;
@end

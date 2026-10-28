@interface WCFinderTopicViewModel : NSObject <ForwardMessageLogicDelegate, WCCommitViewResultDelegate>
{
    BOOL _queryContinueFlag; // +0x8
    int _topicType; // +0xc
    int _fromType; // +0x10
    id <WCFinderTopicViewModelDelegate> _delegate; // +0x18
    WCFinderTopicRouteParams * _params; // +0x20
    NSString * _topicDetailLocation; // +0x28
    WCFinderTopicInfo * _topicInfo; // +0x30
    unsigned long long _refreshTime; // +0x38
    FinderTopicBgmInfo * _bgmInfo; // +0x40
    unsigned long long _eventTopicId; // +0x48
    NSString * _encryptedTopicId; // +0x50
    NSArray * _tabInfoArray; // +0x58
    unsigned long long _defaultIndex; // +0x60
    unsigned long long _state; // +0x68
    double _menuExpTime; // +0x70
    NSString * _latestQueryText; // +0x78
    NSString * _latestRequestID; // +0x80
    NSData * _lastBuffer; // +0x88
    unsigned long long _topicTotalCount; // +0x90
    NSString * _latitude; // +0x98
    NSString * _longitude; // +0xa0
    NSString * _refObjectid; // +0xa8
    ForwardMessageLogicController * _forwardLogic; // +0xb0
    FinderLocation * _location; // +0xb8
    unsigned long long _patMusicPermission; // +0xc0
}
- (id)initWithParams:(id)arg1;
- (void)resetSearchStatus;
- (void)requestTopicTabList;
- (void)updateTabInfoArray;
- (id)defaultTabInfoArray;
- (id)topicTabInfoAtIndex:(unsigned long long)arg1;
- (id)topicTabInfoWithType:(int)arg1;
- (long long)indexOfTabType:(int)arg1;
- (id)getHeaderImageUrl;
- (unsigned long long)getTopicTotalCount;
- (unsigned long long)getTopicTotalWatchCount;
- (id)getTopicTitle;
- (id)getTopicLocation;
- (id)getTopicWordsTopicExt;
- (void)shareToFriend:(id)arg1;
- (void)shareToMoment:(id)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (unsigned long long)getReportMusicType;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (id)getTopicsArray;
- (int)feedViewControllerScene;
- (id)getHeaderOptionParams;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)topicDetailLocation;
- (void)setTopicDetailLocation:(id)arg1;
- (id)topicInfo;
- (void)setTopicInfo:(id)arg1;
- (int)topicType;
- (void)setTopicType:(int)arg1;
- (unsigned long long)refreshTime;
- (void)setRefreshTime:(unsigned long long)arg1;
- (id)bgmInfo;
- (void)setBgmInfo:(id)arg1;
- (unsigned long long)eventTopicId;
- (void)setEventTopicId:(unsigned long long)arg1;
- (id)encryptedTopicId;
- (void)setEncryptedTopicId:(id)arg1;
- (id)tabInfoArray;
- (void)setTabInfoArray:(id)arg1;
- (unsigned long long)defaultIndex;
- (void)setDefaultIndex:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (double)menuExpTime;
- (void)setMenuExpTime:(double)arg1;
- (id)latestQueryText;
- (void)setLatestQueryText:(id)arg1;
- (id)latestRequestID;
- (void)setLatestRequestID:(id)arg1;
- (BOOL)queryContinueFlag;
- (void)setQueryContinueFlag:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (unsigned long long)topicTotalCount;
- (void)setTopicTotalCount:(unsigned long long)arg1;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)refObjectid;
- (void)setRefObjectid:(id)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (int)fromType;
- (void)setFromType:(int)arg1;
- (unsigned long long)patMusicPermission;
- (void)setPatMusicPermission:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

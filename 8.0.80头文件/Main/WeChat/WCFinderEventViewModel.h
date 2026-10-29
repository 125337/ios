@interface WCFinderEventViewModel : NSObject <ForwardMessageLogicDelegate, WCCommitViewResultDelegate, WCFinderTopicDataKeyExt>
{
    int _topicType; // +0x8
    int _fromType; // +0xc
    id <WCFinderEventViewModelDelegate> _delegate; // +0x10
    NSString * _topicDetailLocation; // +0x18
    WCFinderTopicInfo * _topicInfo; // +0x20
    unsigned long long _refreshTime; // +0x28
    FinderTopicBgmInfo * _bgmInfo; // +0x30
    unsigned long long _eventTopicId; // +0x38
    NSString * _encryptedTopicId; // +0x40
    NSArray * _tabInfoArray; // +0x48
    WCFinderTopicRouteParams * _params; // +0x50
    unsigned long long _state; // +0x58
    double _menuExpTime; // +0x60
    NSString * _refObjectid; // +0x68
    NSString * _latestQueryText; // +0x70
    unsigned long long _topicTotalCount; // +0x78
    ForwardMessageLogicController * _forwardLogic; // +0x80
    FinderLocation * _location; // +0x88
    unsigned long long _patMusicPermission; // +0x90
}
- (id)init;
- (void)setTopicInfo:(id)arg1;
- (id)streamReportPageTag;
- (id)genTopicPageTagTitle;
- (void)resetSearchStatus;
- (unsigned long long)getTopicTotalCount;
- (void)shareToFriend:(id)arg1;
- (void)shareToMoment:(id)arg1;
- (id)getMusicLyricsWording;
- (void)requestEventTabList;
- (void)updateTabInfoArray;
- (id)defaultTabInfoArray;
- (void)closeEvent;
- (id)eventTabInfoAtIndex:(unsigned long long)arg1;
- (long long)indexOfTabType:(int)arg1;
- (id)eventTabInfoWithType:(unsigned long long)arg1;
- (BOOL)hasVideoTemplateEntrance;
- (unsigned int)videoTemplatePermittedPublishMethodType;
- (unsigned long long)templateType;
- (id)templateID;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (unsigned long long)getReportMusicType;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (id)getTopicsArray;
- (int)feedViewControllerScene;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)topicDetailLocation;
- (void)setTopicDetailLocation:(id)arg1;
- (id)topicInfo;
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
- (id)params;
- (void)setParams:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (double)menuExpTime;
- (void)setMenuExpTime:(double)arg1;
- (id)refObjectid;
- (void)setRefObjectid:(id)arg1;
- (id)latestQueryText;
- (void)setLatestQueryText:(id)arg1;
- (unsigned long long)topicTotalCount;
- (void)setTopicTotalCount:(unsigned long long)arg1;
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

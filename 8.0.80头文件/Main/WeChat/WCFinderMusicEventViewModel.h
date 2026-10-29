@interface WCFinderMusicEventViewModel : NSObject <ForwardMessageLogicDelegate, WCCommitViewResultDelegate, WCFinderTopicDataKeyExt>
{
    BOOL _queryContinueFlag; // +0x8
    int _topicType; // +0xc
    int _tabType; // +0x10
    int _getTopicInfoFlag; // +0x14
    id <WCFinderMusicEventViewModelDelegate> _delegate; // +0x18
    WCFinderTopicInfo * _topicInfo; // +0x20
    unsigned long long _refreshTime; // +0x28
    unsigned long long _musicTopicId; // +0x30
    NSString * _patTopicStr; // +0x38
    NSString * _encryptedTopicId; // +0x40
    NSArray * _tabInfoArray; // +0x48
    unsigned long long _state; // +0x50
    double _menuExpTime; // +0x58
    MMListenLikeResponse * _likeFeedResp; // +0x60
    RecommendedMusicInfo * _patMusicInfo; // +0x68
    FinderVideoTemplateInfo * _videoTemplateInfo; // +0x70
    NSString * _latestQueryText; // +0x78
    unsigned long long _topicTotalCount; // +0x80
    ForwardMessageLogicController * _forwardLogic; // +0x88
    WCFinderTopicRouteParams * _params; // +0x90
    MusicRelatedRecommendInfo * _relatedMusicInfo; // +0x98
}
- (id)initWithParams:(id)arg1;
- (void)setTopicInfo:(id)arg1;
- (void)updateMusicTemplateInfo;
- (id)getPatPostMusicInfo;
- (void)updatePatMusicInfoByInfo:(id)arg1;
- (id)getMusicLyricsWording:(id)arg1;
- (unsigned long long)getTopicTotalCount;
- (id)genReportDict;
- (void)shareToFriend:(id)arg1;
- (void)shareToMoment:(id)arg1;
- (long long)genShareMomentType;
- (unsigned long long)genFinderShareItemType;
- (void)requestEventTabListAndRelatedMusics;
- (void)updateTabInfoArray;
- (id)defaultTabInfoArray;
- (id)eventTabInfoAtIndex:(unsigned long long)arg1;
- (long long)indexOfTabType:(int)arg1;
- (id)eventTabInfoWithType:(unsigned long long)arg1;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDoneForwardForForwardView:(id)arg1;
- (id)getTopicsArray;
- (int)feedViewControllerScene;
- (void)likeFeed:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)updateLikeState:(BOOL)arg1;
- (id)getMusicLyricsWording;
- (id)bgmInfo;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)topicInfo;
- (int)topicType;
- (void)setTopicType:(int)arg1;
- (unsigned long long)refreshTime;
- (unsigned long long)musicTopicId;
- (void)setMusicTopicId:(unsigned long long)arg1;
- (id)patTopicStr;
- (void)setPatTopicStr:(id)arg1;
- (id)encryptedTopicId;
- (void)setEncryptedTopicId:(id)arg1;
- (id)tabInfoArray;
- (void)setTabInfoArray:(id)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (double)menuExpTime;
- (void)setMenuExpTime:(double)arg1;
- (id)likeFeedResp;
- (void)setLikeFeedResp:(id)arg1;
- (id)patMusicInfo;
- (void)setPatMusicInfo:(id)arg1;
- (id)videoTemplateInfo;
- (void)setVideoTemplateInfo:(id)arg1;
- (id)latestQueryText;
- (void)setLatestQueryText:(id)arg1;
- (BOOL)queryContinueFlag;
- (void)setQueryContinueFlag:(BOOL)arg1;
- (unsigned long long)topicTotalCount;
- (void)setTopicTotalCount:(unsigned long long)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)relatedMusicInfo;
- (void)setRelatedMusicInfo:(id)arg1;
- (int)getTopicInfoFlag;
- (void)setGetTopicInfoFlag:(int)arg1;
- (void).cxx_destruct;
@end

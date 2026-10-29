@interface WCFinderStatMetaModel : NSObject
{
    BOOL _autoPlay; // +0x8
    BOOL _clickShare; // +0x9
    BOOL _clickComment; // +0xa
    BOOL _clickHeader; // +0xb
    BOOL _followStatus; // +0xc
    BOOL _likeStatus; // +0xd
    BOOL _favStatus; // +0xe
    BOOL _fastSlip; // +0xf
    BOOL _notInterestAction; // +0x10
    BOOL _dragProgressBar; // +0x11
    BOOL _clickColumnCard; // +0x12
    BOOL _clickFullVideo; // +0x13
    int _exposeEndType; // +0x14
    NSString * _tid; // +0x18
    NSString * _nonceID; // +0x20
    unsigned long long _liveId; // +0x28
    unsigned long long _collectionId; // +0x30
    unsigned long long _feedScene; // +0x38
    unsigned long long _commentScene; // +0x40
    NSString * _feedUsername; // +0x48
    NSString * _sessionBuffer; // +0x50
    NSString * _megavideoId; // +0x58
    NSString * _megavideoNonceId; // +0x60
    NSString * _playUuid; // +0x68
    double _recvTimeMs; // +0x70
    double _exposeStartTimeMs; // +0x78
    double _exposeEndTimeMS; // +0x80
    NSString * _recommendReason; // +0x88
    NSString * _innerRecommendReason; // +0x90
    NSString * _musicSongId; // +0x98
    NSString * _musicSourceFeedId; // +0xa0
    unsigned long long _readType; // +0xa8
    unsigned long long _sessionPos; // +0xb0
    OfflineModeStrategy * _offlineData; // +0xb8
    double _startPlayProgress; // +0xc0
    double _videoLength; // +0xc8
    double _feedStayStartTime; // +0xd0
    double _feedStayEndTime; // +0xd8
    double _feedStayStartTimeInMs; // +0xe0
    double _feedStayEndTimeInMs; // +0xe8
    unsigned long long _startPlayTime; // +0xf0
    unsigned long long _endPlayTime; // +0xf8
    double _feedActualPlayingTimeInMs; // +0x100
    double _lastPlayTime; // +0x108
    unsigned long long _photoTurningIndex; // +0x110
    unsigned long long _videoReplayTimes; // +0x118
    double _maxPlayProgress; // +0x120
    unsigned long long _feedForwardCount; // +0x128
    unsigned long long _commentTimes; // +0x130
    unsigned long long _sortId; // +0x138
    double _maxVidPlayLen; // +0x140
    unsigned long long _clickTopic; // +0x148
    unsigned long long _clickExpandText; // +0x150
    unsigned long long _clickForwardToMoments; // +0x158
    unsigned long long _clickPoi; // +0x160
    unsigned long long _clickCollapseText; // +0x168
    unsigned long long _clickCommentLike; // +0x170
    unsigned long long _clickMore; // +0x178
    unsigned long long _clickComplaint; // +0x180
    unsigned long long _mediaType; // +0x188
    double _fixedMaxVidPlayProgress; // +0x190
    double _lastVidPlayProgress; // +0x198
    NSMutableArray * _actionTypsArray; // +0x1a0
    NSMutableSet * _playSecondSet; // +0x1a8
    unsigned long long _liveIconObjectID; // +0x1b0
    unsigned long long _liveIconStartExposeTs; // +0x1b8
    NSMutableArray * _commentEnterTypeArray; // +0x1c0
    PicStats * _picStat; // +0x1c8
    OriginCommentInfo * _commentInfo; // +0x1d0
    SessionReportAdExtraInfo * _reportAdExtraInfo; // +0x1d8
}
- (id)genStatObject;
- (id)genReportJson;
- (id)convertCamelDictToUnderLine:(id)arg1;
- (id)actionTypsArray;
- (id)commentEnterTypeArray;
- (void)setPhotoTurningIndex:(unsigned long long)arg1;
- (void)setMaxPlayProgress:(double)arg1;
- (id)getBitFeature;
- (long long)getPhotoTurningCountBit;
- (long long)getVideoMaxPlayProgressBit;
- (long long)getFeedMaxStayTimeBit;
- (long long)getReplayCountBit;
- (id)description;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (unsigned long long)collectionId;
- (void)setCollectionId:(unsigned long long)arg1;
- (unsigned long long)feedScene;
- (void)setFeedScene:(unsigned long long)arg1;
- (unsigned long long)commentScene;
- (void)setCommentScene:(unsigned long long)arg1;
- (id)feedUsername;
- (void)setFeedUsername:(id)arg1;
- (id)sessionBuffer;
- (void)setSessionBuffer:(id)arg1;
- (id)megavideoId;
- (void)setMegavideoId:(id)arg1;
- (id)megavideoNonceId;
- (void)setMegavideoNonceId:(id)arg1;
- (id)playUuid;
- (void)setPlayUuid:(id)arg1;
- (double)recvTimeMs;
- (void)setRecvTimeMs:(double)arg1;
- (double)exposeStartTimeMs;
- (void)setExposeStartTimeMs:(double)arg1;
- (double)exposeEndTimeMS;
- (void)setExposeEndTimeMS:(double)arg1;
- (int)exposeEndType;
- (void)setExposeEndType:(int)arg1;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg1;
- (id)innerRecommendReason;
- (void)setInnerRecommendReason:(id)arg1;
- (id)musicSongId;
- (void)setMusicSongId:(id)arg1;
- (id)musicSourceFeedId;
- (void)setMusicSourceFeedId:(id)arg1;
- (unsigned long long)readType;
- (void)setReadType:(unsigned long long)arg1;
- (unsigned long long)sessionPos;
- (void)setSessionPos:(unsigned long long)arg1;
- (id)offlineData;
- (void)setOfflineData:(id)arg1;
- (double)startPlayProgress;
- (void)setStartPlayProgress:(double)arg1;
- (double)videoLength;
- (void)setVideoLength:(double)arg1;
- (double)feedStayStartTime;
- (void)setFeedStayStartTime:(double)arg1;
- (double)feedStayEndTime;
- (void)setFeedStayEndTime:(double)arg1;
- (double)feedStayStartTimeInMs;
- (void)setFeedStayStartTimeInMs:(double)arg1;
- (double)feedStayEndTimeInMs;
- (void)setFeedStayEndTimeInMs:(double)arg1;
- (unsigned long long)startPlayTime;
- (void)setStartPlayTime:(unsigned long long)arg1;
- (unsigned long long)endPlayTime;
- (void)setEndPlayTime:(unsigned long long)arg1;
- (BOOL)autoPlay;
- (void)setAutoPlay:(BOOL)arg1;
- (double)feedActualPlayingTimeInMs;
- (void)setFeedActualPlayingTimeInMs:(double)arg1;
- (double)lastPlayTime;
- (void)setLastPlayTime:(double)arg1;
- (unsigned long long)photoTurningIndex;
- (unsigned long long)videoReplayTimes;
- (void)setVideoReplayTimes:(unsigned long long)arg1;
- (double)maxPlayProgress;
- (unsigned long long)feedForwardCount;
- (void)setFeedForwardCount:(unsigned long long)arg1;
- (BOOL)clickShare;
- (void)setClickShare:(BOOL)arg1;
- (BOOL)clickComment;
- (void)setClickComment:(BOOL)arg1;
- (BOOL)clickHeader;
- (void)setClickHeader:(BOOL)arg1;
- (BOOL)followStatus;
- (void)setFollowStatus:(BOOL)arg1;
- (BOOL)likeStatus;
- (void)setLikeStatus:(BOOL)arg1;
- (unsigned long long)commentTimes;
- (void)setCommentTimes:(unsigned long long)arg1;
- (BOOL)favStatus;
- (void)setFavStatus:(BOOL)arg1;
- (BOOL)fastSlip;
- (void)setFastSlip:(BOOL)arg1;
- (unsigned long long)sortId;
- (void)setSortId:(unsigned long long)arg1;
- (double)maxVidPlayLen;
- (void)setMaxVidPlayLen:(double)arg1;
- (BOOL)notInterestAction;
- (void)setNotInterestAction:(BOOL)arg1;
- (unsigned long long)clickTopic;
- (void)setClickTopic:(unsigned long long)arg1;
- (unsigned long long)clickExpandText;
- (void)setClickExpandText:(unsigned long long)arg1;
- (unsigned long long)clickForwardToMoments;
- (void)setClickForwardToMoments:(unsigned long long)arg1;
- (unsigned long long)clickPoi;
- (void)setClickPoi:(unsigned long long)arg1;
- (unsigned long long)clickCollapseText;
- (void)setClickCollapseText:(unsigned long long)arg1;
- (unsigned long long)clickCommentLike;
- (void)setClickCommentLike:(unsigned long long)arg1;
- (unsigned long long)clickMore;
- (void)setClickMore:(unsigned long long)arg1;
- (unsigned long long)clickComplaint;
- (void)setClickComplaint:(unsigned long long)arg1;
- (BOOL)dragProgressBar;
- (void)setDragProgressBar:(BOOL)arg1;
- (BOOL)clickColumnCard;
- (void)setClickColumnCard:(BOOL)arg1;
- (unsigned long long)mediaType;
- (void)setMediaType:(unsigned long long)arg1;
- (BOOL)clickFullVideo;
- (void)setClickFullVideo:(BOOL)arg1;
- (double)fixedMaxVidPlayProgress;
- (void)setFixedMaxVidPlayProgress:(double)arg1;
- (double)lastVidPlayProgress;
- (void)setLastVidPlayProgress:(double)arg1;
- (void)setActionTypsArray:(id)arg1;
- (id)playSecondSet;
- (void)setPlaySecondSet:(id)arg1;
- (unsigned long long)liveIconObjectID;
- (void)setLiveIconObjectID:(unsigned long long)arg1;
- (unsigned long long)liveIconStartExposeTs;
- (void)setLiveIconStartExposeTs:(unsigned long long)arg1;
- (void)setCommentEnterTypeArray:(id)arg1;
- (id)picStat;
- (void)setPicStat:(id)arg1;
- (id)commentInfo;
- (void)setCommentInfo:(id)arg1;
- (id)reportAdExtraInfo;
- (void)setReportAdExtraInfo:(id)arg1;
- (void).cxx_destruct;
@end

@interface WCFinderTopicInfo : NSObject <WCTTableCoding, PBCoding>
{
    int _topicType; // +0x8
    NSString * _topic; // +0x10
    NSString * _topicIdStr; // +0x18
    unsigned long long _topicId; // +0x20
    unsigned long long _feedCount; // +0x28
    NSString * _headUrl; // +0x30
    unsigned long long _onlineViewed; // +0x38
    NSString * _topicNonceId; // +0x40
    unsigned long long _followFlag; // +0x48
    FinderTopicHashTagInfo * _hashTagInfo; // +0x50
    FinderTopicBgmInfo * _bgmInfo; // +0x58
    FinderEventInfo * _eventInfo; // +0x60
    unsigned long long _readCount; // +0x68
    FinderMusicTopicInfo * _musicTopicInfo; // +0x70
    FinderWordsTopicExtInfo * _wordsTopicExt; // +0x78
    unsigned long long _photoFeedCount; // +0x80
    unsigned long long _videoFeedCount; // +0x88
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)topic;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_topic;
+ (const void *)topicIdStr;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_topicIdStr;
+ (const void *)topicId;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_topicId;
+ (const void *)feedCount;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_feedCount;
+ (const void *)topicNonceId;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_topicNonceId;
+ (const void *)topicType;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_topicType;
+ (const void *)followFlag;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_followFlag;
+ (const void *)readCount;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_readCount;
+ (const void *)headUrl;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_headUrl;
+ (const void *)onlineViewed;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_onlineViewed;
+ (const void *)photoFeedCount;
+ (const void *)__wcdb_synthesize_10:(void *)arg1;
+ (id)swift_photoFeedCount;
+ (const void *)videoFeedCount;
+ (const void *)__wcdb_synthesize_11:(void *)arg1;
+ (id)swift_videoFeedCount;
+ (void)__wcdb_column_constraint_12:(void *)arg1;
+ (void)PBArrayAdd_topic;
+ (void)PBArrayAdd_topicIdStr;
+ (void)PBArrayAdd_topicId;
+ (void)PBArrayAdd_feedCount;
+ (void)PBArrayAdd_topicNonceId;
+ (void)PBArrayAdd_topicType;
+ (void)PBArrayAdd_followFlag;
+ (void)PBArrayAdd_readCount;
+ (void)PBArrayAdd_headUrl;
+ (void)PBArrayAdd_onlineViewed;
+ (void)PBArrayAdd_photoFeedCount;
+ (void)PBArrayAdd_videoFeedCount;
+ (void)initialize;
+ (id)topicInfoWithFinderTopicInfo:(id)arg1;
+ (id)topicInfoArrayFromPBInfoArray:(id)arg1;
- (id)getPBPropertyTable;
- (id)initWithFinderTopicInfo:(id)arg1;
- (id)initWithParams:(id)arg1;
- (id)initWithStoreInfo:(id)arg1;
- (id)description;
- (BOOL)isFollowed;
- (id)getEventCreaterUsername;
- (id)topic;
- (void)setTopic:(id)arg1;
- (id)topicIdStr;
- (void)setTopicIdStr:(id)arg1;
- (unsigned long long)topicId;
- (void)setTopicId:(unsigned long long)arg1;
- (unsigned long long)feedCount;
- (void)setFeedCount:(unsigned long long)arg1;
- (id)headUrl;
- (void)setHeadUrl:(id)arg1;
- (unsigned long long)onlineViewed;
- (void)setOnlineViewed:(unsigned long long)arg1;
- (id)topicNonceId;
- (void)setTopicNonceId:(id)arg1;
- (int)topicType;
- (void)setTopicType:(int)arg1;
- (unsigned long long)followFlag;
- (void)setFollowFlag:(unsigned long long)arg1;
- (id)hashTagInfo;
- (void)setHashTagInfo:(id)arg1;
- (id)bgmInfo;
- (void)setBgmInfo:(id)arg1;
- (id)eventInfo;
- (unsigned long long)readCount;
- (void)setReadCount:(unsigned long long)arg1;
- (id)musicTopicInfo;
- (void)setMusicTopicInfo:(id)arg1;
- (id)wordsTopicExt;
- (void)setWordsTopicExt:(id)arg1;
- (unsigned long long)photoFeedCount;
- (void)setPhotoFeedCount:(unsigned long long)arg1;
- (unsigned long long)videoFeedCount;
- (void)setVideoFeedCount:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


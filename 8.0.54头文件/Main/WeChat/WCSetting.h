@interface WCSetting : NSObject <NSCoding>
{
    NSString * groupListMD5; // +0x8
    NSString * groupRecommendListMD5; // +0x10
    long long postPrivacy; // +0x18
    NSMutableArray * lastPostGroupIDs; // +0x20
    NSMutableArray * lastPostVisibleLabelName; // +0x28
    NSMutableArray * lastPostInVisibleLabelName; // +0x30
    unsigned int lastShareOptions; // +0x38
    WCDataItem * lastDataItem; // +0x40
    int unReadCount; // +0x48
    unsigned int timelineShowFlag; // +0x4c
    int postMentionLimit; // +0x50
    int postTogetherLimit; // +0x54
    int pasteLengthLimit; // +0x58
    BOOL hasShowPlainTextTip; // +0x5c
    int firstPageCount; // +0x60
    int nextPageCount; // +0x64
    int educationTipShowCount; // +0x68
    int groupTransferRetryCount; // +0x6c
    NSMutableArray * arrNeedTransferGroup; // +0x70
    NSMutableArray * arrLabelName; // +0x78
    NSData * dataSession; // +0x80
    NSData * adDetailSession; // +0x88
    int snsRedEnvelopesFullScreenTipShowCount; // +0x90
    BOOL enableBrowseSnsRedEnvelopes; // +0x94
    int switchOpCountForSnsRedEnvelopes; // +0x98
    int postFeedCountForSnsRedEnvelopes; // +0x9c
    NSString * maxPostFeedCountId; // +0xa0
    int goldenCameraTipShowCount; // +0xa8
    NSString * goldenCameraTipId; // +0xb0
    NSString * fullScreenShowTipId; // +0xb8
    BOOL hasShowSnsPrivacyFullScreenGuide; // +0xc0
    BOOL hasShowSnsCommitDragTip; // +0xc1
    NSMutableDictionary * dicIgnoreNotificationFeedId; // +0xc8
    NSRecursiveLock * ignoreNtfLock; // +0xd0
    BOOL _hasShowHotVideoTip; // +0xd8
    BOOL _hasShowHotImageTip; // +0xd9
    int groupTransferCount; // +0xdc
    int _tiger2022PostStatus; // +0xe0
    int _tiger2022SourceStatus; // +0xe4
    unsigned int _timelineFoldSectionSize; // +0xe8
}
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)shouldTransferGroup;
- (void)unEnableTransferGroup;
- (BOOL)hasNeedTransferGroup;
- (BOOL)isIgnoreNotificationFeedIdExist:(id)arg1;
- (void)addIgnoreNotificationFeedId:(id)arg1;
- (void)removeIgnoreNotificationFeedId:(id)arg1;
- (id)groupListMD5;
- (void)setGroupListMD5:(id)arg1;
- (id)groupRecommendListMD5;
- (void)setGroupRecommendListMD5:(id)arg1;
- (long long)postPrivacy;
- (void)setPostPrivacy:(long long)arg1;
- (id)lastPostGroupIDs;
- (void)setLastPostGroupIDs:(id)arg1;
- (id)lastPostVisibleLabelName;
- (void)setLastPostVisibleLabelName:(id)arg1;
- (id)lastPostInVisibleLabelName;
- (void)setLastPostInVisibleLabelName:(id)arg1;
- (unsigned int)lastShareOptions;
- (void)setLastShareOptions:(unsigned int)arg1;
- (id)lastDataItem;
- (void)setLastDataItem:(id)arg1;
- (int)unReadCount;
- (void)setUnReadCount:(int)arg1;
- (unsigned int)timelineShowFlag;
- (void)setTimelineShowFlag:(unsigned int)arg1;
- (int)postMentionLimit;
- (void)setPostMentionLimit:(int)arg1;
- (int)postTogetherLimit;
- (void)setPostTogetherLimit:(int)arg1;
- (int)pasteLengthLimit;
- (void)setPasteLengthLimit:(int)arg1;
- (BOOL)hasShowPlainTextTip;
- (void)setHasShowPlainTextTip:(BOOL)arg1;
- (int)firstPageCount;
- (void)setFirstPageCount:(int)arg1;
- (int)nextPageCount;
- (void)setNextPageCount:(int)arg1;
- (int)educationTipShowCount;
- (void)setEducationTipShowCount:(int)arg1;
- (id)dataSession;
- (void)setDataSession:(id)arg1;
- (int)groupTransferCount;
- (void)setGroupTransferCount:(int)arg1;
- (id)arrNeedTransferGroup;
- (void)setArrNeedTransferGroup:(id)arg1;
- (id)arrLabelName;
- (void)setArrLabelName:(id)arg1;
- (id)adDetailSession;
- (void)setAdDetailSession:(id)arg1;
- (int)snsRedEnvelopesFullScreenTipShowCount;
- (void)setSnsRedEnvelopesFullScreenTipShowCount:(int)arg1;
- (BOOL)enableBrowseSnsRedEnvelopes;
- (void)setEnableBrowseSnsRedEnvelopes:(BOOL)arg1;
- (int)switchOpCountForSnsRedEnvelopes;
- (void)setSwitchOpCountForSnsRedEnvelopes:(int)arg1;
- (int)postFeedCountForSnsRedEnvelopes;
- (void)setPostFeedCountForSnsRedEnvelopes:(int)arg1;
- (id)maxPostFeedCountId;
- (void)setMaxPostFeedCountId:(id)arg1;
- (int)goldenCameraTipShowCount;
- (void)setGoldenCameraTipShowCount:(int)arg1;
- (id)goldenCameraTipId;
- (void)setGoldenCameraTipId:(id)arg1;
- (id)fullScreenShowTipId;
- (void)setFullScreenShowTipId:(id)arg1;
- (BOOL)hasShowSnsPrivacyFullScreenGuide;
- (void)setHasShowSnsPrivacyFullScreenGuide:(BOOL)arg1;
- (BOOL)hasShowSnsCommitDragTip;
- (void)setHasShowSnsCommitDragTip:(BOOL)arg1;
- (id)dicIgnoreNotificationFeedId;
- (void)setDicIgnoreNotificationFeedId:(id)arg1;
- (int)tiger2022PostStatus;
- (void)setTiger2022PostStatus:(int)arg1;
- (int)tiger2022SourceStatus;
- (void)setTiger2022SourceStatus:(int)arg1;
- (BOOL)hasShowHotVideoTip;
- (void)setHasShowHotVideoTip:(BOOL)arg1;
- (BOOL)hasShowHotImageTip;
- (void)setHasShowHotImageTip:(BOOL)arg1;
- (unsigned int)timelineFoldSectionSize;
- (void)setTimelineFoldSectionSize:(unsigned int)arg1;
- (void).cxx_destruct;
@end


@interface BrandTimelineExposeInfo : MMObject
{
    BOOL _isValidExpose; // +0x8
    BOOL _isAutoPlay; // +0x9
    BOOL _hasReportRealTimeExposed; // +0xa
    BOOL _hasReportRealTimeValidExposed; // +0xb
    unsigned int _bizUin; // +0xc
    unsigned int _mid; // +0x10
    unsigned int _idx; // +0x14
    unsigned int _itemIndex; // +0x18
    unsigned int _exposePos; // +0x1c
    unsigned int _exposeCount; // +0x20
    unsigned int _exposeBrowseState; // +0x24
    unsigned int _expandState; // +0x28
    unsigned int _isExpandDafault; // +0x2c
    unsigned int _exposeRatio; // +0x30
    unsigned int _createTime; // +0x34
    unsigned int _exposeTimeStamp; // +0x38
    unsigned int _isStar; // +0x3c
    unsigned int _isNewMsg; // +0x40
    unsigned int _msgType; // +0x44
    unsigned int _isClick; // +0x48
    unsigned int _isLargeCover; // +0x4c
    unsigned int _isOftenReadBiz; // +0x50
    unsigned int _isPayContent; // +0x54
    unsigned int _itemShowType; // +0x58
    unsigned int _cardType; // +0x5c
    unsigned int _recRk; // +0x60
    unsigned int _recStyle; // +0x64
    unsigned int _subPos; // +0x68
    unsigned int _weight; // +0x6c
    unsigned int _autoPlayTime; // +0x70
    unsigned int _actType; // +0x74
    unsigned int _cardSequenceIdx; // +0x78
    unsigned int _styleInfo; // +0x7c
    unsigned int _showFinder; // +0x80
    NSString * _bizUsername; // +0x88
    unsigned long long _exposeTimeStampInMs; // +0x90
    NSString * _itemInfoStr; // +0x98
    unsigned long long _recId; // +0xa0
    NSString * _recReason; // +0xa8
    NSString * _exptType; // +0xb0
    NSString * _event; // +0xb8
    NSString * _cardId; // +0xc0
    NSString * _recInfo; // +0xc8
    NSString * _recExtraData; // +0xd0
    NSString * _aggregationTitle; // +0xd8
    NSString * _aggregationUrl; // +0xe0
    NSString * _cardTitle; // +0xe8
    NSString * _videoId; // +0xf0
    NSString * _wordingReportInfo; // +0xf8
    NSString * _rankSessionId; // +0x100
    NSString * _resortBuffer; // +0x108
    NSString * _title; // +0x110
    NSString * _finderFeedObjectId; // +0x118
    NSString * _contentId; // +0x120
    NSString * _finderId; // +0x128
    NSString * _aid; // +0x130
    NSString * _traceId; // +0x138
}
+ (id)readerKeyPrefix;
+ (id)genKeyForBaseItemViewModel:(id)arg1;
+ (void)fillData:(id)arg1 withFinderFixedCellViewModel:(id)arg2 index:(long long)arg3;
+ (void)fillData:(id)arg1 withFinderScrollableCellViewModel:(id)arg2 index:(long long)arg3;
+ (void)fillData:(id)arg1 withinterestData:(id)arg2 index:(long long)arg3;
+ (id)genInfoKeyForReaderItemCell:(id)arg1 itemIndex:(unsigned int)arg2;
+ (id)genInfoKeyWithRecAppMsgViewModel:(id)arg1;
+ (id)genInfoKeyWithFinderFixedCellViewModel:(id)arg1 index:(long long)arg2;
+ (id)genInfoKeyWithFinderScrollableCellViewModel:(id)arg1 index:(long long)arg2;
+ (id)genInfoKeyWithMPInterestCard:(id)arg1 interestData:(id)arg2 index:(long long)arg3;
+ (id)genInfoKeyForCanvasRecMsg:(id)arg1;
+ (id)genInfoKeyForCanvasAdMsg:(id)arg1;
- (id)initWithItemViewModel:(id)arg1 sectionIndex:(unsigned long long)arg2 newMsgSequenceId:(unsigned long long)arg3 curTime:(unsigned int)arg4 curTimeInMs:(unsigned long long)arg5 isStar:(BOOL)arg6;
- (id)initWithBTCanvasMsgSectionData:(id)arg1 sectionIndex:(unsigned long long)arg2 newMsgSequenceId:(unsigned long long)arg3 curTime:(unsigned int)arg4 curTimeInMs:(unsigned long long)arg5;
- (id)initWithRecommendAppMsgViewModel:(id)arg1 sectionIndex:(unsigned long long)arg2 newMsgSequenceId:(unsigned long long)arg3 curTime:(unsigned int)arg4 curTimeInMs:(unsigned long long)arg5;
- (id)bizUsername;
- (void)setBizUsername:(id)arg1;
- (unsigned int)bizUin;
- (void)setBizUin:(unsigned int)arg1;
- (unsigned int)mid;
- (void)setMid:(unsigned int)arg1;
- (unsigned int)idx;
- (void)setIdx:(unsigned int)arg1;
- (unsigned int)itemIndex;
- (void)setItemIndex:(unsigned int)arg1;
- (unsigned int)exposePos;
- (void)setExposePos:(unsigned int)arg1;
- (unsigned int)exposeCount;
- (void)setExposeCount:(unsigned int)arg1;
- (unsigned int)exposeBrowseState;
- (void)setExposeBrowseState:(unsigned int)arg1;
- (unsigned int)expandState;
- (void)setExpandState:(unsigned int)arg1;
- (unsigned int)isExpandDafault;
- (void)setIsExpandDafault:(unsigned int)arg1;
- (BOOL)isValidExpose;
- (void)setIsValidExpose:(BOOL)arg1;
- (unsigned int)exposeRatio;
- (void)setExposeRatio:(unsigned int)arg1;
- (unsigned int)createTime;
- (void)setCreateTime:(unsigned int)arg1;
- (unsigned int)exposeTimeStamp;
- (void)setExposeTimeStamp:(unsigned int)arg1;
- (unsigned long long)exposeTimeStampInMs;
- (void)setExposeTimeStampInMs:(unsigned long long)arg1;
- (unsigned int)isStar;
- (void)setIsStar:(unsigned int)arg1;
- (unsigned int)isNewMsg;
- (void)setIsNewMsg:(unsigned int)arg1;
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (id)itemInfoStr;
- (void)setItemInfoStr:(id)arg1;
- (unsigned int)isClick;
- (void)setIsClick:(unsigned int)arg1;
- (unsigned int)isLargeCover;
- (void)setIsLargeCover:(unsigned int)arg1;
- (unsigned int)isOftenReadBiz;
- (void)setIsOftenReadBiz:(unsigned int)arg1;
- (unsigned int)isPayContent;
- (void)setIsPayContent:(unsigned int)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (unsigned int)cardType;
- (void)setCardType:(unsigned int)arg1;
- (unsigned long long)recId;
- (void)setRecId:(unsigned long long)arg1;
- (id)recReason;
- (void)setRecReason:(id)arg1;
- (id)exptType;
- (void)setExptType:(id)arg1;
- (id)event;
- (void)setEvent:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (unsigned int)recRk;
- (void)setRecRk:(unsigned int)arg1;
- (unsigned int)recStyle;
- (void)setRecStyle:(unsigned int)arg1;
- (id)recInfo;
- (void)setRecInfo:(id)arg1;
- (id)recExtraData;
- (void)setRecExtraData:(id)arg1;
- (id)aggregationTitle;
- (void)setAggregationTitle:(id)arg1;
- (id)aggregationUrl;
- (void)setAggregationUrl:(id)arg1;
- (id)cardTitle;
- (void)setCardTitle:(id)arg1;
- (unsigned int)subPos;
- (void)setSubPos:(unsigned int)arg1;
- (id)videoId;
- (void)setVideoId:(id)arg1;
- (id)wordingReportInfo;
- (void)setWordingReportInfo:(id)arg1;
- (unsigned int)weight;
- (void)setWeight:(unsigned int)arg1;
- (id)rankSessionId;
- (void)setRankSessionId:(id)arg1;
- (id)resortBuffer;
- (void)setResortBuffer:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)isAutoPlay;
- (void)setIsAutoPlay:(BOOL)arg1;
- (unsigned int)autoPlayTime;
- (void)setAutoPlayTime:(unsigned int)arg1;
- (unsigned int)actType;
- (void)setActType:(unsigned int)arg1;
- (id)finderFeedObjectId;
- (void)setFinderFeedObjectId:(id)arg1;
- (id)contentId;
- (void)setContentId:(id)arg1;
- (id)finderId;
- (void)setFinderId:(id)arg1;
- (unsigned int)cardSequenceIdx;
- (void)setCardSequenceIdx:(unsigned int)arg1;
- (unsigned int)styleInfo;
- (void)setStyleInfo:(unsigned int)arg1;
- (unsigned int)showFinder;
- (void)setShowFinder:(unsigned int)arg1;
- (id)aid;
- (void)setAid:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (BOOL)hasReportRealTimeExposed;
- (void)setHasReportRealTimeExposed:(BOOL)arg1;
- (BOOL)hasReportRealTimeValidExposed;
- (void)setHasReportRealTimeValidExposed:(BOOL)arg1;
- (void).cxx_destruct;
@end


@interface WCFinderGetTopicListResponseModel : NSObject
{
    BOOL _continueFlag; // +0x8
    BOOL _upContinueFlag; // +0x9
    BOOL _downContinueFlag; // +0xa
    BOOL _similarFlag; // +0xb
    BOOL _hasPrefetched; // +0xc
    unsigned int _feedFollowPermissionFlag; // +0x10
    unsigned int _disabledFlag; // +0x14
    unsigned int _reviseFeedCount; // +0x18
    NSData * _lastBuff; // +0x20
    unsigned long long _totalCount; // +0x28
    NSArray * _dataArray; // +0x30
    WCFinderTopicInfo * _topicInfo; // +0x38
    NSArray * _poiTopicRecommendArray; // +0x40
    NSString * _subtitle; // +0x48
    FinderTopicBgmInfo * _bgmInfo; // +0x50
    FinderGetTopicListResponse * _resp; // +0x58
}
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (BOOL)continueFlag;
- (void)setContinueFlag:(BOOL)arg1;
- (BOOL)upContinueFlag;
- (void)setUpContinueFlag:(BOOL)arg1;
- (BOOL)downContinueFlag;
- (void)setDownContinueFlag:(BOOL)arg1;
- (unsigned long long)totalCount;
- (void)setTotalCount:(unsigned long long)arg1;
- (id)dataArray;
- (void)setDataArray:(id)arg1;
- (id)topicInfo;
- (void)setTopicInfo:(id)arg1;
- (BOOL)similarFlag;
- (void)setSimilarFlag:(BOOL)arg1;
- (id)poiTopicRecommendArray;
- (void)setPoiTopicRecommendArray:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)bgmInfo;
- (void)setBgmInfo:(id)arg1;
- (unsigned int)feedFollowPermissionFlag;
- (void)setFeedFollowPermissionFlag:(unsigned int)arg1;
- (unsigned int)disabledFlag;
- (void)setDisabledFlag:(unsigned int)arg1;
- (unsigned int)reviseFeedCount;
- (void)setReviseFeedCount:(unsigned int)arg1;
- (BOOL)hasPrefetched;
- (void)setHasPrefetched:(BOOL)arg1;
- (id)resp;
- (void)setResp:(id)arg1;
- (void).cxx_destruct;
@end


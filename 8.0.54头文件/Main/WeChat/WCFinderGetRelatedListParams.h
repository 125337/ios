@interface WCFinderGetRelatedListParams : NSObject
{
    int _prefetchType; // +0x8
    int _scene; // +0xc
    int _viewScene; // +0x10
    NSData * _lastBuff; // +0x18
    NSString * _tid; // +0x20
    NSString * _nonceId; // +0x28
    NSString * _recommendReason; // +0x30
    WCFinderLocationInfo * _location; // +0x38
    unsigned long long _tabType; // +0x40
    WCFinderSectionInfo * _sectionInfo; // +0x48
    WCFinderCategoryInfo * _categoryRecommend; // +0x50
    NSData * _streamLastBuffer; // +0x58
    WCFinderShareListReportModel * _cgiParams; // +0x60
    FinderGetRelatedEntranceInfo * _relatedEntranceInfo; // +0x68
    NSString * _fromSessionId; // +0x70
    NSString * _encrytedObjectidTid; // +0x78
    NSNumber * _pullType; // +0x80
    StreamTabTipsInfo * _tabTipsInfo; // +0x88
    NSData * _collectionBypassData; // +0x90
    unsigned long long _relatedFlag; // +0x98
    NSData * _relatedlistLastBuffer; // +0xa0
    NSString * _shareMsgSource; // +0xa8
    NSString * _shareMsgSvrID; // +0xb0
}
- (id)yymodelCopy;
- (id)intoRequest;
- (id)getRoomStateWithAvgSpeed:(unsigned int)arg1;
- (void)fromRequest:(id)arg1;
- (id)lastBuff;
- (void)setLastBuff:(id)arg1;
- (int)prefetchType;
- (void)setPrefetchType:(int)arg1;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)nonceId;
- (void)setNonceId:(id)arg1;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg1;
- (id)location;
- (void)setLocation:(id)arg1;
- (unsigned long long)tabType;
- (void)setTabType:(unsigned long long)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (id)sectionInfo;
- (void)setSectionInfo:(id)arg1;
- (id)categoryRecommend;
- (void)setCategoryRecommend:(id)arg1;
- (id)streamLastBuffer;
- (void)setStreamLastBuffer:(id)arg1;
- (int)viewScene;
- (void)setViewScene:(int)arg1;
- (id)cgiParams;
- (void)setCgiParams:(id)arg1;
- (id)relatedEntranceInfo;
- (void)setRelatedEntranceInfo:(id)arg1;
- (id)fromSessionId;
- (void)setFromSessionId:(id)arg1;
- (id)encrytedObjectidTid;
- (void)setEncrytedObjectidTid:(id)arg1;
- (id)pullType;
- (void)setPullType:(id)arg1;
- (id)tabTipsInfo;
- (void)setTabTipsInfo:(id)arg1;
- (id)collectionBypassData;
- (void)setCollectionBypassData:(id)arg1;
- (unsigned long long)relatedFlag;
- (void)setRelatedFlag:(unsigned long long)arg1;
- (id)relatedlistLastBuffer;
- (void)setRelatedlistLastBuffer:(id)arg1;
- (id)shareMsgSource;
- (void)setShareMsgSource:(id)arg1;
- (id)shareMsgSvrID;
- (void)setShareMsgSvrID:(id)arg1;
- (void).cxx_destruct;
@end


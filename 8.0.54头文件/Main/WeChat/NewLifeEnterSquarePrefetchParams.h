@interface NewLifeEnterSquarePrefetchParams : NSObject
{
    unsigned int _enterIndex; // +0x8
    long long _prefetchType; // +0x10
    NSString * _prefetchId; // +0x18
    long long _enterScene; // +0x20
    NewLifeEnterSquareJumpDetailInfo * _jumpDetailInfo; // +0x28
    NewLifePostJumpFlowParams * _postJumpReportParams; // +0x30
    long long _contextIdEntryScene; // +0x38
    FinderObject * _reddotFinderObject; // +0x40
}
- (id)init;
- (long long)prefetchType;
- (void)setPrefetchType:(long long)arg1;
- (id)prefetchId;
- (void)setPrefetchId:(id)arg1;
- (long long)enterScene;
- (void)setEnterScene:(long long)arg1;
- (unsigned int)enterIndex;
- (void)setEnterIndex:(unsigned int)arg1;
- (id)jumpDetailInfo;
- (void)setJumpDetailInfo:(id)arg1;
- (id)postJumpReportParams;
- (void)setPostJumpReportParams:(id)arg1;
- (long long)contextIdEntryScene;
- (void)setContextIdEntryScene:(long long)arg1;
- (id)reddotFinderObject;
- (void)setReddotFinderObject:(id)arg1;
- (void).cxx_destruct;
@end


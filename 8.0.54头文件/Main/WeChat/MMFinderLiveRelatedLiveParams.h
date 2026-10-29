@interface MMFinderLiveRelatedLiveParams : NSObject
{
    unsigned long long _liveId; // +0x8
    NSArray * _relatedLiveContentVMs; // +0x10
    FinderLiveRelatedExtInfo * _relatedExtInfo; // +0x18
}
- (id)description;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)relatedLiveContentVMs;
- (void)setRelatedLiveContentVMs:(id)arg1;
- (id)relatedExtInfo;
- (void)setRelatedExtInfo:(id)arg1;
- (void).cxx_destruct;
@end


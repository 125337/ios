@interface MMLiveKtvThemeItemFetchingByObjectIdProvider : NSObject <MMLiveKtvThemeItemFetching>
{
    unsigned long long _objectId; // +0x8
    unsigned long long _liveId; // +0x10
    NSString * _anchorFinderUsername; // +0x18
}
- (id)initWithObjectId:(unsigned long long)arg1 liveId:(unsigned long long)arg2 anchorFinderUsername:(id)arg3;
- (void)fetchThemeItemsWithCompletionBlock:(id /* block */)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)anchorFinderUsername;
- (void)setAnchorFinderUsername:(id)arg1;
- (void).cxx_destruct;
@end

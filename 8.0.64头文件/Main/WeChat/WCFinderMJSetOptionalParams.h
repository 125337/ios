@interface WCFinderMJSetOptionalParams : NSObject
{
    long long _enterSource; // +0x8
    NSString * _finderUsername; // +0x10
    NSString * _sourceFeedId; // +0x18
    WCFinderFeedContentVM * _sourceFeedContentVM; // +0x20
}
- (long long)enterSource;
- (void)setEnterSource:(long long)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)sourceFeedId;
- (void)setSourceFeedId:(id)arg1;
- (id)sourceFeedContentVM;
- (void)setSourceFeedContentVM:(id)arg1;
- (void).cxx_destruct;
@end

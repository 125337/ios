@interface TemplateFinderFeedOPWrap : NSObject
{
    NSString * _feedID; // +0x8
    NSString * _nonceID; // +0x10
    NSString * _feed_thumbnail; // +0x18
}
+ (id)finderFeedOPWrapWithJSON:(id)arg1;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id)nonceID;
- (void)setNonceID:(id)arg1;
- (id)feed_thumbnail;
- (void)setFeed_thumbnail:(id)arg1;
- (void).cxx_destruct;
@end

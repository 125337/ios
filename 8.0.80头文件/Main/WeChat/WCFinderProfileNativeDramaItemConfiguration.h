@interface WCFinderProfileNativeDramaItemConfiguration : NSObject <UIContentConfiguration, WCFinderCollectionViewReportableItem>
{
    BOOL _isSticky; // +0x8
    BOOL _disabledCornerRadius; // +0x9
    unsigned long long _identifier; // +0x10
    NSURL * _coverUrl; // +0x18
    NSString * _title; // +0x20
    NSString * _episodeCount; // +0x28
    NSString * _authorFinderUsername; // +0x30
    NSString * _sourceFeedID; // +0x38
}
+ (id)configurationForInfo:(id)arg1;
- (id)makeContentView;
- (id)updatedConfigurationForState:(id)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)viewID;
- (id)params;
- (unsigned long long)reportPolicy;
- (unsigned long long)identifier;
- (void)setIdentifier:(unsigned long long)arg1;
- (id)coverUrl;
- (void)setCoverUrl:(id)arg1;
- (BOOL)isSticky;
- (void)setIsSticky:(BOOL)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)episodeCount;
- (void)setEpisodeCount:(id)arg1;
- (BOOL)disabledCornerRadius;
- (void)setDisabledCornerRadius:(BOOL)arg1;
- (id)authorFinderUsername;
- (void)setAuthorFinderUsername:(id)arg1;
- (id)sourceFeedID;
- (void)setSourceFeedID:(id)arg1;
- (void).cxx_destruct;
@end

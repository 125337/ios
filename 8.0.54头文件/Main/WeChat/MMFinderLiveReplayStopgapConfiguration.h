@interface MMFinderLiveReplayStopgapConfiguration : NSObject
{
    BOOL _enabled; // +0x8
    BOOL _forceQualityRecommendation; // +0x9
    unsigned int _recommendedQualityLevel; // +0xc
    unsigned long long _stopgapId; // +0x10
    NSDictionary * _mediaItems; // +0x18
    NSArray * _mediaItemsList; // +0x20
}
+ (BOOL)stopgapInfoValid:(id)arg1;
- (id)initWithStopgapInfo:(id)arg1 preloadInfo:(id)arg2;
- (id)preferredStopgapMediaItemWithMaximumQuality:(unsigned int)arg1 enableH265:(BOOL)arg2;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg1;
- (unsigned long long)stopgapId;
- (void)setStopgapId:(unsigned long long)arg1;
- (unsigned int)recommendedQualityLevel;
- (void)setRecommendedQualityLevel:(unsigned int)arg1;
- (BOOL)forceQualityRecommendation;
- (void)setForceQualityRecommendation:(BOOL)arg1;
- (id)mediaItems;
- (void)setMediaItems:(id)arg1;
- (id)mediaItemsList;
- (void)setMediaItemsList:(id)arg1;
- (void).cxx_destruct;
@end


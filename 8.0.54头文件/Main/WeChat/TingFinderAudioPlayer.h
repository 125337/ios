@interface TingFinderAudioPlayer : TingAudioPlayer
{
    WCFinderDataItem * _fetchedDataItem; // +0x8
}
+ (id)audioUrlForDataItem:(id)arg1;
- (id)audioInfo;
- (BOOL)isPlayRateSupported;
- (void)prepareToPlay;
- (void)onSuccessWithDataItem:(id)arg1;
- (id)fetchedDataItem;
- (void)setFetchedDataItem:(id)arg1;
- (void).cxx_destruct;
@end


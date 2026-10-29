@interface WCFiderEidtMusicPostingAudioAdapter : NSObject <WCFinderEditMusicMediaAudioUrlAdapter>
{
    id <WCFiderEidtMusicPostingAudioAdapterDelegate> _delegate; // +0x8
    NSMutableDictionary * _videoMapAudioUrls; // +0x10
}
+ (id)adapterWithDelegate:(id)arg1;
- (void)fetchDataItemMediaAudioUrl:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)videoMapAudioUrls;
- (void)setVideoMapAudioUrls:(id)arg1;
- (void).cxx_destruct;
@end

@interface MMMusicFlexEditBarThumbLoader : NSObject <WCFinderVideoDownLoadMgrExt, MMImageLoaderObserver>
{
    NSArray * _arrTrackItem; // +0x8
    NSMutableDictionary * _dictThumbInfo; // +0x10
    id <MMMusicFlexEditBarThumbLoaderDelegate> _delegate; // +0x18
}
- (id)initWithArrTrackItem:(id)arg1;
- (void)loadData;
- (void)reloadWithTrackItems:(id)arg1 needReloadThumbData:(BOOL)arg2;
- (void)loadThumb:(id)arg1;
- (void)retriveThumbImageAtTrackIndex:(unsigned int)arg1 timeSec:(double)arg2 blockOnGetThumbImage:(id /* block */)arg3;
- (void)finderMediaVideoStreamDownloadSuccessfulWithTid:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)ImageDidFail:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end


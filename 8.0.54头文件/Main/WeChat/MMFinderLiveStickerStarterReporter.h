@interface MMFinderLiveStickerStarterReporter : NSObject <MMFinderLiveStickerReporting>
{
    WCFinderLiveStarterReporter * _reporter; // +0x8
}
- (id)initWithUnderlyingReporter:(id)arg1;
- (void)reportStickerAction:(unsigned long long)arg1 type:(unsigned long long)arg2;
- (void)reportStickerAction:(unsigned long long)arg1 type:(unsigned long long)arg2 attributes:(id)arg3;
- (id)reporter;
- (void)setReporter:(id)arg1;
- (void).cxx_destruct;
@end


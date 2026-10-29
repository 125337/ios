@interface _TtC6WeChat24FinderWeSeeConfiguration : NSObject
{
     entryEnabled; // +0x8
     entryName; // +0x10
    void * iconDarkURL; // +0x20
    void * iconLightURL; // +0x30
    BOOL prefetchEnabled; // +0x40
     tabs; // +0x48
}
- (id)seeLaterSuccessToastText;
- (id)seeLaterEntryTipWithEntryOpen:(BOOL)arg1;
- (id)iconDarkURL;
- (id)iconLightURL;
- (BOOL)prefetchEnabled;
- (long long)containerType;
- (id)entryTitle;
- (BOOL)hasLongVideoTab;
- (BOOL)hasDramaTab;
- (BOOL)shouldPrefetchKj;
- (BOOL)shouldPrefetchLongVideo;
- (id)initWithEntryInfo:(id)arg1;
- (id)init;
- (void).cxx_destruct;
@end

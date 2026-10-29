@interface _TtC6WeChat3HAR : NSObject
{
     log; // +0x8
     allEntryDict; // +0x40
     allEntryIndex; // +0x48
     loopAllEntry; // +0x50
}
- (id)allEntryDict;
- (void)setAllEntryDict:(id)arg1;
- (id)allEntryIndex;
- (void)setAllEntryIndex:(id)arg1;
- (BOOL)loopAllEntry;
- (void)setLoopAllEntry:(BOOL)arg1;
- (BOOL)isAllUrlLooped;
- (long long)numEntries;
- (id)harToJsonDict;
- (id)harToJsonStr;
- (id)entryMatchUrlStrWithUrlStr:(id)arg1;
- (id)init;
- (void)addEntryWithUrlRequest:(id)arg1 urlResponse:(id)arg2 responseData:(id)arg3 startDate:(id)arg4 webviewPtrValue:(id)arg5;
- (void).cxx_destruct;
@end


@interface FTSIndexDynamicConfig : NSObject
{
    BOOL _enableFastIndexing; // +0x8
    BOOL _enableMemCacheSearch; // +0x9
    unsigned int _uiMsgFastIndexThd; // +0xc
    unsigned int _uiMsgFastIndexTh; // +0x10
}
- (id)init;
- (id)description;
- (BOOL)enableFastIndexing;
- (void)setEnableFastIndexing:(BOOL)arg1;
- (BOOL)enableMemCacheSearch;
- (void)setEnableMemCacheSearch:(BOOL)arg1;
- (unsigned int)uiMsgFastIndexThd;
- (void)setUiMsgFastIndexThd:(unsigned int)arg1;
- (unsigned int)uiMsgFastIndexTh;
- (void)setUiMsgFastIndexTh:(unsigned int)arg1;
@end


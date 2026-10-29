@interface WCWebSearchInternalRouter : WebSearchPluginBase
{
    BOOL _detailPageEditingFlag; // +0x8
}
- (void)markDetailPageEditing;
- (void)launchDetailPage:(id)arg1;
- (void)launchDetailSearch:(id)arg1 isFromVoice:(unsigned int)arg2;
- (BOOL)detailPageEditingFlag;
- (void)setDetailPageEditingFlag:(BOOL)arg1;
@end

@interface FavMPArticleWebViewContext : NSObject
{
    BOOL _hasItemShowType; // +0x8
    BOOL _canUseFastLoad; // +0x9
    unsigned int _itemShowType; // +0xc
    NSString * _pageDataUrl; // +0x10
    NSString * _urlForReport; // +0x18
    NSMutableDictionary * _extraInfo; // +0x20
    MMWebViewPresetUI * _presetUI; // +0x28
    NSString * _sourceUserName; // +0x30
}
- (id)pageDataUrl;
- (void)setPageDataUrl:(id)arg1;
- (id)urlForReport;
- (void)setUrlForReport:(id)arg1;
- (id)extraInfo;
- (void)setExtraInfo:(id)arg1;
- (id)presetUI;
- (void)setPresetUI:(id)arg1;
- (id)sourceUserName;
- (void)setSourceUserName:(id)arg1;
- (BOOL)hasItemShowType;
- (void)setHasItemShowType:(BOOL)arg1;
- (unsigned int)itemShowType;
- (void)setItemShowType:(unsigned int)arg1;
- (BOOL)canUseFastLoad;
- (void)setCanUseFastLoad:(BOOL)arg1;
- (void).cxx_destruct;
@end

@interface FavURLItem : FavoritesModel
{
    unsigned int _forwardFlag; // +0x8
    NSString * _pageTitle; // +0x10
    NSString * _pageDesc; // +0x18
    NSString * _thumbUrl; // +0x20
    NSString * _canvasPageXml; // +0x28
    NSString * _wsVideoFlowXml; // +0x30
    FavAppMsgShareItem * _appMsgShareItem; // +0x38
    NSArray * _excerptList; // +0x40
    NSString * _extraparam; // +0x48
    NSString * _link; // +0x50
}
+ (id)modelPropertyBlacklistForConfigTag:(id)arg1;
+ (id)modelCustomPropertyMapperForConfigTag:(id)arg1;
+ (id)modelContainerPropertyMappingForConfigTag:(id)arg1;
+ (id)urlItemToXML:(id)arg1;
- (id)pageTitle;
- (void)setPageTitle:(id)arg1;
- (id)pageDesc;
- (void)setPageDesc:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)canvasPageXml;
- (void)setCanvasPageXml:(id)arg1;
- (id)wsVideoFlowXml;
- (void)setWsVideoFlowXml:(id)arg1;
- (id)appMsgShareItem;
- (void)setAppMsgShareItem:(id)arg1;
- (unsigned int)forwardFlag;
- (void)setForwardFlag:(unsigned int)arg1;
- (id)excerptList;
- (void)setExcerptList:(id)arg1;
- (id)extraparam;
- (void)setExtraparam:(id)arg1;
- (id)link;
- (void)setLink:(id)arg1;
- (void).cxx_destruct;
@end

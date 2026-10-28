@interface MMFinderLiveStickerTextTemplateResourceRepository : NSObject <NSCopying>
{
    NSArray * _templateItems; // +0x8
    NSMutableDictionary * _templateFonts; // +0x10
    MMFinderLiveStickerTextTemplateRemoteDeliveredResourcesFetchingRootAction * _fetcher; // +0x18
}
- (void)updateWithBackendEntitiesForTextTemplates:(id)arg1 templateFonts:(id)arg2;
- (void)getResourceForTextTemplate:(id)arg1 completionBlock:(id /* block */)arg2;
- (void)getResourceForTextTemplateFontWithResourceId:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)createFetcher;
- (id)templateItems;
- (void)setTemplateItems:(id)arg1;
- (id)templateFonts;
- (void)setTemplateFonts:(id)arg1;
- (id)fetcher;
- (void)setFetcher:(id)arg1;
- (void).cxx_destruct;
@end

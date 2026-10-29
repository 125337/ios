@interface MMFinderLiveFansGroupCustomizableGiftColorVariant : NSObject
{
    BOOL _pagLoading; // +0x8
    UIColor * _variantColor; // +0x10
    NSString * _defaultTextAttachment; // +0x18
    FinderLiveGift * _finderLiveGift; // +0x20
    NSMutableArray * _pendingCallbacks; // +0x28
    MMLiveResourceFetcherFanoutFlowAction * _resourceFetcher; // +0x30
    MMLiveStorageCleanupPinningToken * _resourcesPinningToken; // +0x38
    struct _portraitPreviewPag; // +0x40
    struct _landscapePreviewPag; // +0x50
}
- (id)initWithFinderLiveGift:(id)arg1;
- (id)variantProductId;
- (id)thumbnail;
- (void)preloadPagAnimation;
- (void)getPagAnimationWithCompleteBlock:(id /* block */)arg1;
- (void)getPagAnimationWithCompleteBlockImpl:(id /* block */)arg1;
- (id)variantColor;
- (void)setVariantColor:(id)arg1;
- (id)defaultTextAttachment;
- (void)setDefaultTextAttachment:(id)arg1;
- (id)finderLiveGift;
- (void)setFinderLiveGift:(id)arg1;
- (struct)portraitPreviewPag;
- (void)setPortraitPreviewPag:(struct)arg1;
- (struct)landscapePreviewPag;
- (void)setLandscapePreviewPag:(struct)arg1;
- (BOOL)pagLoading;
- (void)setPagLoading:(BOOL)arg1;
- (id)pendingCallbacks;
- (void)setPendingCallbacks:(id)arg1;
- (id)resourceFetcher;
- (void)setResourceFetcher:(id)arg1;
- (id)resourcesPinningToken;
- (void)setResourcesPinningToken:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end


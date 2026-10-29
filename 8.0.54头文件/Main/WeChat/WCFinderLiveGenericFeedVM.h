@interface WCFinderLiveGenericFeedVM : NSObject <MMFinderLiveFeedExtraInfoFetchExt, WCFinderLiveExt, WCFinderLiveHomePageFeedExt, IWCFinderLiveGenericFeedVMBase>
{
    BOOL _isSkeleton; // +0x8
    int _scene; // +0xc
    WCFinderLiveStreamElementModel * _model; // +0x10
    WCFinderFeedContentVM * _contentVM; // +0x18
    unsigned long long _containerId; // +0x20
    id <WCFinderLiveGenericFeedVMDelegate> _delegate; // +0x28
    id <WCFinderLiveFeedGenericPageContextBase> _ctx; // +0x30
    UIColor * _mainColor; // +0x38
}
+ (Class)concreteFeedVMClassWithModel:(id)arg1;
+ (id)getUrlHashForKey:(id)arg1;
- (id)initWithModel:(id)arg1 scene:(int)arg2 sessionExtraKey:(id)arg3 containerId:(unsigned long long)arg4 ctx:(id)arg5;
- (BOOL)isNoticeAuthor;
- (void)reserveLiveNoticeForUser:(int)arg1;
- (void)checkShouldPresentLiveConcertTicketWithCompletionBlock:(id /* block */)arg1;
- (id)mainColor;
- (void)saveMainColor:(id)arg1;
- (id)sessionBuffer;
- (BOOL)isAutoPlaying;
- (void)onFeedHighlightTagUpdate:(unsigned long long)arg1 tag:(id)arg2;
- (void)onAggregationCardUpdate:(id)arg1;
- (void)onLiveNoticeReserveStateChanged:(id)arg1 info:(id)arg2 error:(id)arg3;
- (id)model;
- (void)setModel:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned long long)containerId;
- (void)setContainerId:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)ctx;
- (void)setCtx:(id)arg1;
- (BOOL)isSkeleton;
- (void)setIsSkeleton:(BOOL)arg1;
- (void)setMainColor:(id)arg1;
- (void).cxx_destruct;
@end


@interface MegaVideoMinimizeServiceCppModel : NSObject <ILVMinimizeContextModel>
{
    WCFinderFeedContentVM * _cachedPlayingContentVM; // +0x8
    WCFinderFeedContentVM * _cachedNextContentVM; // +0x10
}
- (id)contentVMFromMegaFeedData:(id)arg1 commentScene:(int)arg2;
- (id)playingContentVM;
- (id)nextContentVM;
- (void)updatePlayingContentVM:(id)arg1 isFromContinuePlay:(BOOL)arg2;
- (void)fetchContinuePlayFeed;
- (id)openParam;
- (int)listType;
- (id)cachedPlayingContentVM;
- (void)setCachedPlayingContentVM:(id)arg1;
- (id)cachedNextContentVM;
- (void)setCachedNextContentVM:(id)arg1;
- (void).cxx_destruct;
@end


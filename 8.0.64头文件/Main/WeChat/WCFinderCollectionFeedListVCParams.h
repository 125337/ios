@interface WCFinderCollectionFeedListVCParams : NSObject
{
    BOOL _autoShowCollectionList; // +0x8
    BOOL _showPaidCollectionSkipToast; // +0x9
    BOOL _shouldUserAuthorScene; // +0xa
    BOOL _hasAutoDestinated; // +0xb
    NSString * _destinationFeedID; // +0x10
    id <WCFinderCollectionFeedListViewControllerDelegate> _vcDelegate; // +0x18
}
+ (id)defaultParams;
- (id)destinationFeedID;
- (void)setDestinationFeedID:(id)arg1;
- (BOOL)autoShowCollectionList;
- (void)setAutoShowCollectionList:(BOOL)arg1;
- (BOOL)showPaidCollectionSkipToast;
- (void)setShowPaidCollectionSkipToast:(BOOL)arg1;
- (id)vcDelegate;
- (void)setVcDelegate:(id)arg1;
- (BOOL)shouldUserAuthorScene;
- (void)setShouldUserAuthorScene:(BOOL)arg1;
- (BOOL)hasAutoDestinated;
- (void)setHasAutoDestinated:(BOOL)arg1;
- (void).cxx_destruct;
@end

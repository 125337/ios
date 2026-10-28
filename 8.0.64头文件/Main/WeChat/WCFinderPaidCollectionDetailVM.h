@interface WCFinderPaidCollectionDetailVM : NSObject
{
    BOOL _isHalfScreen; // +0x8
    WCFinderPaidCollectionFeedListProvider * _collectionDataProvider; // +0x10
    NSString * _authorFinderUsername; // +0x18
    FinderPaidCollectionInfo * _paidCollection; // +0x20
}
- (id)initWithPaidCollection:(id)arg1 isHalfScreen:(BOOL)arg2;
- (void)resetDataProvider;
- (id)dataSnapshot;
- (void)refreshPaidInfo;
- (id)forwardMessage;
- (id)momentItem;
- (id)_shareItem;
- (id)_uploadTask;
- (id)reportParams;
- (int)_reportCommentScene;
- (id)collectionDataProvider;
- (void)setCollectionDataProvider:(id)arg1;
- (id)authorFinderUsername;
- (void)setAuthorFinderUsername:(id)arg1;
- (id)paidCollection;
- (void)setPaidCollection:(id)arg1;
- (BOOL)isHalfScreen;
- (void)setIsHalfScreen:(BOOL)arg1;
- (void).cxx_destruct;
@end

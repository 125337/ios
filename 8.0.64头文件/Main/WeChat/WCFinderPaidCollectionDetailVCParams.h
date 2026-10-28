@interface WCFinderPaidCollectionDetailVCParams : NSObject
{
    BOOL _halfScreen; // +0x8
    BOOL _autoStartPurchase; // +0x9
    BOOL _authorScene; // +0xa
    BOOL _feedItemAuthorScene; // +0xb
    int _commentScene; // +0xc
    FinderPaidCollectionInfo * _paidCollectionInfo; // +0x10
    NSString * _sourceFeedID; // +0x18
    NSString * _authorFinderUsername; // +0x20
}
+ (id)defaultParams;
- (BOOL)halfScreen;
- (void)setHalfScreen:(BOOL)arg1;
- (id)paidCollectionInfo;
- (void)setPaidCollectionInfo:(id)arg1;
- (id)sourceFeedID;
- (void)setSourceFeedID:(id)arg1;
- (id)authorFinderUsername;
- (void)setAuthorFinderUsername:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (BOOL)autoStartPurchase;
- (void)setAutoStartPurchase:(BOOL)arg1;
- (BOOL)authorScene;
- (void)setAuthorScene:(BOOL)arg1;
- (BOOL)feedItemAuthorScene;
- (void)setFeedItemAuthorScene:(BOOL)arg1;
- (void).cxx_destruct;
@end

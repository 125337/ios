@interface WCFinderPaidCollectionInfoJumpParams : NSObject
{
    BOOL _showHalfDetailVC; // +0x8
    BOOL _autoStartPurchase; // +0x9
    BOOL _isSelfCollection; // +0xa
    BOOL _authorJumpDetail; // +0xb
    int _commentScene; // +0xc
    FinderPaidCollectionInfo * _paidCollection; // +0x10
    UIViewController * _fromVC; // +0x18
    NSString * _sourceFeedID; // +0x20
    id <WCFinderCollectionFeedListProvider> _dataProvider; // +0x28
    NSString * _authorFinderUsername; // +0x30
    id /* block */ _completion; // +0x38
    unsigned long long _jumpType; // +0x40
    NSString * _targetFeedID; // +0x48
    id <WCFinderCollectionFeedListViewControllerDelegate> _feedListDelegate; // +0x50
}
+ (id)paramsWithPaidCollection:(id)arg1 fromVC:(id)arg2;
- (id)paidCollection;
- (void)setPaidCollection:(id)arg1;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)sourceFeedID;
- (void)setSourceFeedID:(id)arg1;
- (id)dataProvider;
- (void)setDataProvider:(id)arg1;
- (BOOL)showHalfDetailVC;
- (void)setShowHalfDetailVC:(BOOL)arg1;
- (id)authorFinderUsername;
- (void)setAuthorFinderUsername:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (unsigned long long)jumpType;
- (void)setJumpType:(unsigned long long)arg1;
- (id)targetFeedID;
- (void)setTargetFeedID:(id)arg1;
- (BOOL)autoStartPurchase;
- (void)setAutoStartPurchase:(BOOL)arg1;
- (id)feedListDelegate;
- (void)setFeedListDelegate:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (BOOL)isSelfCollection;
- (void)setIsSelfCollection:(BOOL)arg1;
- (BOOL)authorJumpDetail;
- (void)setAuthorJumpDetail:(BOOL)arg1;
- (void).cxx_destruct;
@end


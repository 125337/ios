@interface WCCommentImagesBrowseViewModel : NSObject
{
    BOOL _isPresentModal; // +0x8
    long long _currentIndex; // +0x10
    WCUserComment * _curUserComment; // +0x18
    NSArray * _commentsArr; // +0x20
    WCDataItem * _dataItem; // +0x28
    UIView * _startView; // +0x30
    NSString * _snsSessionId; // +0x38
    long long _snsScene; // +0x40
    WCMomentsPageContext * _pageContext; // +0x48
    CGRect _startingFrame; // +0x50
}
- (long long)currentIndex;
- (void)setCurrentIndex:(long long)arg1;
- (id)curUserComment;
- (void)setCurUserComment:(id)arg1;
- (id)commentsArr;
- (void)setCommentsArr:(id)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (CGRect)startingFrame;
- (void)setStartingFrame:(CGRect)arg1;
- (id)startView;
- (void)setStartView:(id)arg1;
- (BOOL)isPresentModal;
- (void)setIsPresentModal:(BOOL)arg1;
- (id)snsSessionId;
- (void)setSnsSessionId:(id)arg1;
- (long long)snsScene;
- (void)setSnsScene:(long long)arg1;
- (id)pageContext;
- (void)setPageContext:(id)arg1;
- (void).cxx_destruct;
@end

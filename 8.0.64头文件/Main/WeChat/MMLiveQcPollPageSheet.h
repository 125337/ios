@interface MMLiveQcPollPageSheet : MMPageSheetBaseView <UICollectionViewDelegate, UICollectionViewDataSource, MMPageSheetBottomViewDelegate>
{
    BOOL _firstResponseSelected; // +0x8
    BOOL _responseEntered; // +0x9
    id <MMLiveQcPollResponseDelegate> _responseDelegate; // +0x10
    id _userInfo; // +0x18
    MMLiveQcPollQuestion * _question; // +0x20
    UICollectionViewFlowLayout * _collectionViewLayout; // +0x28
    UICollectionView * _collectionView; // +0x30
}
- (id)initWithQuestion:(id)arg1;
- (void)pageSheetDidDisappear;
- (void)layoutSubviews;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)onClickPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)initializeComponents;
- (id)responseDelegate;
- (void)setResponseDelegate:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)question;
- (void)setQuestion:(id)arg1;
- (id)collectionViewLayout;
- (void)setCollectionViewLayout:(id)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (BOOL)firstResponseSelected;
- (void)setFirstResponseSelected:(BOOL)arg1;
- (BOOL)responseEntered;
- (void)setResponseEntered:(BOOL)arg1;
- (void).cxx_destruct;
@end

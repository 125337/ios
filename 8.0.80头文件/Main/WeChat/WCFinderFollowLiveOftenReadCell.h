@interface WCFinderFollowLiveOftenReadCell : UICollectionViewCell
{
    WCFinderFollowLiveOftenReadItemVM * _itemVM; // +0x8
    id /* block */ _exposeCallback; // +0x10
    WCFinderHeadImageView * _headImageView; // +0x18
    UIImageView * _liveRingView; // +0x20
    UIView * _liveTipsContainer; // +0x28
    UILabel * _liveTipsLabel; // +0x30
    UILabel * _nicknameLabel; // +0x38
}
+ (id)cellIdentifier;
+ (CGSize)cellSize;
- (id)initWithFrame:(CGRect)arg1;
- (void)_setUpUI;
- (void)layoutSubviews;
- (void)_setUpReport;
- (void)updateWithItemVM:(id)arg1;
- (void)prepareForReuse;
- (id)itemVM;
- (void)setItemVM:(id)arg1;
- (id /* block */)exposeCallback;
- (void)setExposeCallback:(id /* block */)arg1;
- (id)headImageView;
- (void)setHeadImageView:(id)arg1;
- (id)liveRingView;
- (void)setLiveRingView:(id)arg1;
- (id)liveTipsContainer;
- (void)setLiveTipsContainer:(id)arg1;
- (id)liveTipsLabel;
- (void)setLiveTipsLabel:(id)arg1;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg1;
- (void).cxx_destruct;
@end

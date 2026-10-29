@interface WCFinderWXInteractiveHeaderView : UIScrollView
{
    MMUIButton * _allBtn; // +0x8
    MMUIButton * _likeBtn; // +0x10
    MMUIButton * _fingerBtn; // +0x18
    MMUIButton * _favBtn; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutAllSubviews;
- (id)allBtn;
- (id)likeBtn;
- (id)fingerBtn;
- (id)favBtn;
- (void)onClickAllBtn;
- (void)onClickLikeBtn;
- (void)onClickFingerBtn;
- (void)onClickFavBtn;
- (void)changeSelectType:(long long)arg1;
- (void)setAllBtn:(id)arg1;
- (void)setLikeBtn:(id)arg1;
- (void)setFingerBtn:(id)arg1;
- (void)setFavBtn:(id)arg1;
- (void).cxx_destruct;
@end


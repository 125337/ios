@interface MsgImageCollectionViewCell : UICollectionViewCell
{
    MsgImageSquareThumbView * _thumbView; // +0x8
    SimpleImgInfo * _imgInfo; // +0x10
    FavCheckBox * _favCheckBox; // +0x18
    UIView * _favCheckBoxHotArea; // +0x20
    id /* block */ _onFavCheckBoxTapped; // +0x28
}
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1;
- (void)configFavCheckBoxWithNewStyle:(BOOL)arg1 selected:(BOOL)arg2 showsCheckMark:(BOOL)arg3;
- (void)layoutFavCheckBoxToContentBounds;
- (void)layoutSubviews;
- (void)onFavCheckBoxHotAreaTapped;
- (id)thumbView;
- (void)setThumbView:(id)arg1;
- (id)imgInfo;
- (void)setImgInfo:(id)arg1;
- (id)favCheckBox;
- (void)setFavCheckBox:(id)arg1;
- (id)favCheckBoxHotArea;
- (void)setFavCheckBoxHotArea:(id)arg1;
- (id /* block */)onFavCheckBoxTapped;
- (void)setOnFavCheckBoxTapped:(id /* block */)arg1;
- (void).cxx_destruct;
@end

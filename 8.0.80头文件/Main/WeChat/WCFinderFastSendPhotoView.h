@interface WCFinderFastSendPhotoView : UIButton
{
    id /* block */ _onPhotoSelected; // +0x8
    WCFinderCheckRecentAlbumResult * _recentAlbumResult; // +0x10
    WCFinderRichTextView * _fittingTitleLabel; // +0x18
    UIImageView * _photoView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)adjustUILayout;
- (void)setHighlighted:(BOOL)arg1;
- (void)updateWithRecentAlbum:(id)arg1;
- (CGSize)fittingContentSize;
- (void)tapAction:(id)arg1;
- (id /* block */)onPhotoSelected;
- (void)setOnPhotoSelected:(id /* block */)arg1;
- (id)recentAlbumResult;
- (void)setRecentAlbumResult:(id)arg1;
- (id)fittingTitleLabel;
- (void)setFittingTitleLabel:(id)arg1;
- (id)photoView;
- (void)setPhotoView:(id)arg1;
- (void).cxx_destruct;
@end

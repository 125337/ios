@interface WCFinderVideoCardCollectionViewCell : UICollectionViewCell
{
    double _imageContainerHeight; // +0x8
    RichTextView * _textView; // +0x10
    WCFinderMediaInfo * _mediaInfo; // +0x18
    WCFinderFeedMediaWrap * _mediaWrap; // +0x20
    WCFinderFeedImageView * _imageContainer; // +0x28
    WCFinderStaticCoverInfoView * _infoView; // +0x30
    UILabel * _nicknameLabel; // +0x38
}
- (void)prepareForReuse;
- (id)infoView;
- (id)imageContainer;
- (id)textView;
- (id)nicknameLabel;
- (void)adjustAllSubviews;
- (void)updateWithDataItem:(id)arg1 showLikeFlag:(BOOL)arg2;
- (id)getLikeRightItemByDataItem:(id)arg1;
- (void)reloadImage;
- (void)setImage:(id)arg1 isThumb:(BOOL)arg2;
- (double)imageContainerHeight;
- (void)setImageContainerHeight:(double)arg1;
- (void)setTextView:(id)arg1;
- (id)mediaInfo;
- (void)setMediaInfo:(id)arg1;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (void)setImageContainer:(id)arg1;
- (void)setInfoView:(id)arg1;
- (void)setNicknameLabel:(id)arg1;
- (void).cxx_destruct;
@end


@interface WNAttachmentBaseView : RTEAttachmentView <FavFullScreenImageViewControllerDelegate>
{
    BOOL _presentationStyleExplicit; // +0x8
    long long _presentationStyle; // +0x10
    id <WNAttachmentBaseViewDelegate> _wnDelegate; // +0x18
    WNTextAttachment * _wnAttachment; // +0x20
    UIView * _contentView; // +0x28
    UIView * _backgroundView; // +0x30
    UIView * _borderView; // +0x38
    CAShapeLayer * _borderLayer; // +0x40
    UIImageView * _thumbImageView; // +0x48
    UITextField * _titleLabel; // +0x50
    UITextField * _descLabel; // +0x58
    FavFullScreenImageViewController * _favImageVC; // +0x60
}
- (id)wnAttachment;
- (long long)presentationStyle;
- (void)setPresentationStyle:(long long)arg1;
- (id)initWithAttachment:(id)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)layoutView;
- (void)layoutViewBorder;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutThumbImageView;
- (void)layoutTitleLabel;
- (void)layoutDescLabel;
- (void)flashBackgroundView;
- (void)openImageWithEdit:(BOOL)arg1;
- (BOOL)ifLayoutViewByBase;
- (id)getTitle;
- (id)getDescription;
- (id)getImage;
- (CGRect)getImageViewFrame;
- (id)getColorFromName:(id)arg1;
- (id)getColorFromName:(id)arg1 withTransparent:(BOOL)arg2;
- (id)getColor:(id)arg1 andReplaceColor:(id)arg2;
- (void)didAddToSuperview;
- (id)getOriginImageViewWithSimpleImgInfo:(id)arg1;
- (void)onFavFullScreenEditImageAt:(unsigned int)arg1 withImage:(id)arg2;
- (void)tryToDownloadVideoWith:(id)arg1;
- (BOOL)isVideoNeedLazyDownload:(id)arg1;
- (id)wnDelegate;
- (void)setWnDelegate:(id)arg1;
- (void)setWnAttachment:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)borderView;
- (void)setBorderView:(id)arg1;
- (id)borderLayer;
- (void)setBorderLayer:(id)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)favImageVC;
- (void)setFavImageVC:(id)arg1;
- (void).cxx_destruct;
@end

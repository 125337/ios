@interface RecentPhotoBubbleView : UIButton
{
    UIImage * _originImage; // +0x8
    UILabel * _textLabel; // +0x10
}
- (id)init;
- (id)initWithText:(id)arg1 OriginImage:(id)arg2 AndThumbImage:(id)arg3;
- (void)initBackgroundImage;
- (void)initBubbleImageView:(id)arg1;
- (void)initTextLabel:(id)arg1;
- (void)layoutSubviews;
- (void)showRecentPhotoViewAnimated;
- (void)hideRecentPhotoViewAnimated;
- (void)dealloc;
- (id)originImage;
- (void)setOriginImage:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end


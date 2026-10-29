@interface MSETimelineShareContentView : UIView <MSETitleBarDelegate, UITextViewDelegate>
{
    id <MSETimelineShareContentViewDelegate> _delegate; // +0x8
    MSETextView * _textView; // +0x10
    UIView * _bottomView; // +0x18
    long long _shareContentType; // +0x20
    NSArray * _imgUrls; // +0x28
    NSString * _shareTitle; // +0x30
    NSURL * _thumbUrl; // +0x38
    NSURL * _shareUrl; // +0x40
    NSString * _thumbPath; // +0x48
    UIView * _contentView; // +0x50
    NSString * _shareContent; // +0x58
    MSEImageCollectionView * _imageCollectionView; // +0x60
    MSENewUrlContentView * _urlContentView; // +0x68
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutTimelineWithImageUrls:(id)arg1;
- (void)layoutTimelineWithShareUrlTitle:(id)arg1 shareUrlThumbUrl:(id)arg2 shareUrl:(id)arg3;
- (void)layoutTimelineWithShareUrlTitle:(id)arg1 shareUrlThumbPath:(id)arg2 shareUrl:(id)arg3;
- (void)updateContentSize:(CGSize)arg1;
- (void)viewWillAppear;
- (id)textView;
- (id)contentView;
- (id)bottomView;
- (void)layoutTimelineContentViewForImageContent;
- (void)layoutTimelineContentViewForUrlContent;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(_NSRange)arg2 replacementText:(id)arg3;
- (unsigned int)calStringLen:(id)arg1;
- (void)onLeftBtnPress;
- (void)onRightBtnPress;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTextView:(id)arg1;
- (void)setBottomView:(id)arg1;
- (long long)shareContentType;
- (void)setShareContentType:(long long)arg1;
- (id)imgUrls;
- (void)setImgUrls:(id)arg1;
- (id)shareTitle;
- (void)setShareTitle:(id)arg1;
- (id)thumbUrl;
- (void)setThumbUrl:(id)arg1;
- (id)shareUrl;
- (void)setShareUrl:(id)arg1;
- (id)thumbPath;
- (void)setThumbPath:(id)arg1;
- (void)setContentView:(id)arg1;
- (id)shareContent;
- (void)setShareContent:(id)arg1;
- (id)imageCollectionView;
- (void)setImageCollectionView:(id)arg1;
- (id)urlContentView;
- (void)setUrlContentView:(id)arg1;
- (void).cxx_destruct;
@end


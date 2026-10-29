@interface WCGiftCardLetterView : MMUIView <WCCardImageBrowserDelegate>
{
    double _maxWidth; // +0x8
    WCGiftCardData * _giftCardData; // +0x10
    MMWebImageView * _headImageView; // +0x18
    UILabel * _fromUserLabel; // +0x20
    MMWebImageView * _giftImageView; // +0x28
    UIImageView * _giftImageShadowView; // +0x30
    UIImageView * _giftPlayIconView; // +0x38
    RichTextView * _wishTextView; // +0x40
    UIView * _divideLine; // +0x48
    NSMutableArray * _textLineArray; // +0x50
    long long _lineCount; // +0x58
    NSString * _fullImagePath; // +0x60
    MMUIWindow * _fullScreenWindow; // +0x68
    WCCardVideoViewController * _videoVC; // +0x70
    WCCardImageBrowserViewController * _imageVC; // +0x78
    NSString * _resourcePath; // +0x80
    long long _downloadState; // +0x88
}
- (id)initWithFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)beiginDownLoad;
- (void)setGiftCardData:(id)arg1;
- (id)headImageView;
- (id)fromUserLabel;
- (id)giftImageView;
- (id)giftPlayIconView;
- (id)giftImageShadowView;
- (id)wishTextView;
- (id)divideLine;
- (void)giftButtonDidClick:(id)arg1;
- (void)presentImageVC:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (id)giftCardData;
- (void)setHeadImageView:(id)arg1;
- (void)setFromUserLabel:(id)arg1;
- (void)setGiftImageView:(id)arg1;
- (void)setGiftImageShadowView:(id)arg1;
- (void)setGiftPlayIconView:(id)arg1;
- (void)setWishTextView:(id)arg1;
- (void)setDivideLine:(id)arg1;
- (id)textLineArray;
- (void)setTextLineArray:(id)arg1;
- (long long)lineCount;
- (void)setLineCount:(long long)arg1;
- (id)fullImagePath;
- (void)setFullImagePath:(id)arg1;
- (id)fullScreenWindow;
- (void)setFullScreenWindow:(id)arg1;
- (id)videoVC;
- (void)setVideoVC:(id)arg1;
- (id)imageVC;
- (void)setImageVC:(id)arg1;
- (id)resourcePath;
- (void)setResourcePath:(id)arg1;
- (long long)downloadState;
- (void)setDownloadState:(long long)arg1;
- (void).cxx_destruct;
@end

@interface WCFinderNotifyAttachDisplayView : UIView <WCFinderCommentEmoticonViewDelegate, WCFinderCommentImageViewDelegate>
{
    WCFinderMention * _mention; // +0x8
    WCFinderCommentImageView * _imageView; // +0x10
    WCFinderCommentEmoticonView * _emoticonView; // +0x18
}
- (id)init;
- (void)updateWithMention:(id)arg1;
- (void)finderCommentImageView:(id)arg1 didClickWithComment:(id)arg2;
- (void)finderCommentEmoticonView:(id)arg1 didClickEmoticonView:(id)arg2;
- (id)finderCommentEmoticonViewGetFeedId;
- (id)finderCommentImageViewGetFeedId;
- (void)clickAction;
- (id)mention;
- (void)setMention:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)emoticonView;
- (void)setEmoticonView:(id)arg1;
- (void).cxx_destruct;
@end

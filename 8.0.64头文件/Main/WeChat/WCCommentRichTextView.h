@interface WCCommentRichTextView : RichTextView <ImageStyleDelegate>
{
    WCUserComment * _userComment; // +0x98
    NSString * _tid; // +0xa0
    WCImageMediaItemLoader * _imageMediaItemLoader; // +0xa8
}
- (BOOL)provideImageForStyle:(id)arg1 handler:(id /* block */)arg2;
- (id)loadingConfigForImageStyle:(id)arg1 isRetry:(BOOL)arg2;
- (id)generateCommentImageStyleLoadingConfig;
- (id)generateEmoticonThumbStyleLoadingConfig;
- (id)loadFailImg;
- (id)emoticonThumbLoadFailImg;
- (id)createImageViewWithSize:(CGSize)arg1 color:(id)arg2;
- (id)loadingView;
- (BOOL)fetchCommentImageWithHandler:(id /* block */)arg1;
- (void)setUserComment:(id)arg1;
- (id)emojiInfoForMd5:(id)arg1;
- (id)userComment;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)imageMediaItemLoader;
- (void)setImageMediaItemLoader:(id)arg1;
- (void).cxx_destruct;
@end

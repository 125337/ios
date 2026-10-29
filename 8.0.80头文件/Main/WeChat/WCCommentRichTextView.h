@interface WCCommentRichTextView : ExpandableTextView <ImageStyleDelegate>
{
    BOOL _inCustomSetFWidth; // +0x98
    WCUserComment * _userComment; // +0xa0
    NSString * _tid; // +0xa8
    ExpandableTextViewConfig * _expandableConfig; // +0xb0
    WCImageMediaItemLoader * _imageMediaItemLoader; // +0xb8
    NSString * _savedPrefixContent; // +0xc0
    NSString * _savedTargetContent; // +0xc8
    NSString * _savedTargetParserString; // +0xd0
    NSString * _savedSuffixContent; // +0xd8
}
+ (UIEdgeInsets)expandHitAreaInsetsForRect:(CGRect)arg1;
+ (CGRect)expandHitAreaForRect:(CGRect)arg1;
- (id)initWithConfig:(id)arg1;
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
- (void)saveOriginalContentWithPrefix:(id)arg1 targetContent:(id)arg2 targetParserString:(id)arg3 suffixContent:(id)arg4;
- (BOOL)setPrefixContent:(id)arg1 TargetContent:(id)arg2 TargetParserString:(id)arg3 SuffixContent:(id)arg4;
- (void)setFWidth:(double)arg1;
- (id)userComment;
- (id)tid;
- (void)setTid:(id)arg1;
- (id)expandableConfig;
- (void)setExpandableConfig:(id)arg1;
- (id)imageMediaItemLoader;
- (void)setImageMediaItemLoader:(id)arg1;
- (id)savedPrefixContent;
- (void)setSavedPrefixContent:(id)arg1;
- (id)savedTargetContent;
- (void)setSavedTargetContent:(id)arg1;
- (id)savedTargetParserString;
- (void)setSavedTargetParserString:(id)arg1;
- (id)savedSuffixContent;
- (void)setSavedSuffixContent:(id)arg1;
- (void).cxx_destruct;
@end

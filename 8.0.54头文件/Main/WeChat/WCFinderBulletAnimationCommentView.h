@interface WCFinderBulletAnimationCommentView : MMUIView
{
    RichTextView * _richText; // +0x8
    WCFinderComment * _comment; // +0x10
    UIView * _lineView; // +0x18
    UIImageView * _likeIconView; // +0x20
    UILabel * _likeNumLabel; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithComment:(id)arg1;
- (id)richText;
- (void)setRichText:(id)arg1;
- (id)comment;
- (void)setComment:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)likeIconView;
- (void)setLikeIconView:(id)arg1;
- (id)likeNumLabel;
- (void)setLikeNumLabel:(id)arg1;
- (void).cxx_destruct;
@end


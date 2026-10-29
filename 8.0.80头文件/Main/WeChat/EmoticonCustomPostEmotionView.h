@interface EmoticonCustomPostEmotionView : UICollectionReusableView
{
    float _postWordingLabelLeftOffset; // +0x8
    UILabel * _postWordingLabel; // +0x10
    UIButton * _closeButton; // +0x18
    UIButton * _postButton; // +0x20
    UIImageView * _thumbView1; // +0x28
    UIImageView * _thumbView2; // +0x30
    NSArray * _postEmoticonMd5s; // +0x38
    NSLayoutConstraint * _aspectRatioConstraint; // +0x40
    NSLayoutConstraint * _labelLeadingConstraint; // +0x48
    id <CustomEmoticonPostEmotionViewDelegate> _delegate; // +0x50
}
- (void)layoutWithSize:(CGSize)arg1;
- (void)initView;
- (void)addPostEmoticons:(id)arg1;
- (void)initThumbView;
- (void)initPostWordingLabel;
- (void)initPostButton;
- (void)initCloseButton;
- (void)setDelegate:(id)arg1;
- (void)onClickClose;
- (void)onPostEvent;
- (void)postButtonTouchDown:(id)arg1;
- (void)postButtonTouchUp:(id)arg1;
- (id)postWordingLabel;
- (void)setPostWordingLabel:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)postButton;
- (void)setPostButton:(id)arg1;
- (id)thumbView1;
- (void)setThumbView1:(id)arg1;
- (id)thumbView2;
- (void)setThumbView2:(id)arg1;
- (id)postEmoticonMd5s;
- (void)setPostEmoticonMd5s:(id)arg1;
- (float)postWordingLabelLeftOffset;
- (void)setPostWordingLabelLeftOffset:(float)arg1;
- (id)aspectRatioConstraint;
- (void)setAspectRatioConstraint:(id)arg1;
- (id)labelLeadingConstraint;
- (void)setLabelLeadingConstraint:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
@end

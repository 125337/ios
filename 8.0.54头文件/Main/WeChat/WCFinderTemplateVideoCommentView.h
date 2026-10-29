@interface WCFinderTemplateVideoCommentView : MMUIView <WCFinderFeedContentTextClickActionDelegate>
{
    id <WCFinderTemplateVideoCommentView> _delegate; // +0x8
    WCFinderFeedContentTouchExpandTextView * _textView; // +0x10
    UIImageView * _imgView; // +0x18
    UIImageView * _playIconView; // +0x20
    WCFinderTemplateCommentArrowButton * _cutSameVideoBtn; // +0x28
    unsigned long long _commentType; // +0x30
}
+ (double)heightWithComment:(id)arg1 width:(double)arg2 forceExpand:(BOOL)arg3;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (double)updateWithComment:(id)arg1 isAuthor:(BOOL)arg2;
- (void)updateCutSameBtnStyleByComment:(id)arg1;
- (void)onClickPreviewView;
- (void)onClickCutSameBtn;
- (void)onFeedContentTextView:(id)arg1 clickReadMore:(BOOL)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)imgView;
- (void)setImgView:(id)arg1;
- (id)playIconView;
- (void)setPlayIconView:(id)arg1;
- (id)cutSameVideoBtn;
- (void)setCutSameVideoBtn:(id)arg1;
- (unsigned long long)commentType;
- (void)setCommentType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end


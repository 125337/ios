@interface WCCanvasHalfRandomSubCardBulletCommentsView : UIView
{
    id <WCCanvasHalfRandomSubCardBulletCommentsViewDelegate> _delegate; // +0x8
    NSString * _title; // +0x10
    NSArray * _bulletComments; // +0x18
    MMUILabel * _titleLabel; // +0x20
    NSMutableArray * _bulletCommentViews; // +0x28
}
- (id)initWithFrame:(CGRect)arg1 title:(id)arg2 bulletComments:(id)arg3 delegate:(id)arg4;
- (void)initSubViews;
- (void)layoutSubviews;
- (id)titleLabel;
- (id)bulletCommentViews;
- (void)generateBulletCommentViews;
- (void)onBulletCommentButtonClicked:(id)arg1;
- (id)fetchCanvasPageId;
- (id)fetchCanvasItemCardId;
- (int)fetchCanvasFinderCommentScene;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)bulletComments;
- (void)setBulletComments:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setBulletCommentViews:(id)arg1;
- (void).cxx_destruct;
@end

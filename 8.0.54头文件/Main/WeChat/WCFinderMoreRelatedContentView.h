@interface WCFinderMoreRelatedContentView : UIView
{
    id /* block */ _recoverBlock; // +0x8
    NSMutableArray * _avatarArray; // +0x10
    WCFinderCustomImageRichTextView * _richTextView; // +0x18
    FinderRelatedRecommendTips * _recommendTips; // +0x20
    UIImageView * _topArrowImageView; // +0x28
    double _layoutWidth; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (id)showTitle;
- (id)richTextView;
- (id)topArrowImageView;
- (void)layoutSubviews;
- (id)avatarArray;
- (id)downArrowXmlStr;
- (void)updateContentTitle:(id)arg1 showArrow:(BOOL)arg2;
- (void)clearAvatarArray;
- (void)updateContentByRecommendTips:(id)arg1;
- (void)layoutRecommentTips;
- (double)showDurationTime;
- (double)tipsMargin;
- (id /* block */)recoverBlock;
- (void)setRecoverBlock:(id /* block */)arg1;
- (void)setAvatarArray:(id)arg1;
- (void)setRichTextView:(id)arg1;
- (id)recommendTips;
- (void)setRecommendTips:(id)arg1;
- (void)setTopArrowImageView:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end


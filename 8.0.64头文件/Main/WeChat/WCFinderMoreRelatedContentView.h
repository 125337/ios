@interface WCFinderMoreRelatedContentView : UIView
{
    unsigned long long _identity; // +0x8
    id /* block */ _onTapAction; // +0x10
    NSMutableArray * _avatarArray; // +0x18
    WCFinderRichTextView * _richTextView; // +0x20
    FinderRelatedRecommendTips * _recommendTips; // +0x28
    UIImageView * _doubleUpArrowImageView; // +0x30
    double _layoutWidth; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (id)showTitle;
- (id)richTextView;
- (id)doubleUpArrowImageView;
- (void)layoutSubviews;
- (id)avatarArray;
- (id)singleUpArrowXmlStr;
- (void)updateContentTitle:(id)arg1 showArrow:(BOOL)arg2;
- (void)clearAvatarArray;
- (void)updateContentByRecommendTips:(id)arg1;
- (void)layoutRecommendTips;
- (void)_onTap;
- (double)showDurationTime;
- (double)tipsMargin;
- (unsigned long long)identity;
- (void)setIdentity:(unsigned long long)arg1;
- (id /* block */)onTapAction;
- (void)setOnTapAction:(id /* block */)arg1;
- (void)setAvatarArray:(id)arg1;
- (void)setRichTextView:(id)arg1;
- (id)recommendTips;
- (void)setRecommendTips:(id)arg1;
- (void)setDoubleUpArrowImageView:(id)arg1;
- (double)layoutWidth;
- (void)setLayoutWidth:(double)arg1;
- (void).cxx_destruct;
@end

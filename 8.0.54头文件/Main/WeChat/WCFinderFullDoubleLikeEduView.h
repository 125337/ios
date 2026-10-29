@interface WCFinderFullDoubleLikeEduView : UIView
{
    BOOL _doubleLikeEduViewShowYet; // +0x8
    NSString * _eduTips; // +0x10
    id /* block */ _hitBlock; // +0x18
    LOTAnimationView * _doubleLikeView; // +0x20
    WCFinderCustomImageRichTextView * _eduTipsLabel; // +0x28
}
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)doubleLikeView;
- (id)eduTipsLabel;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;
- (void)play;
- (BOOL)doubleLikeEduViewShowYet;
- (void)setDoubleLikeEduViewShowYet:(BOOL)arg1;
- (id)eduTips;
- (void)setEduTips:(id)arg1;
- (id /* block */)hitBlock;
- (void)setHitBlock:(id /* block */)arg1;
- (void)setDoubleLikeView:(id)arg1;
- (void)setEduTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end


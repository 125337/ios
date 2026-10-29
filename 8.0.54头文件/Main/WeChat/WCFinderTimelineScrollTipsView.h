@interface WCFinderTimelineScrollTipsView : UIView
{
    NSString * _feedID; // +0x8
    id /* block */ _clickAction; // +0x10
    UILabel * _label; // +0x18
    UIImageView * _iconImage; // +0x20
    UITapGestureRecognizer * _tapGesture; // +0x28
}
+ (id)tipsViewWithTips:(id)arg1 imageName:(id)arg2 maxWidth:(double)arg3;
- (void)setUpWithTips:(id)arg1 imageName:(id)arg2 maxWidth:(double)arg3;
- (void)setClickAction:(id /* block */)arg1;
- (void)clickTipsAction;
- (id)feedID;
- (void)setFeedID:(id)arg1;
- (id /* block */)clickAction;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end


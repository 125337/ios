@interface WCFinderShieldOtherLikedFeedGuideCell : UITableViewCell
{
    UILabel * _tipsLabel; // +0x8
    UIView * _lineView; // +0x10
}
+ (id)cellID;
+ (id)createLabel;
+ (double)heightWithInfo:(id)arg1 width:(double)arg2;
- (void)updateWithInfo:(id)arg1;
- (void)layoutSubviews;
- (void)layoutContentViews;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (void).cxx_destruct;
@end


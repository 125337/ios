@interface MMFinderLiveRemindTipsView : UIView
{
    MMWebImageView * _imageView; // +0x8
    UILabel * _label; // +0x10
    FinderWindowProductInfo_RemindTips * _info; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)tapGestureAction;
- (void)updateWithInfo:(id)arg1;
- (id)imageView;
- (void)setImageView:(id)arg1;
- (id)label;
- (void)setLabel:(id)arg1;
- (id)info;
- (void)setInfo:(id)arg1;
- (void).cxx_destruct;
@end

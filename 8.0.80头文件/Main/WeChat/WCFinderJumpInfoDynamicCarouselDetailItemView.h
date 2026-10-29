@interface WCFinderJumpInfoDynamicCarouselDetailItemView : UIView <MMWebImageViewDelegate>
{
    WCFinderJumpInfoDynamicCarouselDetailSubViewItem * _subViewItem; // +0x8
    id /* block */ _contentSizeDidChangeBlock; // +0x10
    MMWebImageView * _iconImageView; // +0x18
    MMUILabel * _textLabel; // +0x20
}
+ (id)createIconImageView;
+ (id)createTextLabel;
- (id)initWithSubViewItem:(id)arg1;
- (void)loadSubviews;
- (void)updateContent;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)iconSizeThatFitsWithMaxHeight:(double)arg1;
- (void)layoutSubviews;
- (void)contentSizeDidChange;
- (void)onLoadImageOK:(id)arg1;
- (id)subViewItem;
- (id /* block */)contentSizeDidChangeBlock;
- (void)setContentSizeDidChangeBlock:(id /* block */)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (void).cxx_destruct;
@end

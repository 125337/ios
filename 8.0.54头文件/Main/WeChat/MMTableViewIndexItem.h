@interface MMTableViewIndexItem : MMUIView
{
    UILabel * _label; // +0x8
    UIImageView * _imageView; // +0x10
    UIView * _backgroundRoundView; // +0x18
    BOOL _selected; // +0x20
    NSString * _title; // +0x28
    UIImage * _iconImage; // +0x30
    UIImage * _renderedIconImage; // +0x38
    UIImage * _searchIconImage; // +0x40
}
- (void)reloadViewWithBrandColor:(id)arg1;
- (double)indexWidth;
- (void)setSelected:(BOOL)arg1;
- (void)setIconImage:(id)arg1;
- (id)searchIconImage;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)iconImage;
- (id)renderedIconImage;
- (void)setRenderedIconImage:(id)arg1;
- (void)setSearchIconImage:(id)arg1;
- (BOOL)selected;
- (void).cxx_destruct;
@end


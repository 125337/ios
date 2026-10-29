@interface MMAuthorizeScopeTableViewCell : UITableViewCell
{
    UIImageView * _selectImage; // +0x8
    UILabel * _scopeLabel; // +0x10
    BOOL _isMustSelect; // +0x18
    BOOL _isSelect; // +0x19
    NSString * _scopeDescription; // +0x20
}
+ (double)viewHeightWithScopeText:(id)arg1 cellWidth:(double)arg2;
- (void)updateView;
- (void)upadteSelectImage;
- (void)updateScopeLabel;
- (void)layoutSubviews;
- (id)scopeDescription;
- (void)setScopeDescription:(id)arg1;
- (BOOL)isMustSelect;
- (void)setIsMustSelect:(BOOL)arg1;
- (BOOL)isSelect;
- (void)setIsSelect:(BOOL)arg1;
- (void).cxx_destruct;
@end

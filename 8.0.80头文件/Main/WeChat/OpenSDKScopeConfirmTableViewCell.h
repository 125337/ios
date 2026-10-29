@interface OpenSDKScopeConfirmTableViewCell : UITableViewCell
{
    UIImageView * _selectImage; // +0x8
    UILabel * _scopeLabel; // +0x10
    BOOL _isMustSelect; // +0x18
    BOOL _isSelect; // +0x19
    NSString * _scopeDescription; // +0x20
}
+ (id)getScopeLabel;
+ (void)layoutScopeLabel:(id)arg1 width:(unsigned long long)arg2 getHeight:(unsigned long long *)arg3;
+ (unsigned long long)viewHeightWithScopeText:(id)arg1 width:(unsigned long long)arg2;
+ (unsigned long long)verticalMarginWithWidth:(unsigned long long)arg1;
- (void)updateView;
- (void)upadteSelectImage;
- (void)updateScopeLabel;
- (void)layoutSubviews;
- (void)layoutScopeLabel:(id)arg1 width:(unsigned long long)arg2;
- (id)scopeDescription;
- (void)setScopeDescription:(id)arg1;
- (BOOL)isMustSelect;
- (void)setIsMustSelect:(BOOL)arg1;
- (BOOL)isSelect;
- (void)setIsSelect:(BOOL)arg1;
- (void).cxx_destruct;
@end

@interface WAAuthPageSheetLocationItemViewModel : NSObject
{
    BOOL _isSelected; // +0x8
    NSString * _title; // +0x10
    long long _index; // +0x18
}
- (id)initWithTitle:(id)arg1 index:(long long)arg2 isSelected:(BOOL)arg3;
- (id)title;
- (void)setTitle:(id)arg1;
- (long long)index;
- (void)setIndex:(long long)arg1;
- (BOOL)isSelected;
- (void)setIsSelected:(BOOL)arg1;
- (void).cxx_destruct;
@end

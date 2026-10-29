@interface WABasePickerViewModel : NSObject
{
    NSString * _headerText; // +0x8
    NSArray * _items; // +0x10
    NSArray * _currentSelectedIdx; // +0x18
    double _contentMaxHeight; // +0x20
}
- (id)initWithItems:(id)arg1 currentSelectedIdx:(id)arg2;
- (id)titleForRow:(long long)arg1 forComponent:(long long)arg2;
- (id)headerText;
- (void)setHeaderText:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)currentSelectedIdx;
- (void)setCurrentSelectedIdx:(id)arg1;
- (double)contentMaxHeight;
- (void)setContentMaxHeight:(double)arg1;
- (void).cxx_destruct;
@end


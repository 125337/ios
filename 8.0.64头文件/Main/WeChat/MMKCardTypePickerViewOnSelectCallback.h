@interface MMKCardTypePickerViewOnSelectCallback : NSObject
{
    Handle<std::shared_ptr<kinda::KCardTypePickerViewOnSelectCallback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)onSelect:(int)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

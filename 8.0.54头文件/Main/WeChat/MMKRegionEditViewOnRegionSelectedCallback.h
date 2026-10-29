@interface MMKRegionEditViewOnRegionSelectedCallback : NSObject
{
    Handle<std::shared_ptr<kinda::KRegionEditViewOnRegionSelectedCallback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)onRegionSelected;
- (void).cxx_destruct;
- (id).cxx_construct;
@end


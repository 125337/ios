@interface MMKViewOnLongClickCallback : NSObject
{
    Handle<std::shared_ptr<kinda::KViewOnLongClickCallback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)onLongClick:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

@interface MMKViewOnClickCallback : NSObject
{
    Handle<std::shared_ptr<kinda::KViewOnClickCallback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)onClick:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

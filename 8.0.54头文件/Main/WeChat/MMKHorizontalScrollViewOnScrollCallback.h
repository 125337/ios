@interface MMKHorizontalScrollViewOnScrollCallback : NSObject
{
    Handle<std::shared_ptr<kinda::KHorizontalScrollViewOnScrollCallback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)onScroll:(float)arg1 y:(float)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end


@interface MMKViewOnTouchCallback : NSObject
{
    Handle<std::shared_ptr<kinda::KViewOnTouchCallback>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)onTouch:(id)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

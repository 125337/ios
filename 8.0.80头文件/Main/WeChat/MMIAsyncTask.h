@interface MMIAsyncTask : NSObject
{
    Handle<std::shared_ptr<kinda::IAsyncTask>> _cppRefHandle; // +0x8
}
- (id)initWithCpp:(const void *)arg1;
- (void)execute;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

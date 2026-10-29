@interface MMCppUtil : NSObject
{
    Handle<std::shared_ptr<kinda::CppUtil>> _cppRefHandle; // +0x8
}
+ (id)getFilterLog:(id)arg1;
- (id)initWithCpp:(const void *)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end


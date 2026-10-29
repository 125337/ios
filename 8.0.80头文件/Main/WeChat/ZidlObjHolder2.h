@interface ZidlObjHolder2 : NSObject
{
    shared_ptr<zidl::ObjHolder2> _cppHolderImpl; // +0x8
}
+ (id)createWithCpp:(const void *)arg1;
- (id)init:(const void *)arg1;
- (id)init;
- (id)init:(const void *)arg1 identity:(const void *)arg2 refCntManager:(void *)arg3;
- (id)zidlHolderToObj:(Class)arg1;
- (void)dealloc;
- (shared_ptr<zidl::ObjHolder2>)cppHolderImpl;
- (void)setCppHolderImpl:(shared_ptr<zidl::ObjHolder2>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

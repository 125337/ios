@interface ZidlObjHolder : NSObject
{
    shared_ptr<zidl::ObjHolder> _cppHolderImpl; // +0x8
}
+ (id)createWithCpp:(const void *)arg1;
- (id)init:(const void *)arg1;
- (id)init;
- (id)init:(const void *)arg1 identity:(const void *)arg2;
- (void)copyTo:(id)arg1;
- (id)zidlHolderToObj:(Class)arg1;
- (void)holdZidlObj:(const void *)arg1 identity:(const void *)arg2;
- (shared_ptr<zidl::ObjHolder>)getObjHolderCpp;
- (void)dealloc;
- (shared_ptr<zidl::ObjHolder>)cppHolderImpl;
- (void)setCppHolderImpl:(shared_ptr<zidl::ObjHolder>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end


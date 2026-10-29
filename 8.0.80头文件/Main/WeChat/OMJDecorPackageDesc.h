@interface OMJDecorPackageDesc : NSObject
{
    SharedPtr<XMJDecorPackageDesc> _backingDecorPackageDesc; // +0x8
}
+ (id)emptyDesc;
- (id)initWithBackingDecorPackageDesc:(const void *)arg1;
- (const void *)backingDecorPackageDesc;
- (id)packageID;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

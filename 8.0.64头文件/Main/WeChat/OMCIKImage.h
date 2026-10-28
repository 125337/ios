@interface OMCIKImage : NSObject
{
    SharedPtr<XIKImage> _backingIKImage; // +0x8
}
- (id)initWithBackingIKImage:(const void *)arg1;
- (SharedPtr<XIKImage>)backingIKImage;
- (void)setBackingIKImage:(SharedPtr<XIKImage>)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

@interface TBImageHolder : NSObject
{
    int _rc; // +0x8
    UIImage * _image; // +0x10
}
- (id)image;
- (void)setImage:(id)arg1;
- (int)rc;
- (void)setRc:(int)arg1;
- (void).cxx_destruct;
@end


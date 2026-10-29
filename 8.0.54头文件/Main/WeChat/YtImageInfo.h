@interface YtImageInfo : JSONModel
{
    NSString * _image; // +0x8
    NSArray * _five_points; // +0x10
    NSString * _checksum; // +0x18
}
- (id)initWithImage:(id)arg1 faceShape:(vector<float, std::allocator<float>>)arg2 checksum:(id)arg3;
- (id)initWithImage:(id)arg1 imgPts:(id)arg2 checksum:(id)arg3;
- (id)image;
- (void)setImage:(id)arg1;
- (id)five_points;
- (void)setFive_points:(id)arg1;
- (id)checksum;
- (void)setChecksum:(id)arg1;
- (void).cxx_destruct;
@end


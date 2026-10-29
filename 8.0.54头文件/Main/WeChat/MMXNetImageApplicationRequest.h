@interface MMXNetImageApplicationRequest : NSObject
{
    UIImage * _image; // +0x8
    NSArray * _response; // +0x10
}
+ (id)requestWithImage:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)response;
- (void)setResponse:(id)arg1;
- (void).cxx_destruct;
@end


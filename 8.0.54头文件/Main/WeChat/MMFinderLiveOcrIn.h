@interface MMFinderLiveOcrIn : NSObject
{
    UIImage * _image; // +0x8
    id _userInfo; // +0x10
    NSString * _path; // +0x18
}
+ (id)buildInputWithImage:(id)arg1 path:(id)arg2 userInfo:(id)arg3;
- (id)image;
- (void)setImage:(id)arg1;
- (id)userInfo;
- (void)setUserInfo:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (void).cxx_destruct;
@end


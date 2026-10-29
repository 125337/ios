@interface TXRecordResult : NSObject
{
    long long _retCode; // +0x8
    NSString * _descMsg; // +0x10
    NSString * _videoPath; // +0x18
    UIImage * _coverImage; // +0x20
}
- (id)description;
- (long long)retCode;
- (void)setRetCode:(long long)arg1;
- (id)descMsg;
- (void)setDescMsg:(id)arg1;
- (id)videoPath;
- (void)setVideoPath:(id)arg1;
- (id)coverImage;
- (void)setCoverImage:(id)arg1;
- (void).cxx_destruct;
@end


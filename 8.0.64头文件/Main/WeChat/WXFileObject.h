@interface WXFileObject : NSObject
{
    NSString * fileExtension; // +0x8
    NSData * fileData; // +0x10
}
+ (id)object;
- (id)init;
- (id)fileExtension;
- (void)setFileExtension:(id)arg1;
- (id)fileData;
- (void)setFileData:(id)arg1;
- (void).cxx_destruct;
@end

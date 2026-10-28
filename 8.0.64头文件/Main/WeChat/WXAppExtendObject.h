@interface WXAppExtendObject : NSObject
{
    NSString * extInfo; // +0x8
    NSData * fileData; // +0x10
    NSString * url; // +0x18
}
+ (id)object;
- (id)init;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)fileData;
- (void)setFileData:(id)arg1;
- (id)url;
- (void)setUrl:(id)arg1;
- (void).cxx_destruct;
@end

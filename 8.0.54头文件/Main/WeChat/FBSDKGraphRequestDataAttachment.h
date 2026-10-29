@interface FBSDKGraphRequestDataAttachment : NSObject
{
    NSString * _contentType; // +0x8
    NSData * _data; // +0x10
    NSString * _filename; // +0x18
}
- (id)initWithData:(id)arg1 filename:(id)arg2 contentType:(id)arg3;
- (id)contentType;
- (id)data;
- (id)filename;
- (void).cxx_destruct;
@end


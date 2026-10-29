@interface FBSDKGraphRequestBody : NSObject
{
    NSMutableData * _data; // +0x8
    NSMutableDictionary * _json; // +0x10
    NSString * _stringBoundary; // +0x18
}
- (id)init;
- (id)mimeContentType;
- (void)appendUTF8:(id)arg1;
- (void)appendWithKey:(id)arg1 formValue:(id)arg2 logger:(id)arg3;
- (void)appendWithKey:(id)arg1 imageValue:(id)arg2 logger:(id)arg3;
- (void)appendWithKey:(id)arg1 dataValue:(id)arg2 logger:(id)arg3;
- (void)appendWithKey:(id)arg1 dataAttachmentValue:(id)arg2 logger:(id)arg3;
- (id)data;
- (void)_appendWithKey:(id)arg1 filename:(id)arg2 contentType:(id)arg3 contentBlock:(id /* block */)arg4;
- (id)compressedData;
- (void).cxx_destruct;
@end


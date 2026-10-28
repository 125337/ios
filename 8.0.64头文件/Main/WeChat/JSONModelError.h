@interface JSONModelError : NSError
{
    NSHTTPURLResponse * _httpResponse; // +0x28
    NSData * _responseData; // +0x30
}
+ (id)errorInvalidDataWithMessage:(id)arg1;
+ (id)errorInvalidDataWithMissingKeys:(id)arg1;
+ (id)errorInvalidDataWithTypeMismatch:(id)arg1;
+ (id)errorBadResponse;
+ (id)errorBadJSON;
+ (id)errorModelIsInvalid;
+ (id)errorInputIsNil;
- (id)errorByPrependingKeyPathComponent:(id)arg1;
- (id)httpResponse;
- (void)setHttpResponse:(id)arg1;
- (id)responseData;
- (void)setResponseData:(id)arg1;
- (void).cxx_destruct;
@end

@interface Base64Helper : NSObject
+ (id)encode_str_to_str:(id)arg1;
+ (id)encode_data_to_str:(id)arg1;
+ (id)encode_str_to_data:(id)arg1;
+ (id)encode_data_to_data:(id)arg1;
+ (id)decode_str_to_str:(id)arg1;
+ (id)decode_data_to_str:(id)arg1;
+ (id)decode_str_to_data:(id)arg1;
+ (id)decode_data_to_data:(id)arg1;
+ (BOOL)isValidedBase64EncodedChar:(unsigned short)arg1;
+ (BOOL)isValidedBase64EncodedData:(id)arg1;
@end


@interface ProviderDataConverter : NSObject
+ (id)getConformsToType:(id)arg1 types:(id)arg2;
+ (id)getValidateTypes:(id)arg1 types:(id)arg2;
+ (id)decodeUTF16WithBOM:(id)arg1;
+ (id)covertToString:(id)arg1 textUTType:(id)arg2;
+ (int)getVideoDuration:(id)arg1;
+ (id)generateVideoMessageWrap:(id)arg1;
+ (id)generateMessageWrapWithURL:(id)arg1 type:(id)arg2;
@end
